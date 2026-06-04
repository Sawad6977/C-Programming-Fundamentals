#include <stdio.h>

struct Student{

    char name[50];
    int id;
    float cgpa;

};
int main()
{
    struct Student s[10];
    for(int i=0;i<3;i++)
    {
    scanf("%s",s[i].name);
    scanf("%d",&s[i].id);
    scanf("%f",&s[i].cgpa);
    }
  for(int i=0;i<3;i++){
    printf("NAME : %s\n",s[i].name);
    printf("ID : %d\n",s[i].id);
    printf("CGPA : %.2f\n",s[i].cgpa);

}
}

