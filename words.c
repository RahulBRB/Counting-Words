#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    
    int n,m;
    while(t--){
        scanf("%d%d", &n,&m);
        printf("%d \n", n*m);
        
    }
    return 0;
}

