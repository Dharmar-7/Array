#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void reverseArray(int n,int a[]);
int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    reverseArray(n,a);
    return 0;
}
void reverseArray(int n,int a[]){
    for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}
