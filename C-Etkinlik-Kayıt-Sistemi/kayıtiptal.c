/**
 * Bu kod, BMT103 dersi uygulamasında 23181617021 numaralı Furkan İşeri tarafından yazılmıştır.
 * Bu kod, BMT103 dersi uygulamasında 23181617018 numaralı Göktuğ Gezer tarafından yazılmıştır.
 *  Bu kod, BMT103 dersi uygulamasında 23181616009 numaralı Kerem Çimentepe tarafından yazılmıştır.
 * **/

// Bir katılımcının kaydını iptal eden fonksiyon
void kayitIptal(struct Katilimci katilimcilar[], int *katilimciSayisi) {

    // Eğer kayıt sayısı sıfırdan büyükse işleme devam et
    if (*katilimciSayisi > 0) {
        // İptal edilecek kaydın sıra numarasını al
        int iptalIndex;
        printf("Iptal edilecek kayidin sira numarasini girin: ");
        scanf("%d", &iptalIndex);

        // Sıra numarası geçerli ise işleme devam et
        if (iptalIndex > 0 && iptalIndex <= *katilimciSayisi) {
            // İptal edilecek kayıttan sonraki kayıtları bir önceki kayıta taşı
            for (int i = iptalIndex - 1; i < *katilimciSayisi - 1; i++) {
                katilimcilar[i] = katilimcilar[i + 1];
            }

            // Kayıt sayısını azalt ve işlemi başarıyla tamamla
            (*katilimciSayisi)--;
            printf("Kayit basariyla iptal edildi.\n");
        } else {
            // Geçersiz sıra numarası durumunda uyarı ver
            printf("Gecersiz sira numarasi.\n");
        }
    } else {
        // Kayıt sayısı sıfırsa uyarı ver
        printf("Iptal edilecek kayit bulunmamaktadir.\n");
    }
}