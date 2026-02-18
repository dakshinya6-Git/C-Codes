 #include <stdio.h>

void mg(int a[], int l, int m, int r){
    int i=l, j=m+1, k=0;
    int t[r-l+1];
    
    while(i<=m && j<=r){
        if(a[i]<a[j])
            t[k++]=a[i++];
        else
            t[k++]=a[j++];
    }
    
    while(i<=m)
        t[k++]=a[i++];
        
    while(j<=r)
        t[k++]=a[j++];
        
    for(i=l,k=0;i<=r;i++,k++)
        a[i]=t[k];
}

void ms(int a[], int l, int r){
    if(l<r){
        int m=(l+r)/2;
        ms(a,l,m);
        ms(a,m+1,r);
        mg(a,l,m,r);
    }
}

int main(){
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    ms(a,0,n-1);
    
    printf("Sorted: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
        
    return 0;
}
