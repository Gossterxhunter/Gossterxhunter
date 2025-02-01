#include<stdio.h>
int main()
{
    char str[26] = "CV RAMAN GLOBAL UNIVERSITY";
    char ch;
    int i,j ;
    for(i = 26; i > 0; i--){
        for(j = 0; j < i; j++){
            ch = str[i];
            str[i] = str[i-1-j];
            str[i-1-j] = ch;
        }
    }
    printf("%s",str);
    return 0;
}