#include <stdio.h>

struct I {
    int w, p;
    float r;
};

void s(struct I a[], int n) {
    int i, j;
    struct I t;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(a[j].r < a[j+1].r){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
}

int main() {
    int n,i;
    float m,tp=0;
    printf("Enter n: ");
    scanf("%d",&n);
    
    struct I a[n];
    
    for(i=0;i<n;i++){
        printf("w p: ");
        scanf("%d%d",&a[i].w,&a[i].p);
        a[i].r=(float)a[i].p/a[i].w;
    }
    
    printf("Enter capacity: ");
    scanf("%f",&m);
    
    s(a,n);
    
    for(i=0;i<n;i++){
        if(m>=a[i].w){
            tp+=a[i].p;
            m-=a[i].w;
        } else {
            tp+=a[i].r*m;
            break;
        }
    }
    
    printf("Max profit = %.2f",tp);
    return 0;
}
