// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {


    //int a[3][3]={{10, 20, 30},
    //        {10, 20, 30},
    //        {10, 20, 30},} ;



   int arr[3][3];
   /// arr[0][0], arr[0][1], arr[0][2]
   /// arr[1][0], arr[1][1], arr[1][2]
   /// arr[0][0], arr[0][1], arr[0][2]


   for(int i=0; i< 3; i++){
       for(int j=0; j<3;j++){
          scanf("%d", &arr[i][j]);
       }
   }

   for(int i=0; i< 3; i++){
       for(int j=0; j<3;j++){
          printf("%d ", arr[i][j]);
       }
       printf("\n");
   }

    return 0;
}
