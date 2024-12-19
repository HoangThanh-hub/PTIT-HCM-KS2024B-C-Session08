#include<stdio.h>

int main(){
    int a,b;
    printf("nhập a: ");
    scanf("%d",&a);
    printf("nhập b: ");
    scanf("%d",&b);

    int array[a][b];
    for(int i=0; i < a;i++){
         for(int j=0; j < b;j++){
            printf("array[%d][%d] = ",i,j);
            scanf("%d", &array[i][j]);
         }
    }
    for(int i=0; i < a;i++){
         for(int j=0; j < b;j++){
            if(i==0||j==0||i==(a-1)||j==(b-1)){
            printf("%d ", array[i][j]);
            }else {
               printf("  ");
            }
         }
         printf("\n");
    }
    int sum = 0;
    for(int i=0; i < a;i++){
         for(int j=0; j < b;j++){
            if(i==0||j==0||i==(a-1)||j==(b-1)){
            sum = sum + array[i][j];
             }
         }
    }
    printf("tổng các phần tử trên đường biên là: %d\n", sum);

    return 0;

}