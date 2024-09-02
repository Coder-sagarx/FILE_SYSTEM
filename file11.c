#include<stdio.h>
int main(){
    char ch;
    FILE *ko1,*ko2,*ko3;
printf("enter text1");
ko1=fopen("newfolder.txt","w");
while((ch=getchar())!=EOF){
fputc(ch,ko1);
}
fclose(ko1);
printf("enter text2");
ko2=fopen("folder.txt","w");
while((ch=getchar())!=EOF){
fputc(ch,ko2);
}
fclose(ko2);


ko2=fopen("folder.txt","r");
ko1=fopen("newfolder.txt","r");
ko3=fopen("even.dat","w");
while((ch=fgetwc(ko1))!=EOF||(ch=fgetwc(ko2))!=EOF){
fputc(ch,ko3);
}

fclose(ko1);
fclose(ko3);
fclose(ko2);
return 0;
}
