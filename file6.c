#include<stdio.h>
int main(){
    char ch1 ;
     
    FILE *ko1,*ko2;
    ko1=fopen("folder.txt","w");
    if(ko1==NULL){
        printf("file error");
    }
    printf("enter content");
    while((ch1=getchar())!=EOF){
    putc(ch1,ko1);
    }
    fclose(ko1);

     ko1=fopen("folder.txt","r");
    ko2=fopen("newfolder.txt","w");
    if(ko2==NULL){
        printf("file error");
    }
    while((ch1=getc(ko1))!=EOF){
    putc(ch1,ko2);
    }
    printf("\ncopied\n");
    fclose(ko2);
    fclose(ko1);

}