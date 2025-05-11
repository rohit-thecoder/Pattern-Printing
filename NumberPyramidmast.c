// Enter no of Rows: 5
//     1
//    121
//   12312
//  1234123
// 123451234

#include<stdio.h>
int main(){
    int n;
    printf("Enter no of Rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int p=1; p<=n-i; p++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        for(int k=1; k<=i-1; k++){
            printf("%d", k);
        }
        printf("\n");
    }
}