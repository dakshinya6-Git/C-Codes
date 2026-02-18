#include <stdio.h>

void mm(int a[], int l, int r, int *mn, int *mx){
    if(l==r){
        *mn=*mx=a[l];
    }
    else if(r==l+1){
        if(a[l]<a[r]){
            *mn=a[l];
            *mx=a[r];
        } else {
            *mn=a[r];
            *mx=a[l];
        }
    }
    else{
        int m=(l+r)/2;
        int mn1,mx1,mn2,mx2;
        mm(a,l,m,&mn1,&mx1);
        mm(a,m+1,r,&mn2,&mx2);
        *mn = mn1<mn2?mn1:mn2;
        *mx = mx1>mx2?mx1:mx2;
    }
}

int main(){
    int n,i,mn,mx;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    mm(a,0,n-1,&mn,&mx);
    
    printf("Min = %d\n",mn);
    printf("Max = %d",mx);
    
    return 0;
}
