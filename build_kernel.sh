#!/bin/bash

export ARCH=arm
export CROSS_COMPILE=arm-eabi-

# make kernel zImage
if [ ! -e .config ]; then
make apq8084_sec_defconfig  \
     VARIANT_DEFCONFIG=apq8084_sec_lentislte_ktt_defconfig \
     SELINUX_DEFCONFIG=selinux_defconfig \
     TIMA_DEFCONFIG=tima_defconfig
fi
make -j4


# make modules
mkdir -p .ko
make -C qcacld-2.0/ -j4
find drivers/ -name *.ko -exec cp {} .ko \;
find .ko/*.ko -exec arm-eabi-strip --strip-unneeded {} \;



# make dt.img
tools/dtbTool -o dt.img -s 4096 -p scripts/dtc/ arch/arm/boot/dts/



# make boot.img
BOARD_KERNEL_BASE=0x00000000
BOARD_KERNEL_PAGESIZE=4096
BOARD_KERNEL_TAGS_OFFSET=0x02000000
BOARD_RAMDISK_OFFSET=0x02200000
#BOARD_KERNEL_CMDLINE="console=ttyHSL0,115200,n8 androidboot.hardware=qcom user_debug=31 msm_rtb.filter=0x37 ehci-hcd.park=3"
BOARD_KERNEL_CMDLINE="console=null androidboot.hardware=qcom user_debug=31 msm_rtb.filter=0x37 dwc3_msm.cpu_to_affin=1" 
tools/mkbootimg --kernel arch/arm/boot/zImage \
		--ramdisk ramdisk.gz \
		--output boot.img \
		--cmdline "$BOARD_KERNEL_CMDLINE" \
		--base $BOARD_KERNEL_BASE \
		--pagesize $BOARD_KERNEL_PAGESIZE \
		--ramdisk_offset $BOARD_RAMDISK_OFFSET \
		--tags_offset $BOARD_KERNEL_TAGS_OFFSET \
		--dt dt.img
printf SEANDROIDENFORCE >> boot.img
