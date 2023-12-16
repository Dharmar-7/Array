#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int maximum(int n,int a[]);
int minimum(int n,int a[]);
void occurenceCount(int n,int a[],int b[],int min);
int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int max=maximum(n,a);
    int min=minimum(n,a);
    int b[max+1-min];
    for(int i=0;i<max+1-min;i++){
        b[i]=0;
    }
    occurenceCount(n,a,b,min);
    
}
int maximum(int n,int a[]){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max) max=a[i];
    }
    return max;
}
int minimum(int n,int a[]){
    int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min) min=a[i];
    }
    return min;
}
void occurenceCount(int n,int a[],int b[],int min){
    for(int i=0;i<n;i++){
        b[a[i]-min]++;
    }
    for(int i=0;i<n;i++){
        if(b[a[i]-min]!=0){
            printf("%d - %d\n",a[i],b[a[i]-min]);
            b[a[i]-min]=0;
        }
    }
}