
#include<stdio.h>

void total_char(char *);
void total_space(char *);
void total_vowels(char *);

int main(){
    int ch;
    char s[40]="Hello, Welcome";
    printf("String Operations:\n\n");
    printf("1.Number of characters in a string\n2.Number of Spaces in a string\n3.Number Of Vowels");
    printf("\n\nEnter your choice:");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        total_char(s);
         break;
    case 2:
        total_space(s);
        break;
    case 3:
        total_vowels(s);
    break;
    default:
     printf("invalid Choice");
    }

    return 0;
    }

void total_space(char *p){
    int count=0;
    while(*p !='\0'){
        if(*p==' '){
            count++;
        }
        p++;
    }
    printf("\n\n Total number of spaces are:%d",count);

}
void total_vowels(char *p){
    int count=0;
    while (*p!='\0')
    {
        switch (*p)
        {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                count++;
        }
    p++;
    }
    printf("\n\nTotal number of vowels:%d",count);
    
}
void total_char(char *p){
    int count=0;
    while(*p !='\0'){
        count++;
        p++;
    }
    printf("\n\n Total number of characters are:%d",count);

}




