/**********************************************************************
 *
 * Copyright (C) Imagination Technologies Ltd. All rights reserved.
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope it will be useful but, except 
 * as otherwise stated in writing, without any warranty; without even the 
 * implied warranty of merchantability or fitness for a particular purpose. 
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 * 
 * The full GNU General Public License is included in this distribution in
 * the file called "COPYING".
 *
 * Contact Information:
 * Imagination Technologies Ltd. <gpl-support@imgtec.com>
 * Home Park Estate, Kings Langley, Herts, WD4 8LZ, UK 
 *
 ******************************************************************************/

#ifndef _OCPDEFS_H_
#define _OCPDEFS_H_

/* not used in kernel */
#define EUR_CR_OCP_REVISION                 0xFE00
#define EUR_CR_OCP_REVISION_REV_MASK        0xFFFFFFFFUL
#define EUR_CR_OCP_REVISION_REV_SHIFT       0
#define EUR_CR_OCP_REVISION_REV_SIGNED      0

/* not used in kernel */
#define EUR_CR_OCP_HWINFO                   0xFE04
#define EUR_CR_OCP_HWINFO_SYS_BUS_WIDTH_MASK 0x00000003UL
#define EUR_CR_OCP_HWINFO_SYS_BUS_WIDTH_SHIFT 0
#define EUR_CR_OCP_HWINFO_SYS_BUS_WIDTH_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_HWINFO_MEM_BUS_WIDTH_MASK 0x00000004UL
#define EUR_CR_OCP_HWINFO_MEM_BUS_WIDTH_SHIFT 2
#define EUR_CR_OCP_HWINFO_MEM_BUS_WIDTH_SIGNED 0

/* omap4/sysconfig.c 
 * #if !defined(SGX_OCP_NO_INT_BYPASS)
 */
#define EUR_CR_OCP_SYSCONFIG                0xFE10
#define EUR_CR_OCP_SYSCONFIG_IDLE_MODE_MASK 0x0000000CUL
#define EUR_CR_OCP_SYSCONFIG_IDLE_MODE_SHIFT 2
#define EUR_CR_OCP_SYSCONFIG_IDLE_MODE_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_SYSCONFIG_STANDBY_MODE_MASK 0x00000030UL
#define EUR_CR_OCP_SYSCONFIG_STANDBY_MODE_SHIFT 4
#define EUR_CR_OCP_SYSCONFIG_STANDBY_MODE_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_IRQSTATUS_RAW_0          0xFE24
#define EUR_CR_OCP_IRQSTATUS_RAW_0_INIT_MASK 0x00000001UL
#define EUR_CR_OCP_IRQSTATUS_RAW_0_INIT_SHIFT 0
#define EUR_CR_OCP_IRQSTATUS_RAW_0_INIT_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_IRQSTATUS_RAW_1          0xFE28
#define EUR_CR_OCP_IRQSTATUS_RAW_1_TARGET_MASK 0x00000001UL
#define EUR_CR_OCP_IRQSTATUS_RAW_1_TARGET_SHIFT 0
#define EUR_CR_OCP_IRQSTATUS_RAW_1_TARGET_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_IRQSTATUS_RAW_2          0xFE2C
#define EUR_CR_OCP_IRQSTATUS_RAW_2_SGXCORE_MASK 0x00000001UL
#define EUR_CR_OCP_IRQSTATUS_RAW_2_SGXCORE_SHIFT 0
#define EUR_CR_OCP_IRQSTATUS_RAW_2_SGXCORE_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_IRQSTATUS_0              0xFE30
#define EUR_CR_OCP_IRQSTATUS_0_INIT_MASK    0x00000001UL
#define EUR_CR_OCP_IRQSTATUS_0_INIT_SHIFT   0
#define EUR_CR_OCP_IRQSTATUS_0_INIT_SIGNED  0

/* not used in kernel */
#define EUR_CR_OCP_IRQSTATUS_1              0xFE34
#define EUR_CR_OCP_IRQSTATUS_1_TARGET_MASK  0x00000001UL
#define EUR_CR_OCP_IRQSTATUS_1_TARGET_SHIFT 0
#define EUR_CR_OCP_IRQSTATUS_1_TARGET_SIGNED 0

