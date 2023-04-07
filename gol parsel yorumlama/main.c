#include <stdio.h>

int main() {

    printf("Lutfen 'G', '()' ve/veya '(l)' karakterlerini giriniz: ");

    char komut[50]; // char turunde komut dizisi tanimladim

    scanf("%s", komut); // klavyeden girdi aldim

     int i = 0; // i degiskenini tanimliyoruz

    while(komut[i]!=0){   // yazacagimiz dizi elemani bos kume olmasin diye 0 olana kadar dongumuz devam edecek

        if (komut[i] == 'G')    // eger G karakterini girersek
        {
            printf("G");  // G yazdirir
        }
         else if ((komut[i] == '(' )&& (komut[i+1] == ')')) // ()girersek
        {
            printf("o"); // o yazdirilir
            i++;  // sonraki karaktere atlamak icin i 1 artirilir
        }
         else if (komut[i] == '(' && komut[i+1] == 'l' && komut[i+2] == ')')  // (l) boyle girersek
        {
            printf("l"); // l yazdirir
            i += 2; //sonraki 2 karakteri atlamak için i degiskeni 22 artirilir
        }
        i++;
    }

    return 0;
}




