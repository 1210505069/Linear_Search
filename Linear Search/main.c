#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	//burada genel tanimlamalari yaptik
	int n, i, aranacak, dizi[100];
	
	//kullanicidan dizi boyutunu istedik
    printf("Dizi boyutunu giriniz: ");
    scanf("%d", &n);
    
    //kullanicidan diziyi istedik
    printf("Dizi elemanlarini giriniz:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &dizi[i]);
    }
    
    //kullanicidan aranacak elemani istedik
    printf("Aranacak elemani giriniz: ");
    scanf("%d", &aranacak);

    // linear search algoritmasi
    for (i = 0; i < n; i++) {
        if (dizi[i] == aranacak) {
        	//bulunursa verilecek cikti
            printf("%d elemani dizideki %d. elemandir.\n", aranacak, i+1);
            break;
        }
    }
    //bulunmazsa yapilacak cikti
    if (i == n) {
        printf("%d elemani dizide bulunamadý.\n", aranacak);
    }
	return 0;
}
