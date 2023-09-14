#include<stdio.h>
int length(char *p){
    int cnt=0;
    while(*p!='\0'){
        cnt++;
        p++;
    }
    return cnt;
}
int main(){
    char s[50]="Welcome to the world of c programming";
    int l=length(s);
    printf("Length is:%d",l);
    return 0;
}