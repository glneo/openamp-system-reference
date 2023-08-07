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

#if defined __cplusplus
extern "C" {
#endif

/**
 * \brief size of memory log for a CPU
 */
#define DEBUG_LOG_SIZE      ( 4*1024U )

extern char debug_log_memory[DEBUG_LOG_SIZE];

#define AM64_R5FSS1_0_MAILBOX 0x29040000U
#define RPMSG_BASE_ADDR       0xA2000000u
#define RSC_TABLE_BASE_ADDR   0xA2100000u

#define MAILBOX_BASE_ADDR   AM64_R5FSS1_0_MAILBOX

#ifndef RPMSG_NO_IPI
#define MAILBOX_NEW_MSG_INT 98  // 65?
#define INT_BASE_ADDR       0x2FFF0000u
#endif

#if defined __cplusplus
}
#endif

#endif /* HELPER_H_ */
