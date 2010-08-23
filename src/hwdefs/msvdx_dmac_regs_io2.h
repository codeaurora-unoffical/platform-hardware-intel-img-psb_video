/*
 * INTEL CONFIDENTIAL
 * Copyright 2007 Intel Corporation. All Rights Reserved.
 * Copyright 2005-2007 Imagination Technologies Limited. All Rights Reserved.
 *
 * The source code contained or described herein and all documents related to
 * the source code ("Material") are owned by Intel Corporation or its suppliers
 * or licensors. Title to the Material remains with Intel Corporation or its
 * suppliers and licensors. The Material may contain trade secrets and
 * proprietary and confidential information of Intel Corporation and its
 * suppliers and licensors, and is protected by worldwide copyright and trade
 * secret laws and treaty provisions. No part of the Material may be used,
 * copied, reproduced, modified, published, uploaded, posted, transmitted,
 * distributed, or disclosed in any way without Intel's prior express written
 * permission. 
 * 
 * No license under any patent, copyright, trade secret or other intellectual
 * property right is granted to or conferred upon you by disclosure or delivery
 * of the Materials, either expressly, by implication, inducement, estoppel or
 * otherwise. Any license under such intellectual property rights must be
 * express and approved by Intel in writing.
 */

/*!
******************************************************************************
@file   : /work/sim/msvdx/register_includes/msvdx_dmac_regs_io2.h

@brief  

@Author <Autogenerated>

<b>Description:</b>\n
		This file contains the MSVDX_DMAC_REGS_IO2_H Defintions.

<b>Platform:</b>\n
		? 

@Version
		1.0

******************************************************************************/

#if !defined (__MSVDX_DMAC_REGS_IO2_H__)
#define __MSVDX_DMAC_REGS_IO2_H__

