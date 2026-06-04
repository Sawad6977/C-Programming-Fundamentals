#include<stdio.h>
int main(){

   float p,q,mod;
   printf("Enter two numbers :");
   scanf("%f%f", &p,&q);
   mod = fmod(p,q);
   printf("answer is :%f", mod);
   return 0;
}

