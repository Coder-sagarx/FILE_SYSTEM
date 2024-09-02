#include<stdio.h>
int main(){
char ch ;
FILE *ko,*ko1,*ko2,*ko3,*ko4;
ko=fopen("folder.txt","w");
printf("enter character  :");
while ((ch=getwchar())!=EOF){  
putc(ch,ko);
}
fclose(ko);

ko1=fopen("vowels.txt","w");
ko2=fopen("consonent.txt","w");
ko3=fopen("specialnu.txt","w");
ko4=fopen("digit.txt","w");
ko=fopen("folder.txt","r");
while ((ch=getc(ko))!=EOF){  

if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
    putc(ch,ko1);
 }
 else{
    putc(ch,ko2);
 }
}
 else if(ch>='0'&&ch<='9'){
    putc(ch,ko4);
 }
  else{
    putc(ch,ko3);
 }
}
fclose(ko);
fclose(ko1);
fclose(ko2);
fclose(ko3);
fclose(ko4);
    return 0;
}