#ifdef __cplusplus
extern "C" {
#endif


#define DMAC_DMAC_SETUP_OFFSET		(0x0000)
#define DMAC_DMAC_SETUP_STRIDE		(32)
#define DMAC_DMAC_SETUP_NO_ENTRIES		(4)

// DMAC     DMAC_SETUP     START_ADDRESS
#define DMAC_DMAC_SETUP_START_ADDRESS_MASK		(0xFFFFFFFF)
#define DMAC_DMAC_SETUP_START_ADDRESS_LSBMASK		(0xFFFFFFFF)
#define DMAC_DMAC_SETUP_START_ADDRESS_SHIFT		(0)

#define DMAC_DMAC_COUNT_OFFSET		(0x0004)
#define DMAC_DMAC_COUNT_STRIDE		(32)
#define DMAC_DMAC_COUNT_NO_ENTRIES		(4)

// DMAC     DMAC_COUNT     LIST_IEN
#define DMAC_DMAC_COUNT_LIST_IEN_MASK		(0x80000000)
#define DMAC_DMAC_COUNT_LIST_IEN_LSBMASK		(0x00000001)
#define DMAC_DMAC_COUNT_LIST_IEN_SHIFT		(31)

// DMAC     DMAC_COUNT     BSWAP
#define DMAC_DMAC_COUNT_BSWAP_MASK		(0x40000000)
#define DMAC_DMAC_COUNT_BSWAP_LSBMASK		(0x00000001)
#define DMAC_DMAC_COUNT_BSWAP_SHIFT		(30)

// DMAC     DMAC_COUNT     TRANSFER_IEN
#define DMAC_DMAC_COUNT_TRANSFER_IEN_MASK		(0x20000000)
#define DMAC_DMAC_COUNT_TRANSFER_IEN_LSBMASK		(0x00000001)
#define DMAC_DMAC_COUNT_TRANSFER_IEN_SHIFT		(29)

// DMAC     DMAC_COUNT     PW
#define DMAC_DMAC_COUNT_PW_MASK		(0x18000000)
#define DMAC_DMAC_COUNT_PW_LSBMASK		(0x00000003)
#define DMAC_DMAC_COUNT_PW_SHIFT		(27)

// DMAC     DMAC_COUNT     DIR
#define DMAC_DMAC_COUNT_DIR_MASK		(0x04000000)
#define DMAC_DMAC_COUNT_DIR_LSBMASK		(0x00000001)
#define DMAC_DMAC_COUNT_DIR_SHIFT		(26)

// DMAC     DMAC_COUNT     PI
#define DMAC_DMAC_COUNT_PI_MASK		(0x03000000)
#define DMAC_DMAC_COUNT_PI_LSBMASK		(0x00000003)
#define DMAC_DMAC_COUNT_PI_SHIFT		(24)

// DMAC     DMAC_COUNT     LIST_FIN_CTL
#define DMAC_DMAC_COUNT_LIST_FIN_CTL_MASK		(0x00400000)
#define DMAC_DMAC_COUNT_LIST_FIN_CTL_LSBMASK		(0x00000001)
#define DMAC_DMAC_COUNT_LIST_FIN_CTL_SHIFT		(22)

// DMAC     DMAC_COUNT     DREQ
#define DMAC_DMAC_COUNT_DREQ_MASK		(0x00100000)
#define DMAC_DMAC_COUNT_DREQ_LSBMASK		(0x00000001)
#define DMAC_DMAC_COUNT_DREQ_SHIFT		(20)

// DMAC     DMAC_COUNT     SRST
#define DMAC_DMAC_COUNT_SRST_MASK		(0x00080000)
#define DMAC_DMAC_COUNT_SRST_LSBMASK		(0x00000001)
#define DMAC_DMAC_COUNT_SRST_SHIFT		(19)

// DMAC     DMAC_COUNT     LIST_EN
#define DMAC_DMAC_COUNT_LIST_EN_MASK		(0x00040000)
#define DMAC_DMAC_COUNT_LIST_EN_LSBMASK		(0x00000001)
#define DMAC_DMAC_COUNT_LIST_EN_SHIFT		(18)

// DMAC     DMAC_COUNT     ENABLE_2D_MODE
#define DMAC_DMAC_COUNT_ENABLE_2D_MODE_MASK		(0x00020000)
#define DMAC_DMAC_COUNT_ENABLE_2D_MODE_LSBMASK		(0x00000001)
#define DMAC_DMAC_COUNT_ENABLE_2D_MODE_SHIFT		(17)

// DMAC     DMAC_COUNT     EN
#define DMAC_DMAC_COUNT_EN_MASK		(0x00010000)
#define DMAC_DMAC_COUNT_EN_LSBMASK		(0x00000001)
#define DMAC_DMAC_COUNT_EN_SHIFT		(16)

// DMAC     DMAC_COUNT     CNT
#define DMAC_DMAC_COUNT_CNT_MASK		(0x0000FFFF)
#define DMAC_DMAC_COUNT_CNT_LSBMASK		(0x0000FFFF)
#define DMAC_DMAC_COUNT_CNT_SHIFT		(0)

#define DMAC_DMAC_PERIPH_OFFSET		(0x0008)
#define DMAC_DMAC_PERIPH_STRIDE		(32)
#define DMAC_DMAC_PERIPH_NO_ENTRIES		(4)

// DMAC     DMAC_PERIPH     ACC_DEL
#define DMAC_DMAC_PERIPH_ACC_DEL_MASK		(0xE0000000)
#define DMAC_DMAC_PERIPH_ACC_DEL_LSBMASK		(0x00000007)
#define DMAC_DMAC_PERIPH_ACC_DEL_SHIFT		(29)

// DMAC     DMAC_PERIPH     INCR
#define DMAC_DMAC_PERIPH_INCR_MASK		(0x08000000)
#define DMAC_DMAC_PERIPH_INCR_LSBMASK		(0x00000001)
#define DMAC_DMAC_PERIPH_INCR_SHIFT		(27)

// DMAC     DMAC_PERIPH     BURST
#define DMAC_DMAC_PERIPH_BURST_MASK		(0x07000000)
#define DMAC_DMAC_PERIPH_BURST_LSBMASK		(0x00000007)
#define DMAC_DMAC_PERIPH_BURST_SHIFT		(24)

// DMAC     DMAC_PERIPH     EXT_SA
#define DMAC_DMAC_PERIPH_EXT_SA_MASK		(0x0000000F)
#define DMAC_DMAC_PERIPH_EXT_SA_LSBMASK		(0x0000000F)
#define DMAC_DMAC_PERIPH_EXT_SA_SHIFT		(0)

#define DMAC_DMAC_IRQ_STAT_OFFSET		(0x000C)
#define DMAC_DMAC_IRQ_STAT_STRIDE		(32)
#define DMAC_DMAC_IRQ_STAT_NO_ENTRIES		(4)

// DMAC     DMAC_IRQ_STAT     LIST_FIN
#define DMAC_DMAC_IRQ_STAT_LIST_FIN_MASK		(0x00200000)
#define DMAC_DMAC_IRQ_STAT_LIST_FIN_LSBMASK		(0x00000001)
#define DMAC_DMAC_IRQ_STAT_LIST_FIN_SHIFT		(21)

// DMAC     DMAC_IRQ_STAT     LIST_INT
#define DMAC_DMAC_IRQ_STAT_LIST_INT_MASK		(0x00100000)
#define DMAC_DMAC_IRQ_STAT_LIST_INT_LSBMASK		(0x00000001)
#define DMAC_DMAC_IRQ_STAT_LIST_INT_SHIFT		(20)

// DMAC     DMAC_IRQ_STAT     TRANSFER_FIN
#define DMAC_DMAC_IRQ_STAT_TRANSFER_FIN_MASK		(0x00020000)
#define DMAC_DMAC_IRQ_STAT_TRANSFER_FIN_LSBMASK		(0x00000001)
#define DMAC_DMAC_IRQ_STAT_TRANSFER_FIN_SHIFT		(17)

#define DMAC_DMAC_2D_MODE_OFFSET		(0x0010)
#define DMAC_DMAC_2D_MODE_STRIDE		(32)
#define DMAC_DMAC_2D_MODE_NO_ENTRIES		(4)

// DMAC     DMAC_2D_MODE     REP_COUNT
#define DMAC_DMAC_2D_MODE_REP_COUNT_MASK		(0x7FF00000)
#define DMAC_DMAC_2D_MODE_REP_COUNT_LSBMASK		(0x000007FF)
#define DMAC_DMAC_2D_MODE_REP_COUNT_SHIFT		(20)

// DMAC     DMAC_2D_MODE     LINE_ADDR_OFFSET
#define DMAC_DMAC_2D_MODE_LINE_ADDR_OFFSET_MASK		(0x000FFC00)
#define DMAC_DMAC_2D_MODE_LINE_ADDR_OFFSET_LSBMASK		(0x000003FF)
#define DMAC_DMAC_2D_MODE_LINE_ADDR_OFFSET_SHIFT		(10)

// DMAC     DMAC_2D_MODE     ROW_LENGTH
#define DMAC_DMAC_2D_MODE_ROW_LENGTH_MASK		(0x000003FF)
#define DMAC_DMAC_2D_MODE_ROW_LENGTH_LSBMASK		(0x000003FF)
#define DMAC_DMAC_2D_MODE_ROW_LENGTH_SHIFT		(0)

#define DMAC_DMAC_PERIPHERAL_ADDR_OFFSET		(0x0014)
#define DMAC_DMAC_PERIPHERAL_ADDR_STRIDE		(32)
#define DMAC_DMAC_PERIPHERAL_ADDR_NO_ENTRIES		(4)

// DMAC     DMAC_PERIPHERAL_ADDR     ADDR
#define DMAC_DMAC_PERIPHERAL_ADDR_ADDR_MASK		(0x007FFFFF)
#define DMAC_DMAC_PERIPHERAL_ADDR_ADDR_LSBMASK		(0x007FFFFF)
#define DMAC_DMAC_PERIPHERAL_ADDR_ADDR_SHIFT		(0)

#define DMAC_DMAC_PER_HOLD_OFFSET		(0x0018)
#define DMAC_DMAC_PER_HOLD_STRIDE		(32)
#define DMAC_DMAC_PER_HOLD_NO_ENTRIES		(4)

// DMAC     DMAC_PER_HOLD     PER_HOLD
#define DMAC_DMAC_PER_HOLD_PER_HOLD_MASK		(0x0000007F)
#define DMAC_DMAC_PER_HOLD_PER_HOLD_LSBMASK		(0x0000007F)
#define DMAC_DMAC_PER_HOLD_PER_HOLD_SHIFT		(0)

#define DMAC_DMAC_SOFT_RESET_OFFSET		(0x0080)



#ifdef __cplusplus
}
#endif

#endif /* __MSVDX_DMAC_REGS_IO2_H__ */
