#include<stdio.h>
int main(){
    char ch;
    int ch1=0,line=0; 
    FILE *ko;
    ko=fopen("newfolder.txt","w");
    printf("enter character");
    while((ch=getchar())!=EOF){
        fputc(ch,ko);
    }
    fclose(ko);
      ko=fopen("newfolder.txt","r");
    while((ch=fgetc(ko))!=EOF){
         
     if(ch=='\n'){
        line++;
     }
     else{
        ch1++;
     }
    }
    
    printf("%d\n",line);
    printf("%d",ch1);

    fclose(ko);
    return 0;
}