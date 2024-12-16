// SPDX-FileCopyrightText: 2024 Yuichiro Hatanaka
// SPDX-License-Identifier: BSD-3-Clause

#ifndef __REPLACE_VQ_H__
#define __REPLACE_VQ_H__

#include<stdio.h>

#define MAX_NAME_LENGTH_ 256

typedef struct {
	FILE *vq_fp, *cb_fp, *revq_fp, *recb_fp;
	char vq[MAX_NAME_LENGTH_];
	char cb[MAX_NAME_LENGTH_];
	char revq[MAX_NAME_LENGTH_];
	char recb[MAX_NAME_LENGTH_];
} openfile_t;

int open_file(openfile_t file);
int replace_vq();

#endif
