// SPDX-FileCopyrightText: 2024 Yuichiro Hatanaka
// SPDX-License-Identifier: BSD-3-Clause

#include<stdio.h>
#include<string.h>

#define MAX_PATH_LENGTH 256
#define VQ_MAP_PATH "../sim/vq.bin"
#define CNT_DATA_PATH "../sim/cnt.txt"

typedef struct {
	char vq_data[MAX_PATH_LENGTH];
	char cnt_data[MAX_PATH_LENGTH];
}BC;

int binary_cnt(BC bc){
	//ファイルポインタ
	FILE *vq_fp, *cnt_fp;
	
	if ((vq_fp = fopen(bc.vq_data, "rb")) == NULL){
		perror("ERROR: cannnot open vq file\n");
		return 1;
	}
	if ((cnt_fp = fopen(bc.cnt_data, "w")) == NULL){
		perror("ERROR: cannnot open cnt file\n");
		fclose(vq_fp);
		return 1;
	}
	
}

int main(void){
	BC bc;
	strcpy(bc.vq_data, VQ_MAP_PATH);
	strcpy(bc.cnt_data, CNT_DATA_PATH);
	binary_cnt(bc);
	return 0;
}
