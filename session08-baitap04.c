#include<stdio.h>

int main(){

    int array[2][2] = {3,9,5,7};
    int soLonNhat = 0;
    for(int i=0; i < 2;i++){
         for(int j=0; j < 2;j++){
            if(array[i][j] > soLonNhat){
               soLonNhat = array[i][j];
            }
         }
    }
    printf("số lớn nhất trong mảng là: %d\n", soLonNhat);
    return 0;
}