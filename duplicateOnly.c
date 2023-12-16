#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int maximum(int n,int a[]);
void duplicateOnly(int n,int a[],int b[],int max);
int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d ",&a[i]);
    int max=maximum(n,a);
    int b[max+1];
    for(int i=0;i<max+1;i++) b[i]=0;
    duplicateOnly(n,a,b,max);
}
int maximum(int n,int a[]){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max) max=a[i];
    }
    return max;
}
void duplicateOnly(int n,int a[],int b[],int max){
    for(int i=0;i<n;i++) b[a[i]]++;
    for(int i=0;i<n;i++){
        if(b[a[i]]>1){
            printf("%d - %d\n",a[i],b[a[i]]);
            b[a[i]]=0;
        }
    }
}