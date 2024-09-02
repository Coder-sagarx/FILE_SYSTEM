#include<stdio.h>
int main (){
    FILE *ko;
    char ch[50];
    ko=fopen ("digit.txt","w");
    printf("enter char ");
    while(((gets(ch))!=NULL)){
    fputs(ch,ko);
    }
    fclose(ko);


    ko=fopen("digit.txt","r");
    while((fgets(ch,90,ko))!=NULL){
        puts(ch);
    }

    fseek(ko,4,SEEK_SET);
    while((fgets(ch,90,ko))!=NULL){
        puts(ch);
    }
     fseek(ko,4,SEEK_END);
    while((fgets(ch,90,ko))!=NULL){
        puts(ch);
    }
     fseek(ko,-2,SEEK_CUR);
    while((fgets(ch,90,ko))!=NULL){
        puts(ch);
    }

    fclose(ko);
    return 0;
}