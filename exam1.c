#include<stdio.h>

int main(){

int a[10], i;
    for(i=0;i<10;i++){
        printf("Enter the input for index:\n",i);
        scanf("%d",&a[i]);
    }

    printf("\nThe number of array elements:\n");

    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }


    return 0;

}
