/**
 * Bu kod, BMT103 dersi uygulamasında 23181617021 numaralı Furkan İşeri tarafından yazılmıştır.
 * Bu kod, BMT103 dersi uygulamasında 23181617018 numaralı Göktuğ Gezer tarafından yazılmıştır.
 *  Bu kod, BMT103 dersi uygulamasında 23181616009 numaralı Kerem Çimentepe tarafından yazılmıştır.
 * **/

// Yeni bir katılımcıyı diziyi ekleyen fonksiyon
void kayitEkle(struct Katilimci katilimcilar[], int *katilimciSayisi) {
    // Eğer katılımcı limitine henüz ulaşılmamışsa işleme devam et
    if (*katilimciSayisi < 100) {
        // Yeni katılımcının adını ve soyadını al
        printf("Ad: ");
        scanf("%s", katilimcilar[*katilimciSayisi].isim);
        printf("Soyad: ");
        scanf("%s", katilimcilar[*katilimciSayisi].soyisim);

        // Geçerli bir yaş alana kadar işleme devam et
        do {
            printf("Yas: ");
            scanf("%d", &katilimcilar[*katilimciSayisi].yas);
            if (katilimcilar[*katilimciSayisi].yas <= 0) {
                printf("Gecersiz yas. Pozitif bir yas girin.\n");
            }
        } while (katilimcilar[*katilimciSayisi].yas <= 0);

        // Katılımcı sayısını artır ve işlemi başarıyla tamamla
        (*katilimciSayisi)++;
        printf("Kayit basariyla eklendi.\n");
    } else {
        // Katılımcı limitine ulaşıldıysa uyarı ver
        printf("Katilimci limitine ulasildi.\n");
    }
}