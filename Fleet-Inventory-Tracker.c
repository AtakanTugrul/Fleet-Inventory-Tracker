#include <stdio.h>
#define ARAC_SAYISI 2
union Durum{
    char mesaj[20];
};

struct Arac{
    char marka[20];
    char model[20];
    int uretimYili;
    float kiralamaUcreti;
    union Durum aracDurum;
};



int main(){
    struct Arac araclar[ARAC_SAYISI];

    for(int i = 0; i<ARAC_SAYISI;i++){
        printf("Arac %d bilgilerini giriniz\n", i+1);
        printf("Marka: ");
        scanf("%s", araclar[i].marka);

          printf("Model: ");
        scanf("%s", araclar[i].model);

          printf("Uretim yili: ");
        scanf("%d", &araclar[i].uretimYili);

          printf("Kiralama ucreti: ");
        scanf("%f", &araclar[i].kiralamaUcreti);

       if(araclar[i].kiralamaUcreti == 0){
      snprintf(araclar[i].aracDurum.mesaj, sizeof(araclar[i].aracDurum.mesaj), "Arac Musait");
      
    }else snprintf(araclar[i].aracDurum.mesaj, sizeof(araclar[i].aracDurum.mesaj), "Arac Dolu");
    
  }

  printf("\n\n\n");
   
printf("\n\n---ARAC BILGILERİ---\n");

for(int i = 0; i<ARAC_SAYISI;i++){
    printf("Arac %d\n", i+1);
    printf("Marka: %s\n", araclar[i].marka);
     printf("Model: %s\n", araclar[i].model);
      printf("Uretim yili: %d\n", araclar[i].uretimYili);
       printf("Kiralama ucreti: %.2f\n", araclar[i].kiralamaUcreti);
       printf("Durum: %s", araclar[i].aracDurum.mesaj);

       printf("\n\n-----------------\n\n");
}
    
    return 0;
}