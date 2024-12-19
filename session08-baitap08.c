#include<stdio.h>

int main(){
    int n;
    printf("nhập n : ");
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
    printf("\n");
    for(int i=0; i < n;i++){
         for(int j=0; j < n;j++){
            if(j==(n-1-i)){
            printf("%d ", array[i][j]);
            }else {
               printf("  ");
            }
         }
         printf("\n");
    }
    int sum = 0;
    for(int i=0; i < n;i++){
         for(int j=0; j < n;j++){
            if(j==(n-1-i)){
            sum = sum + array[i][j];
             }
         }
    }
    printf("tổng các phần tử trên đường chéo phụ là: %d\n", sum);

    return 0;

}