#include<stdio.h>
int main(){
int nu;
FILE *ko;
ko=fopen("newfolder.txt","w");
if(ko==NULL){
printf("file creation error");
return 0;
}
else{
    printf("enter text");
    while(nu!=EOF){
    scanf("%d",&nu);
    putwc(nu,ko);
    }
}
fclose(ko);

ko=fopen("newfolder.txt","r");
if(ko==NULL){
    printf("error");
}
else{
    while((nu=getw(ko))!=EOF){
    printf("%d\n",nu);
    }
}
fclose(ko);
    return 0;
}