#include <stdio.h>
void starprinter(int n){
    for (int i = 1; i<=n; i+=1){
        for (int j = 1; j<=i; j+=1){
            printf("* ");
        }
        printf("\n");
    }
}
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if (marks <33 && marks >= 0){
        printf("Your stars are in debt!! ");
    }
    else if (marks >= 33 && marks<40){
        starprinter(1);
    }
    else if (marks >=40 && marks <50){
        starprinter(2);
    }
    else if (marks >=50 && marks <60){
        starprinter(3);
    }
    else if (marks >=60 && marks <70){
        starprinter(4);
    }
    else if (marks >=70 && marks <80){
        starprinter(5);
    }
    else if (marks >=80 && marks <100){
        starprinter(6);
    }
    else{
        printf("Onvalid Input!");
    }
}