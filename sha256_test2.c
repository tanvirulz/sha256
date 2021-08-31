/*********************************************************************
* Filename:   sha256.c
* Author:     Tanvirul Islam
* Copyright:
* Disclaimer: This code is presented "as is" without any guarantees.
* Details:    Tests the hash_sha256() function 
		    that combines the 3 calls to the original API
*********************************************************************/

#include <stdio.h>
#include <memory.h>
#include <string.h>
#include "sha256.h"


int main(){
    BYTE text1[] = {"1234567890_4"};
    SHA256_CTX ctx;
    BYTE hash_buf[SHA256_BLOCK_SIZE];
    int i;
    
    hash_sha256(text1,strlen(text1),hash_buf);  /*hash_buf := sha256(text1)*/

    for(i=0;i<SHA256_BLOCK_SIZE;i++){
        printf("%02x",hash_buf[i]);
    }
    printf("\n");

    return 0;
}
