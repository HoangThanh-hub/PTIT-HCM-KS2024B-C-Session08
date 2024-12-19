#include<stdio.h>


int main(){
    int array[5]={1,2,3,4,5};
    int n;
    printf("nhập n: ");
    scanf("%d",&n);
    int flag = 0;

    for(int i = 0; i < 5;i++){
        if(array[i] == n){
           printf("vị trí phần tử %d trong mảng là: %d\n", n,i);
           flag=1;

        }
    }
    if(flag==0) {
        printf("phần tử không tồn tại trong mảng\n");
    }
    return 0;
}