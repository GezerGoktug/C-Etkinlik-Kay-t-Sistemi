/**
 * Bu kod, BMT103 dersi uygulamasında 23181617021 numaralı Furkan İşeri tarafından yazılmıştır.
 * Bu kod, BMT103 dersi uygulamasında 23181617018 numaralı Göktuğ Gezer tarafından yazılmıştır.
 *  Bu kod, BMT103 dersi uygulamasında 23181616009 numaralı Kerem Çimentepe tarafından yazılmıştır.
 * **/

// Katılımcı listesini görüntüleyen fonksiyon
void katilimciListesiGoruntule(struct Katilimci katilimcilar[], int katilimciSayisi) {
    // Eğer kayıtlı katılımcı varsa işleme devam et
    if (katilimciSayisi > 0) {
        printf("\nKatilimci Listesi:\n");
        // Tüm katılımcıları listeleyen bir döngü
        for (int i = 0; i < katilimciSayisi; i++) {
            // Her bir katılımcının bilgilerini ekrana yazdırma
            printf("%d. %s %s, Yas: %d\n", i + 1, katilimcilar[i].isim, katilimcilar[i].soyisim, katilimcilar[i].yas);
        }
    } else {
        // Kayıtlı katılımcı yoksa uygun bir uyarı göster
        printf("Kayitli katilimci bulunmamaktadir.\n");
    }
}

