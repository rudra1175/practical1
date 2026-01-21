#include <stdio.h>
#include <conio.h>
int main() {
    int n , x , s, i , count = 0 ;
    printf("enter the number of elements in the array :");
    scanf("%d" , &n);
    int arr[n];
    printf("enter the array elements :\n");
    for(i = 0 ; i< n ; i++ ){
        scanf("%d", &x);
        arr[i] = x ;
    }
    printf("enter the elements to be searched in the array:");
    scanf("%d", &s);
    for(i = 0; i <n ; i++){
        if(arr[i] == s){
            count++;

        }
    }
    printf("the number of occurrences of the given is : %d\n" , count);
    return 0 ;
}
