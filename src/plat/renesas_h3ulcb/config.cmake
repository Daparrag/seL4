#
# Copyright 2018, Diego Guzman<daparrag@correo.udistrital.edu.co>
#
# Copyright 2017, Data61
# Commonwealth Scientific and Industrial Research Organisation (CSIRO)
# ABN 41 687 119 230.
#
# This software may be distributed and modified according to the terms of
# the GNU General Public License version 2. Note that NO WARRANTY is provided.
# See "LICENSE_GPLv2.txt" for details.
#
# @TAG(DATA61_GPL)
#

cmake_minimum_required(VERSION 3.7.2)

if(KernelPlatformRcarH3)
	set(KernelArmCortexA57 ON)
	set(KernelArchArmV8a ON)
	config_set(KernelPlatform PLAT "rcarh3")
	config_set(KernelArmMach MACH "renesas")
	set(KernelHaveFPU ON)
	list(APPEND KernelDTSList "tools/dts/renesas-h3ulcb.dts")
endif()

add_sources(
    DEP "KernelPlatformRcarH3ULCB"
    CFILES
        src/plat/renesas-h3ulcb/machine/hardware.c
        src/plat/renesas-h3ulcb/machine/io.c
        src/plat/renesas-h3ulcb/machine/l2cache.c
        src/arch/arm/machine/generic_timer.c
)