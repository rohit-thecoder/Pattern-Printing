// Enter No of Rows: 5
// A B C D E 
// A B C D E
// A B C D E
// A B C D E
// A B C D E

#include<stdio.h>
int main(){
    int n, m;
    printf("Enter No of Rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int a =1;
        for(int j=1; j<=n; j++){
            printf("%c ", a+64);
            a++;
        }
        printf("\n");
    }
    return 0;
    
}