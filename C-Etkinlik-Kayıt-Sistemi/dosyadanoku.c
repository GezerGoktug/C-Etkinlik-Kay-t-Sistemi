/**
 * Bu kod, BMT103 dersi uygulamasında 23181617021 numaralı Furkan İşeri tarafından yazılmıştır.
 * Bu kod, BMT103 dersi uygulamasında 23181617018 numaralı Göktuğ Gezer tarafından yazılmıştır.
 *  Bu kod, BMT103 dersi uygulamasında 23181616009 numaralı Kerem Çimentepe tarafından yazılmıştır.
 * **/

#include <stdio.h>

// Dosyadan veri okuyup, katılımcı dizisini güncelleyen fonksiyon
void dosyadanOku(struct Katilimci katilimcilar[], int *katilimciSayisi) {
    // "katilimcilar.txt" adında bir dosyayı okuma modunda aç
    FILE *dosya = fopen("katilimcilar.txt", "r");

    // Dosya başarıyla açılırsa işleme devam et
    if (dosya != NULL) {
        // Dosyadan okuma öncesinde sayacı sıfırla
        *katilimciSayisi = 0;

        // Dosyadan veri okuma işlemi
        while (fscanf(dosya, "%s %s %d", katilimcilar[*katilimciSayisi].isim, katilimcilar[*katilimciSayisi].soyisim, &katilimcilar[*katilimciSayisi].yas) != EOF) {
            // Okunan her bir satır için katılımcı sayısını artır
            (*katilimciSayisi)++;
        }

        // Dosyayı kapat ve işlemi başarıyla tamamla
        fclose(dosya);
        printf("Veri dosyadan okundu.\n");
    } else {
        // Dosya açılamazsa uygun bir hata mesajı göster
        printf("Dosya acilirken hata olustu.\n");
    }
}

