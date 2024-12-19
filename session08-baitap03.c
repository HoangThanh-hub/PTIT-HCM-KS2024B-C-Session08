#include<stdio.h>

int main(){
    int n;
    printf("nhập n: ");
    scanf("%d",&n);

    int array[n][n];
    for(int i=0; i < n;i++){
         for(int j=0; j < n;j++){
            printf("array[%d][%d] = ",i,j);
            scanf("%d", &array[i][j]);
         }
    }
    for(int i=0; i < n;i++){
         for(int j=0; j < n;j++){
            printf("%d ", array[i][j]);
         }
         printf("\n");
    }



    return 0;
}