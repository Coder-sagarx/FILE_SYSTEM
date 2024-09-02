#include<stdio.h>
int main(){
    FILE *ko;
    char ch;
    
    ko=fopen("folder.txt","w");
    if(ko==NULL){
    printf("file not found");
}
printf("enter character :\n");

 while((ch=getchar())!=EOF){
    fputc(ch,ko);
 }
fclose(ko);
   ko=fopen("folder.txt","r");
    if(ko==NULL){
    printf("file not found");
}
 while((ch=fgetc(ko))!=EOF){
    putchar(ch);
 }
fclose(ko);
return 0;
}