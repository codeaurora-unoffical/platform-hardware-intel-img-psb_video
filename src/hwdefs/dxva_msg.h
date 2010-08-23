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

 /******************************************************************************

 @File         dxva_msg.h

 @Title        Dxva Firmware Message Flags

 @Platform     Independent 

 @Description  </b>\n This file contains the header file information for the DXVA
               specific MTX/Host messages

******************************************************************************/
#if !defined (__DXVA_MSG_H__)
#define __DXVA_MSG_H__

#if (__cplusplus)
extern "C" {
#endif

/* These come from fwrk_api.h */
/* #include <fwrk_api.h>  */
#define	FWRK_MSGID_START_PSR_HOSTMTX_MSG	(0x80)	//!< Start of parser specific Host->MTX messages.
#define	FWRK_MSGID_START_PSR_MTXHOST_MSG	(0xC0)	//!< Start of parser specific MTX->Host messages.
#define FWRK_MSGID_PADDING					( 0 )

/*!
******************************************************************************
 This type defines the framework specified message ids

 The messages are packed memory based structures accessed using the mem_io.h
 macros.  The control values for these are generated from a file called
 dxva_cmdseq_msg.def using the "regdef" tool.

******************************************************************************/
enum
{
	/*! Sent by the DXVA driver on the host to the mtx firmware.
	 */
	DXVA_MSGID_INIT				= FWRK_MSGID_START_PSR_HOSTMTX_MSG, 
	DXVA_MSGID_RENDER, 
	DXVA_MSGID_DEBLOCK, 
	DXVA_MSGID_OOLD, 

	/* Test Messages */
	DXVA_MSGID_TEST1,
	DXVA_MSGID_TEST2,

	/*! Sent by the mtx firmware to itself.
	 */
	DXVA_MSGID_RENDER_MC_INTERRUPT, 

	/*! Sent by the DXVA firmware on the MTX to the host.
	 */
	DXVA_MSGID_CMD_COMPLETED	= FWRK_MSGID_START_PSR_MTXHOST_MSG, 
	DXVA_MSGID_CMD_COMPLETED_BATCH,
	DXVA_MSGID_DEBLOCK_REQUIRED,
	DXVA_MSGID_TEST_RESPONCE,
	DXVA_MSGID_ACK,

	DXVA_MSGID_CMD_FAILED,
	DXVA_MSGID_CMD_UNSUPPORTED,
	DXVA_MSGID_CMD_HW_PANIC,
};

#if (__cplusplus)
}
#endif
 
#endif
