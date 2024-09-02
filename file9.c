#include<stdio.h>
int main (){
    int ch ;
    FILE *ko,*ko1,*ko2;
    ko=fopen("newfolder.txt","w");
    printf("enter nubers  :");
   while((ch=getchar())!=EOF){
   putc(ch,ko);
   }
    fclose(ko);
    ko=fopen("newfolder.txt","r");
    ko1=fopen("even.dat","w");
    ko2=fopen("odd.dat","w");
while((ch=getc(ko))!=EOF){
    if(ch%2==0){
        putc(ch,ko1);
    }
     else{
        putc(ch,ko2);
    }
}
fclose(ko);
fclose(ko2);
fclose(ko1);

return 0;
}