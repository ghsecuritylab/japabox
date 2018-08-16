INCLUDE(CMakeForceCompiler)

# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

 
# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})


SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -g")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -Wall")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mthumb")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-common")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -mapcs")

SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -D__STARTUP_CLEAR_BSS")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -Wall")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mthumb")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-common")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mapcs")

SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DCPU_MK66FN2M0VMD18")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFRDM_K66F")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DFREEDOM")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mthumb")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MMD")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -MP")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-common")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -mapcs")

SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -std=gnu99")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DNDEBUG")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DCPU_MK66FN2M0VMD18")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFRDM_K66F")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DFREEDOM")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Os")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Wall")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mthumb")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MMD")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -MP")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-common")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -mapcs")

SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -std=gnu99")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mfpu=fpv4-sp-d16")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -static")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -z")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} --defsym=__ram_vector_table__=1")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -g")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mcpu=cortex-m4")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Wall")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfloat-abi=hard")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mfpu=fpv4-sp-d16")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --specs=nano.specs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-common")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffunction-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fdata-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -ffreestanding")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fno-builtin")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mthumb")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -mapcs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --gc-sections")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -static")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -z")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} muldefs")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -Xlinker")

SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} --defsym=__ram_vector_table__=1")

include_directories(${ProjDirPath}/..)

include_directories(${ProjDirPath}/..)

include_directories(${ProjDirPath}/)

include_directories(${ProjDirPath}/../../../../../../../CMSIS/Include)

include_directories(${ProjDirPath}/../../../../../../../devices)

include_directories(${ProjDirPath}/../../../../../../../devices/MK66F18/drivers)

include_directories(${ProjDirPath}/..)

include_directories(${ProjDirPath}/../../../../../../../devices/MK66F18/utilities)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/port)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/port/arch)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/ipv4)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/ipv4/lwip)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/ipv6)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/ipv6/lwip)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/netif)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/posix)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include)

include_directories(${ProjDirPath}/../../../../..)

include_directories(${ProjDirPath}/../../../../../../../devices/MK66F18)

include_directories(${ProjDirPath}/)

include_directories(${ProjDirPath}/../../../../../../../CMSIS/Include)

include_directories(${ProjDirPath}/../../../../../../../devices)

include_directories(${ProjDirPath}/../../../../../../../devices/MK66F18/drivers)

include_directories(${ProjDirPath}/..)

include_directories(${ProjDirPath}/../../../../../../../devices/MK66F18/utilities)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/port)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/port/arch)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/ipv4)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/ipv4/lwip)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/ipv6)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/ipv6/lwip)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/netif)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/posix)

include_directories(${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include)

include_directories(${ProjDirPath}/../../../../..)

include_directories(${ProjDirPath}/../../../../../../../devices/MK66F18)

add_executable(lwip_tcpecho_bm.elf 
"${ProjDirPath}/../../../../../../../devices/MK66F18/gcc/startup_MK66F18.S"
"${ProjDirPath}/../fsl_phy.h"
"${ProjDirPath}/../fsl_phy.c"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_uart.h"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_uart.c"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_lpuart.h"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_lpuart.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/port/arch/cc.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/port/arch/perf.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/port/ethernetif.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/port/lwipopts.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/port/sys_arch.c"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_port.h"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_sim.c"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_clock.h"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_clock.c"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_enet.h"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_enet.c"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_pit.c"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_pit.h"
"${ProjDirPath}/../echo.h"
"${ProjDirPath}/../lwip_tcpecho_bm.c"
"${ProjDirPath}/../pin_mux.c"
"${ProjDirPath}/../pin_mux.h"
"${ProjDirPath}/../board.c"
"${ProjDirPath}/../board.h"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_common.h"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_common.c"
"${ProjDirPath}/../../../../../../../devices/MK66F18/utilities/fsl_debug_console.c"
"${ProjDirPath}/../../../../../../../devices/MK66F18/utilities/fsl_debug_console.h"
"${ProjDirPath}/../../../../../../../devices/MK66F18/system_MK66F18.c"
"${ProjDirPath}/../../../../../../../devices/MK66F18/system_MK66F18.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/api/api_lib.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/api/api_msg.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/api/err.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/api/netbuf.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/api/netdb.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/api/netifapi.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/api/sockets.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/api/tcpip.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/def.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/dhcp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/dns.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/init.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/mem.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/memp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/netif.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/pbuf.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/raw.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/stats.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/sys.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/tcp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/tcp_in.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/tcp_out.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/lwip_timers.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/udp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/ipv4/autoip.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/ipv4/icmp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/ipv4/igmp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/ipv4/inet.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/ipv4/inet_chksum.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/ipv4/ip.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/ipv4/ip_addr.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/ipv4/ip_frag.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/snmp/asn1_dec.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/snmp/asn1_enc.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/snmp/mib2.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/snmp/mib_structs.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/snmp/msg_in.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/core/snmp/msg_out.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/ipv4/lwip/autoip.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/ipv4/lwip/icmp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/ipv4/lwip/igmp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/ipv4/lwip/inet.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/ipv4/lwip/inet_chksum.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/ipv4/lwip/ip.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/ipv4/lwip/ip_addr.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/ipv4/lwip/ip_frag.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/api.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/api_msg.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/arch.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/debug.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/def.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/dhcp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/dns.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/err.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/init.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/mem.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/memp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/memp_std.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/netbuf.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/netdb.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/netif.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/netifapi.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/opt.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/pbuf.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/raw.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/sio.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/snmp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/snmp_asn1.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/snmp_msg.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/snmp_structs.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/sockets.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/stats.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/sys.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/tcp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/tcpip.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/tcp_impl.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/timers.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/lwip/udp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/netif/etharp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/netif/ppp_oe.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/netif/slipif.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/posix/netdb.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/include/posix/sys/socket.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/etharp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/slipif.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/auth.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/auth.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/chap.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/chap.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/chpms.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/chpms.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/fsm.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/fsm.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/ipcp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/ipcp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/lcp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/lcp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/magic.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/magic.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/ppp_md5.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/md5.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/pap.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/pap.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/ppp.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/ppp.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/pppdebug.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/ppp_impl.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/ppp_oe.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/randm.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/randm.h"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/vj.c"
"${ProjDirPath}/../../../../../../../middleware/lwip_1.4.1/src/netif/ppp/vj.h"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_gpio.h"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_gpio.c"
"${ProjDirPath}/../clock_config.c"
"${ProjDirPath}/../clock_config.h"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_smc.h"
"${ProjDirPath}/../../../../../../../devices/MK66F18/drivers/fsl_smc.c"
)


set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -T${ProjDirPath}/MK66FN2M0xxx18_flash.ld -static")

set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -T${ProjDirPath}/MK66FN2M0xxx18_flash.ld -static")

TARGET_LINK_LIBRARIES(lwip_tcpecho_bm.elf -Wl,--start-group)
target_link_libraries(lwip_tcpecho_bm.elf debug m)

target_link_libraries(lwip_tcpecho_bm.elf debug c)

target_link_libraries(lwip_tcpecho_bm.elf debug gcc)

target_link_libraries(lwip_tcpecho_bm.elf debug nosys)

target_link_libraries(lwip_tcpecho_bm.elf optimized m)

target_link_libraries(lwip_tcpecho_bm.elf optimized c)

target_link_libraries(lwip_tcpecho_bm.elf optimized gcc)

target_link_libraries(lwip_tcpecho_bm.elf optimized nosys)

TARGET_LINK_LIBRARIES(lwip_tcpecho_bm.elf -Wl,--end-group)

