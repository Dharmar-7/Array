#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int maximum(int n, int a[]);
int distinctElements(int n,int a[],int b[],int max);
int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int max=maximum(n,a);
    int b[max+1];
    for(int i=0;i<max+1;i++){
        b[i]=0;
    }
    int c=distinctElements(n,a,b,max);
    printf("%d",c);
}
int maximum(int n,int a[]){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max) max=a[i];
    }
    return max;
}
int distinctElements(int n,int a[],int b[],int max){
    int count=0;
    for(int i=0;i<n;i++){
        b[a[i]]++;
    }
    for(int i=0;i<max+1;i++){
        if(b[i]==1) count++;
    }
    return count;
}