#include<stdio.h>
#include<string.h>
int main(){
    char ch[50] ,name[80];
    FILE *fp1;
    fp1=fopen("newfolder.txt","w");
    if(fp1==NULL){
        printf("error");
    }
    else{
        printf("enter char  :");
    while(gets(ch)!=NULL){
        fputs(ch,fp1);
        fputs("\n",fp1);
    }
    }
    fclose(fp1);
    printf("\nenter name  :");
    gets(name);
fp1=fopen("newfolder.txt","r");

    if(fp1==NULL){
        printf("error");
    }
    else {
        while(fgets(ch,30,fp1)!=NULL){
    if(strstr(ch,name)){
    printf("found");
     
    }
     else{
           printf("not found");
    }
    }
    }
    fclose(fp1);
    return 0;
}