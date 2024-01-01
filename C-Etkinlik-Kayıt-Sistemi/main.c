/**
 * Bu kod, BMT103 dersi uygulamasında 23181617021 numaralı Furkan İşeri tarafından yazılmıştır.
 * Bu kod, BMT103 dersi uygulamasında 23181617018 numaralı Göktuğ Gezer tarafından yazılmıştır.
 *  Bu kod, BMT103 dersi uygulamasında 23181616009 numaralı Kerem Çimentepe tarafından yazılmıştır.
 * **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.c"
#include "kayıtekle.c"
#include "kayıtiptal.c"
#include "katılımcılistesinigörüntüle.c"
#include "dosyayakaydet.c"
#include "dosyadanoku.c"
// Programın başlangıcını belirten main fonksiyonu
int main() {
    // Katılımcıları depolamak için bir dizi ve diğer gerekli değişkenleri tanımlayın
    struct Katilimci katilimcilar[100];
    int katilimciSayisi = 0;
    int secim;
    // Başlangıç verilerini bir dosyadan okuyun
    dosyadanOku(katilimcilar, &katilimciSayisi);
// Kullanıcı girişini işleyen bir döngüde ana menüyü görüntüleyin ve işlemleri gerçekleştirin
    do {
        printf("****************************************************\n");
        printf("**------------------------------------------------**\n");
        printf("************* Etkinlik Kayit Sistemi ***************\n");
        printf("**------------------------------------------------**\n");
        printf("****************************************************\n");
        printf("****************************************************\n");
        printf("**------------------------------------------------**\n");
        printf("**-------------###--------------###---------------**\n");
        printf("**-------------###------##------###---------------**\n");
        printf("**------##--------------##--------------##--------**\n");
        printf("**--------##--------------------------##----------**\n");
        printf("**----------###--------------------###------------**\n");
        printf("**-------------####################---------------**\n");
        printf("**------------------------------------------------**\n");
        printf("****************************************************\n");
        printf("||  1. Kayit Ekle                                 ||\n");
        printf("||  2. Kayit Iptal Et                             ||\n");
        printf("||  3. Katilimci Listesini Goruntule              ||\n");
        printf("||  4. Dosyaya Kaydet                             ||\n");
        printf("||  5. Dosyadan Oku                               ||\n");
        printf("||  6. Cikis                                      ||\n");
        printf("****************************************************\n");
        printf("Seciminizi girin: ");
        scanf("%d", &secim);
// Kullanıcının girişini bir switch ifadesi kullanarak işleyin
        switch (secim) {
            case 1:
                kayitEkle(katilimcilar, &katilimciSayisi);
                break;
            case 2:
                kayitIptal(katilimcilar, &katilimciSayisi);
                break;
            case 3:
                katilimciListesiGoruntule(katilimcilar, katilimciSayisi);
                break;
            case 4:
                dosyayaKaydet(katilimcilar, katilimciSayisi);
                break;
            case 5:
                dosyadanOku(katilimcilar, &katilimciSayisi);
                break;
            case 6:
                printf("Programdan cikiliyor.\n");
                break;
            default:
                printf("Gecersiz secim. Tekrar deneyin.\n");
        }
    } while (secim != 6);

    return 0;
}

