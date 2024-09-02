#include<stdio.h>
int main(){
    char ch;
    FILE *koko;
    koko=fopen("newfolder.txt","r");
    if(koko==NULL){
        printf("file noes not exit");

    }
    else{
  fclose(koko);
    }
}