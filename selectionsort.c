#include<stdio.h>

selectionsort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n;i++){
        for(int k=i+1;k<n;k++){
            if(arr[i]>arr[k]){
                temp=arr[k];
                arr[k]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
int main(void){

    int n;
    printf("ENTER THE RANGE OF ARRAY: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n\nENTER THE ELEMENTS OF ARRAY: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n\nGIVEN ELEMENTS OF ARRAY: [");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
    printf(" ]");
    selectionsort(arr,n);
    printf("\n\nSORTED ELEMENTS OF ARRAY: [");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
    printf(" ]");

}
