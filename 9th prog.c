/*#include <stdio.h>
int main(){
float a,b,D;
printf("Enter 2 Numbers: ");
scanf("%f%f",&a,&b);
D=a/b;
printf("Answer is: %f",D);
return 0;}


#include <stdio.h>
int main(){
const int a = 6;
printf("%d",a);


return 0;
}*/

#Task - 1

#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

#Task - 2

#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}

#Task - 3

#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#Task - 4

#include <stdio.h>

int main() {
    int num = 1;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

#Task - 5

#include <stdio.h>
int main(){
int k = 1;
for (int i = 1; i<=4;i+=1){
    for (int j = 1; j<=k;j++){
        printf("* ");
    }
    k++;
    printf("\n");

    }
    return 0;
}
