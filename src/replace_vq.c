// SPDX-FileCopyrightText: 2024 Yuichiro Hatanaka
// SPDX-License-Identifier: BSD-3-Clause

#include"replace_vq.h"
#include<string.h>

#define REPLACE_TABLE_PATH_ "sort.dat"
#define VQ_DATA_PATH_ "../sim/vq.bin"
#define CODEBOOK_PATH_ "../sim/codebook.bin"
#define REPLACED_VQ_DATA_PATH_ "../sim/replace_vq.bin"
#define REPLACED_CODEBOOK_PATH_ "../sim/replace_codebook.bin"

int open_file(openfile_t file){
	if ((file.vq_fp = fopen(VQ_DATA_PATH_, "rb")) == NULL){
	perror("ERROR: cannot open vq file ");
	return 1;
	}
	if ((file.cb_fp = fopen(CODEBOOK_PATH_, "rb")) == NULL){
	perror("ERROR: cannot open codebook file\n");
	fclose(file.vq_fp);
	return 1;
	}
/*	if ((file.revq_fp = fopen(REPLACED_VQ_DATA_PATH_, "rb")) == NULL){
	perror("ERROR: cannot open replaced vq file\n");
	fclose(file.vq_fp);
	fclose(file.cb_fp);
	return 1;
	}
	if ((file.recb_fp = fopen(REPLACED_CODEBOOK_PATH_, "rb")) == NULL){
	perror("ERROR: cannot open replaced codebook file\n");
	fclose(file.vq_fp);
	fclose(file.cb_fp);
	fclose(file.revq_fp);
	return 1;
	}*/
}

int replace_vq(){

	return 0;
}

int main(){
	openfile_t file;
	FILE file.*vq_fp, *file.cb_fp, *file.revq_fp, *file.recb_fp;
	open_file(file);
	replace_vq();
//	fclose(file.vq_fp);
//	fclose(file.cb_fp);
//	fclose(file.revq_fp);
//	fclose(file.recb_fp);
	return 0;
}