/* #if defined(SGX_OCP_NO_INT_BYPASS)
 * omap4/sysconfig.c
 */
#define EUR_CR_OCP_IRQSTATUS_2              0xFE38
#define EUR_CR_OCP_IRQSTATUS_2_SGXCORE_MASK 0x00000001UL
#define EUR_CR_OCP_IRQSTATUS_2_SGXCORE_SHIFT 0
#define EUR_CR_OCP_IRQSTATUS_2_SGXCORE_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_IRQENABLE_SET_0          0xFE3C
#define EUR_CR_OCP_IRQENABLE_SET_0_INIT_MASK 0x00000001UL
#define EUR_CR_OCP_IRQENABLE_SET_0_INIT_SHIFT 0
#define EUR_CR_OCP_IRQENABLE_SET_0_INIT_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_IRQENABLE_SET_1          0xFE40
#define EUR_CR_OCP_IRQENABLE_SET_1_TARGET_MASK 0x00000001UL
#define EUR_CR_OCP_IRQENABLE_SET_1_TARGET_SHIFT 0
#define EUR_CR_OCP_IRQENABLE_SET_1_TARGET_SIGNED 0

/* #if defined(SGX_OCP_NO_INT_BYPASS)
 * omap4/sysconfig.c
 */
#define EUR_CR_OCP_IRQENABLE_SET_2          0xFE44
#define EUR_CR_OCP_IRQENABLE_SET_2_SGXCORE_MASK 0x00000001UL
#define EUR_CR_OCP_IRQENABLE_SET_2_SGXCORE_SHIFT 0
#define EUR_CR_OCP_IRQENABLE_SET_2_SGXCORE_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_IRQENABLE_CLR_0          0xFE48
#define EUR_CR_OCP_IRQENABLE_CLR_0_INIT_MASK 0x00000001UL
#define EUR_CR_OCP_IRQENABLE_CLR_0_INIT_SHIFT 0
#define EUR_CR_OCP_IRQENABLE_CLR_0_INIT_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_IRQENABLE_CLR_1          0xFE4C
#define EUR_CR_OCP_IRQENABLE_CLR_1_TARGET_MASK 0x00000001UL
#define EUR_CR_OCP_IRQENABLE_CLR_1_TARGET_SHIFT 0
#define EUR_CR_OCP_IRQENABLE_CLR_1_TARGET_SIGNED 0

/* #if defined(SGX_OCP_NO_INT_BYPASS)
 * omap4/sysconfig.c
 */
#define EUR_CR_OCP_IRQENABLE_CLR_2          0xFE50
#define EUR_CR_OCP_IRQENABLE_CLR_2_SGXCORE_MASK 0x00000001UL
#define EUR_CR_OCP_IRQENABLE_CLR_2_SGXCORE_SHIFT 0
#define EUR_CR_OCP_IRQENABLE_CLR_2_SGXCORE_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_PAGE_CONFIG              0xFF00
#define EUR_CR_OCP_PAGE_CONFIG_MEM_PAGE_SIZE_MASK 0x00000001UL
#define EUR_CR_OCP_PAGE_CONFIG_MEM_PAGE_SIZE_SHIFT 0
#define EUR_CR_OCP_PAGE_CONFIG_MEM_PAGE_SIZE_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_PAGE_CONFIG_MEM_PAGE_CHECK_ENABLE_MASK 0x00000004UL
#define EUR_CR_OCP_PAGE_CONFIG_MEM_PAGE_CHECK_ENABLE_SHIFT 2
#define EUR_CR_OCP_PAGE_CONFIG_MEM_PAGE_CHECK_ENABLE_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_PAGE_CONFIG_SIZE_MASK    0x00000018UL
#define EUR_CR_OCP_PAGE_CONFIG_SIZE_SHIFT   3
#define EUR_CR_OCP_PAGE_CONFIG_SIZE_SIGNED  0

