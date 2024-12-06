// SPDX-FileCopyrightText: 2024 Yuichiro Hatanaka
// SPDX-License-Identifier: BSD-3-Clause

#include"max_sarch.h"

#define VQ_DATA_PATH "../sim/vq.bin"

int max_index_sarch(){
	FILE *vq_fp;
	unsigned short max_index = 0;
	unsigned short index = 0;

	//ファイルを開く
	if ((vq_fp = fopen(VQ_DATA_PATH, "r+b")) == NULL){
		perror("VQ_DATA_PATH");
		return 1;
	}

	//ファイルサイズを取得
	fseek(vq_fp, 0, SEEK_END);
	int length = ftell(vq_fp)/sizeof(short);
	fseek(vq_fp, 0, SEEK_SET);
	
	//代表ベクトルの数を取得
	for(int i = 0; i < length; i++){
		fread(&index, sizeof(short), 1, vq_fp);
		if(index > max_index){
			max_index = index;
		}
	}
	fseek(vq_fp, 0, SEEK_SET);
	
	//配列を初期化
	int cnt_rep_vector[max_index];
	for(int i = 0; i < max_index; i++){
		cnt_rep_vector[i] = 0;
	}
	//代表ベクトルの数をカウント
	for(int i = 0; i < length; i++){
		fread(&index, sizeof(short), 1, vq_fp);
		cnt_rep_vector[index]++;
	}
	//結果を表示
	for(int i = 0; i < max_index; i++)
		printf("%d: %d\n", i+1, cnt_rep_vector[i]);
	
	//ファイルクローズ
	fclose(vq_fp);
	return 0;
}

int main(){
	max_index_sarch();	
	return 0;
}
