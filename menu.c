#include <stdio.h>

int menu(int a, int b){
    printf("Welcome in program made by SzymeQ for zdanie semestru.\n");
    printf("1.Start encryption\n2.Start decryption\n3.Exit\n");
    scanf("%d", &a);
    if(a==1){   //szyfrowanie
        printf("Choose the way of encryption.\n1.morse alphabet\n2.Caesar's cipher\n3.affine cipher\n"); 
        scanf("%d", &b);
            if(b==1){
                printf("morse alphabet");
                szyfrowanie_mors();
            }
            if(b==2){
                printf("Caesar's cipher");
                szyfrowanie_Cezar();
            }
            if(b==3){
                printf("affine cipher");
                szyfrowanie_afiniczne();
            }
    }
    if(a==2){   //deszyfrowanie
        printf("Choose the way of decryption.\n 1.morse alphabet\n2.Caesar's cipher\n3.affine cipher\n"); 
        scanf("%d", &b);
            if(b==1){
                printf("morse alphabet");
                deszyfrowanie_mors();
            }
            if(b==2){
                printf("Caesar's cipher");
                deszyfrowanie_Cezar();
            }
            if(b==3){
                printf("affine cipher");
                deszyfrowanie_afiniczne();
            }               
    }
    if(a==3){  //zakończenie pracy
        return 0;
    }
}