#include<stdio.h>
int main(){
char ch;
FILE *ko,*ko1;
ko=fopen("folder.txt","w");
printf("enter character  :");
while((ch=getchar())!=EOF){
    putc(ch,ko);
}
fclose(ko);
ko1=fopen("newfolder.txt","w");
ko=fopen("folder.txt","r");
while((ch=getc(ko))!=EOF){
    if(ch>'a'&&ch<'z'){
        ch=toupper(ch);
        putc(ch,ko1);
    }
    
}
printf("upper case");
fclose(ko);
fclose(ko1);

    return 0;
}