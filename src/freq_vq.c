#include<stdio.h>

#define

int freq_vq(){
    if((freq_data_fp = fopen(freq_data, "r")) == NULL){
        perror("ERROR: cannot open block file\n");
        return 1;
    }
    if((freq_vq_fp = fopen(freq_vq, "wb")) == NULL){
        perror("ERROR: cannot open codebook file\n");
        fclose(freq_data_fp);
        return 1;
	}
	for(int i = 0; pageend; i++){
		fread(tf_vq[i]);
	}

	for(int i=0; i < ; i++){
		for(int j=0; j < vq_index; j++){
			if(tf_vq[j]){
				break;
			}
		}
	}

	fclose(block_fp);
	fclose(codebook_fp);
	fclose();
	return 0;
}

int main(){
	freq_vq();
	return 0;
}
