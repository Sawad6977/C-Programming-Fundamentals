#include <stdio.h>
#include <string.h>
int main(){
    char str[35];
    int c = 0;
    scanf("%s",str);
    int p = strlen(str);
    for (int i = 0; i<p; i+=1){
        if (str[i] == 'a' || str[i] =='e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u'|| str[i] == 'A' || str[i] =='E' ||str[i] == 'I' ||str[i] == 'O' ||str[i] == 'U'){
            c += 1;
        }
    }
    if (c>0){
        printf("Vowel detected\n");
    }
    else{
        printf("Vowel not Found!\n");
    }
    printf("Number of vowels: %d\n",c);
}