/* not used in kernel */
#define EUR_CR_OCP_INTERRUPT_EVENT          0xFF04
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_RESP_UNEXPECTED_MASK 0x00000001UL
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_RESP_UNEXPECTED_SHIFT 0
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_RESP_UNEXPECTED_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_RESP_UNUSED_TAG_MASK 0x00000002UL
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_RESP_UNUSED_TAG_SHIFT 1
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_RESP_UNUSED_TAG_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_RESP_ERROR_MASK 0x00000004UL
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_RESP_ERROR_SHIFT 2
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_RESP_ERROR_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_PAGE_CROSS_ERROR_MASK 0x00000008UL
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_PAGE_CROSS_ERROR_SHIFT 3
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_PAGE_CROSS_ERROR_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_READ_TAG_FIFO_OVR_MASK 0x00000010UL
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_READ_TAG_FIFO_OVR_SHIFT 4
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_READ_TAG_FIFO_OVR_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_MEM_REQ_FIFO_OVR_MASK 0x00000020UL
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_MEM_REQ_FIFO_OVR_SHIFT 5
#define EUR_CR_OCP_INTERRUPT_EVENT_INIT_MEM_REQ_FIFO_OVR_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_INTERRUPT_EVENT_TARGET_RESP_FIFO_FULL_MASK 0x00000100UL
#define EUR_CR_OCP_INTERRUPT_EVENT_TARGET_RESP_FIFO_FULL_SHIFT 8
#define EUR_CR_OCP_INTERRUPT_EVENT_TARGET_RESP_FIFO_FULL_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_INTERRUPT_EVENT_TARGET_CMD_FIFO_FULL_MASK 0x00000200UL
#define EUR_CR_OCP_INTERRUPT_EVENT_TARGET_CMD_FIFO_FULL_SHIFT 9
#define EUR_CR_OCP_INTERRUPT_EVENT_TARGET_CMD_FIFO_FULL_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_INTERRUPT_EVENT_TARGET_INVALID_OCP_CMD_MASK 0x00000400UL
#define EUR_CR_OCP_INTERRUPT_EVENT_TARGET_INVALID_OCP_CMD_SHIFT 10
#define EUR_CR_OCP_INTERRUPT_EVENT_TARGET_INVALID_OCP_CMD_SIGNED 0

/* omap4/sysconfig.c
 * #if !defined(SGX_OCP_NO_INT_BYPASS)
 */
