/**
 * Bu kod, BMT103 dersi uygulamasında 23181617021 numaralı Furkan İşeri tarafından yazılmıştır.
 * Bu kod, BMT103 dersi uygulamasında 23181617018 numaralı Göktuğ Gezer tarafından yazılmıştır.
 *  Bu kod, BMT103 dersi uygulamasında 23181616009 numaralı Kerem Çimentepe tarafından yazılmıştır.
 * **/

#include <stdio.h>

// Katılımcı dizisini bir dosyaya kaydeden fonksiyon
void dosyayaKaydet(struct Katilimci katilimcilar[], int katilimciSayisi) {
    // "katilimcilar.txt" adında bir dosyayı yazma modunda aç
    FILE *dosya = fopen("katilimcilar.txt", "w");

    // Dosya başarıyla açılırsa işleme devam et
    if (dosya != NULL) {
        // Tüm katılımcıları dosyaya yazan bir döngü
        for (int i = 0; i < katilimciSayisi; i++) {
            // Her bir katılımcının bilgilerini dosyaya yaz
            fprintf(dosya, "%s %s %d\n", katilimcilar[i].isim, katilimcilar[i].soyisim, katilimcilar[i].yas);
        }

        // Dosyayı kapat ve işlemi başarıyla tamamla
        fclose(dosya);
        printf("Veri dosyaya kaydedildi.\n");
    } else {
        // Dosya açılamazsa uygun bir hata mesajı göster
        printf("Dosya acilirken hata olustu.\n");
    }
}