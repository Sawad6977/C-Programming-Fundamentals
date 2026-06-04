#include <stdio.h>

struct Student {

  int id;
  char name[50];
  float cgpa;

};
int main(){
struct Student S1;
scanf("%s",S1.name);
scanf("%d",&S1.id);
scanf("%f",&S1.cgpa);

printf("%s\n",S1.name);
printf("%d\n",S1.id);
printf("%.2f",S1.cgpa);


}

#include<stdio.h>
int main(){
int i,j;
scanf("%d %d",&i,&j);
printf("Enter a number :");
for(i=0;i<5;i++)
{
    for(j=5;j>0;j--)
    {
        printf("i=%d",j="%d\n",i,j);
    }
}


}