#define EUR_CR_OCP_DEBUG_CONFIG             0xFF08
#define EUR_CR_OCP_DEBUG_CONFIG_FORCE_TARGET_IDLE_MASK 0x00000003UL
#define EUR_CR_OCP_DEBUG_CONFIG_FORCE_TARGET_IDLE_SHIFT 0
#define EUR_CR_OCP_DEBUG_CONFIG_FORCE_TARGET_IDLE_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_CONFIG_FORCE_INIT_IDLE_MASK 0x0000000CUL
#define EUR_CR_OCP_DEBUG_CONFIG_FORCE_INIT_IDLE_SHIFT 2
#define EUR_CR_OCP_DEBUG_CONFIG_FORCE_INIT_IDLE_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_CONFIG_FORCE_PASS_DATA_MASK 0x00000010UL
#define EUR_CR_OCP_DEBUG_CONFIG_FORCE_PASS_DATA_SHIFT 4
#define EUR_CR_OCP_DEBUG_CONFIG_FORCE_PASS_DATA_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_CONFIG_SELECT_INIT_IDLE_MASK 0x00000020UL
#define EUR_CR_OCP_DEBUG_CONFIG_SELECT_INIT_IDLE_SHIFT 5
#define EUR_CR_OCP_DEBUG_CONFIG_SELECT_INIT_IDLE_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_CONFIG_THALIA_INT_BYPASS_MASK 0x80000000UL
#define EUR_CR_OCP_DEBUG_CONFIG_THALIA_INT_BYPASS_SHIFT 31
#define EUR_CR_OCP_DEBUG_CONFIG_THALIA_INT_BYPASS_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS             0xFF0C
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_MCONNECT_MASK 0x00000003UL
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_MCONNECT_SHIFT 0
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_MCONNECT_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_SCONNECT_MASK 0x00000004UL
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_SCONNECT_SHIFT 2
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_SCONNECT_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_SIDLEREQ_MASK 0x00000008UL
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_SIDLEREQ_SHIFT 3
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_SIDLEREQ_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_SDISCACK_MASK 0x00000030UL
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_SDISCACK_SHIFT 4
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_SDISCACK_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_SIDLEACK_MASK 0x000000C0UL
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_SIDLEACK_SHIFT 6
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_SIDLEACK_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_INIT_MCONNECT0_MASK 0x00000300UL
#define EUR_CR_OCP_DEBUG_STATUS_INIT_MCONNECT0_SHIFT 8
#define EUR_CR_OCP_DEBUG_STATUS_INIT_MCONNECT0_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_INIT_SCONNECT0_MASK 0x00000400UL
#define EUR_CR_OCP_DEBUG_STATUS_INIT_SCONNECT0_SHIFT 10
#define EUR_CR_OCP_DEBUG_STATUS_INIT_SCONNECT0_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_INIT_SCONNECT1_MASK 0x00000800UL
#define EUR_CR_OCP_DEBUG_STATUS_INIT_SCONNECT1_SHIFT 11
#define EUR_CR_OCP_DEBUG_STATUS_INIT_SCONNECT1_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_INIT_SCONNECT2_MASK 0x00001000UL
#define EUR_CR_OCP_DEBUG_STATUS_INIT_SCONNECT2_SHIFT 12
#define EUR_CR_OCP_DEBUG_STATUS_INIT_SCONNECT2_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_INIT_MDISCACK_MASK 0x00006000UL
#define EUR_CR_OCP_DEBUG_STATUS_INIT_MDISCACK_SHIFT 13
#define EUR_CR_OCP_DEBUG_STATUS_INIT_MDISCACK_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_INIT_MDISCREQ_MASK 0x00008000UL
#define EUR_CR_OCP_DEBUG_STATUS_INIT_MDISCREQ_SHIFT 15
#define EUR_CR_OCP_DEBUG_STATUS_INIT_MDISCREQ_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_INIT_MWAIT_MASK 0x00010000UL
#define EUR_CR_OCP_DEBUG_STATUS_INIT_MWAIT_SHIFT 16
#define EUR_CR_OCP_DEBUG_STATUS_INIT_MWAIT_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_INIT_MSTANDBY_MASK 0x00020000UL
#define EUR_CR_OCP_DEBUG_STATUS_INIT_MSTANDBY_SHIFT 17
#define EUR_CR_OCP_DEBUG_STATUS_INIT_MSTANDBY_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_CMD_OUT_MASK 0x001C0000UL
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_CMD_OUT_SHIFT 18
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_CMD_OUT_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_WHICH_TARGET_REGISTER_MASK 0x03E00000UL
#define EUR_CR_OCP_DEBUG_STATUS_WHICH_TARGET_REGISTER_SHIFT 21
#define EUR_CR_OCP_DEBUG_STATUS_WHICH_TARGET_REGISTER_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_RESP_ERROR_MASK 0x04000000UL
#define EUR_CR_OCP_DEBUG_STATUS_RESP_ERROR_SHIFT 26
#define EUR_CR_OCP_DEBUG_STATUS_RESP_ERROR_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_CMD_FIFO_FULL_MASK 0x08000000UL
#define EUR_CR_OCP_DEBUG_STATUS_CMD_FIFO_FULL_SHIFT 27
#define EUR_CR_OCP_DEBUG_STATUS_CMD_FIFO_FULL_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_RESP_FIFO_FULL_MASK 0x10000000UL
#define EUR_CR_OCP_DEBUG_STATUS_RESP_FIFO_FULL_SHIFT 28
#define EUR_CR_OCP_DEBUG_STATUS_RESP_FIFO_FULL_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_IDLE_MASK 0x20000000UL
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_IDLE_SHIFT 29
#define EUR_CR_OCP_DEBUG_STATUS_TARGET_IDLE_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_CMD_RESP_DEBUG_STATE_MASK 0x40000000UL
#define EUR_CR_OCP_DEBUG_STATUS_CMD_RESP_DEBUG_STATE_SHIFT 30
#define EUR_CR_OCP_DEBUG_STATUS_CMD_RESP_DEBUG_STATE_SIGNED 0

/* not used in kernel */
#define EUR_CR_OCP_DEBUG_STATUS_CMD_DEBUG_STATE_MASK 0x80000000UL
#define EUR_CR_OCP_DEBUG_STATUS_CMD_DEBUG_STATE_SHIFT 31
#define EUR_CR_OCP_DEBUG_STATUS_CMD_DEBUG_STATE_SIGNED 0


#endif 

