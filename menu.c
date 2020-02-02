#include <stdio.h>

int menu(int a, int b){
    printf("Welcome in program made by SzymeQ for zdanie semestru.\n");
    printf("1.Start encryption\n2.Start decryption\n3.Exit\n");
    scanf("%d", &a);
    if(a==1){   //szyfrowanie
        printf("Choose the way of encryption.\n1.morse alphabet\n2.Caesar's cipher\n3.affine cipher\n"); 
        scanf("%d", &b);
            if(b==1){
                printf("Wstawić tutaj odnośnik do funkcji\n");
            }
            if(b==2){
                printf("Wstawić tutaj odnośnik do funkcji\n");
            }
            if(b==3){
                printf("Wstawić tutaj odnośnik do funkcji\n");
            }
    }
    if(a==2){   //deszyfrowanie
        printf("Choose the way of decryption.\n 1.morse alphabet\n2.Caesar's cipher\n3.affine cipher\n"); 
        scanf("%d", &b);
            if(b==1){
                printf("Wstawić tutaj odnośnik do funkcji\n");
            }
            if(b==2){
                printf("Wstawić tutaj odnośnik do funkcji\n");
            }
            if(b==3){
                printf("Wstawić tutaj odnośnik do funkcji\n");
            }                
    }
    if(a==3){  //zakończenie pracy
        return 0;
    }
}