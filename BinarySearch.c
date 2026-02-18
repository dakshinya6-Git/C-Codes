#include <stdio.h>

int main(){
    int n,i,x,l=0,r,m,f=0;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    printf("Enter key: ");
    scanf("%d",&x);
    
    r=n-1;
    
    while(l<=r){
        m=(l+r)/2;
        if(a[m]==x){
            printf("Found at %d",m);
            f=1;
            break;
        }
        else if(a[m]<x)
            l=m+1;
        else
            r=m-1;
    }
    
    if(f==0)
        printf("Not found");
        
    return 0;
}
