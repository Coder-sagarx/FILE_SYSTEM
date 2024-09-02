#include<stdio.h>
int main(){
    FILE *ko;
    char ch ;
    
    ko=fopen("newfolder.txt","w");

    scanf("%c",&ch);
    fprintf(ko,"%c",ch);
    scanf("%c",&ch);
    fprintf(ko,"%c",ch);
    scanf("%c",&ch);
    fprintf(ko,"%c",ch);
    scanf("%c",&ch);
    fprintf(ko,"%c",ch);
    scanf("%c",&ch);
    fprintf(ko,"%c",ch);
    fclose(ko);
    return 0;
}