#include<stdio.h>


int main(){
    int array[5]={1,2,3,4,5};

    for(int i = 4; i>=0;i--){
         printf("array[%d] = %d\n", i, array[i]);

    }


    return 0;
}