/*
 * Copyright (C) 2023 Texas Instruments Incorporated - https://www.ti.com/
 *	Andrew Davis <afd@ti.com>
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef HELPER_H_
#define HELPER_H_

#include <stddef.h>
#include <openamp/open_amp.h>
#include "platform_info.h"

#if defined __cplusplus
extern "C" {
#endif

/**
 * \brief size of memory log for a CPU
 */
#define DEBUG_LOG_SIZE      ( 4*1024U )

extern char debug_log_memory[DEBUG_LOG_SIZE];

#define J721E_R5FSS1_0_MAILBOX 0x31F82000U
#define RPMSG_BASE_ADDR     0xA4000000u
#define RSC_TABLE_BASE_ADDR 0xA4100000u
#define MAILBOX_NEW_MSG_INT 98           /* an64 interrupt number for mailbox -- needs to be changed*/

#define MAILBOX_BASE_ADDR   J721E_R5FSS1_0_MAILBOX

#ifndef RPMSG_NO_IPI
#define INT_BASE_ADDR       0x2FFF0000u	 /* am64 int base -- needs to be changed */
#endif

#if defined __cplusplus
}
#endif

#endif /* HELPER_H_ */
