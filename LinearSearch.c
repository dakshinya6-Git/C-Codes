#include <stdio.h>

int main(){
    int n,i,x,f=0;
    printf("Enter n: ");
    scanf("%d",&n);
    
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    printf("Enter key: ");
    scanf("%d",&x);
    
    for(i=0;i<n;i++){
        if(a[i]==x){
            printf("Found at %d",i);
            f=1;
            break;
        }
    }
    
    if(f==0)
        printf("Not found");
        
    return 0;
}
