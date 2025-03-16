# Sanal Örümcek Hamiyet Uygulaması

Bu uygulama, sanal bir örümceğin temel ihtiyaçlarını yönetmeyi amaçlayan bir simülasyondur. Program, örümceğin sağlıklı kalabilmesi için çeşitli ihtiyaçlarını karşılamaya yönelik bir dizi etkinlik ve seçenek sunar. Kullanıcı, örümceğin açlık, susuzluk, uyku, temizlik gibi ihtiyaçlarını karşılamak için çeşitli aktiviteler seçebilir.

## İhtiyaç Listesi

Aşağıdaki ihtiyaçlar, örümceğin sağlığını sürdürmesi için önemlidir:

1. **Tokluk**: Örümceğin yemek ihtiyacı.
2. **Uyku**: Örümceğin dinlenme ihtiyacı.
3. **Sevgi**: Örümceğin aile bireyleriyle olan ilişkileri.
4. **Sosyalleşme**: Örümceğin arkadaşlarıyla zaman geçirmesi.
5. **Sağlık**: Örümceğin sağlık durumu.
6. **Eğitim**: Örümceğin yeni şeyler öğrenmesi.
7. **Hijyen**: Örümceğin temizliği.
8. **Tuvalet**: Örümceğin tuvalet ihtiyacı.
9. **Eğlence**: Örümceğin eğlenme ihtiyacı.

## Kullanıcı Seçenekleri

Kullanıcı, örümceğin ihtiyaçlarını karşılamak için aşağıdaki seçeneklerden birini seçebilir:

1. **Yemek Ye**: Örümceğin tok olmasını sağlamak için yemek yer.
2. **Uyku**: Örümcek uyur ve enerji toplar.
3. **Sevgi Göster**: Örümceğin ailesiyle bağ kurmasına yardımcı olur.
4. **Sosyalleş**: Örümcek arkadaşlarıyla vakit geçirir.
5. **Sağlık Durumu Kontrolü**: Örümceğin sağlık durumu kontrol edilir.
6. **Eğitim**: Örümceğe yeni şeyler öğretilir.
7. **Temizlik**: Örümcek temizlenir.
8. **Tuvalet İhtiyacı**: Örümcek tuvalet ihtiyacını giderir.
9. **Eğlence**: Örümcek eğlenir.

## Aktivite Seçenekleri

Her bir ihtiyaç için farklı aktiviteler sunulmaktadır. Aşağıda her bir aktivitenin açıklamaları bulunmaktadır:

### 1. Yemek Seçenekleri
Örümcek, seçilen besinle beslenerek tokluk seviyesi arttırılır.

### 2. Uyku
Örümcek, belirli bir süre uyuyarak uyku seviyesi arttırılır.

### 3. Sevgi Göster
Örümcek, ailesinden farklı bireylerle sarılır.

### 4. Sosyalleşme
Örümcek, arkadaşlarıyla farklı aktiviteler yaparak sosyallik seviyesini arttırır.

### 5. Sağlık Durumu Kontrolü
Örümceğin sağlık durumu kontrol edilir. Tokluk ve boşaltım seviyeleri sıfırsa, örümcek ölecek ve yeniden canlandırılacaktır.

### 6. Eğitim
Örümcek, ebeveynlerinden çeşitli konularda eğitim alır.

### 7. Temizlik
Örümcek, çeşitli yollarla temizlenir.

### 8. Tuvalet İhtiyacı
Örümcek, tuvalet ihtiyacını giderir.

### 9. Eğlence
Örümcek, eğlenceli aktiviteler yaparak stresini atar ve eğlence seviyesini arttırır.

## Program Akışı

Program, kullanıcıdan aldığı girdi doğrultusunda örümceğin çeşitli ihtiyaçlarını karşılar ve kullanıcıya örümceğin güncel durumunu gösterir. Program, her döngüde örümceğin seviyesi ve ihtiyaçları güncellenir. Kullanıcı 0 girerek oyundan çıkabilir.

---

## Kod Açıklaması

Bu program, kullanıcıya etkileşimli bir deneyim sunan bir simülasyon oyunudur. Programda her bir ihtiyaç ve aktivite için fonksiyonlar mevcuttur. Her fonksiyon, örümceğin belirli bir ihtiyacını karşılamak için gerekli değişkenleri günceller.

### `main()` Fonksiyonu
Program, kullanıcının yaptığı seçimlere göre uygun fonksiyonu çağırır ve örümceğin durumunu günceller. Kullanıcı 0 girerek oyundan çıkabilir.

### Fonksiyonlar
- `yemekYe()`: Örümceğin yemek yemesini sağlar.
- `suic()`: Örümceğin su içmesini sağlar.
- `uyku()`: Örümceğin uyumasını sağlar.
- `sevgiles()`: Örümceğin ailesiyle sevgi göstermesini sağlar.
- `sosyalles()`: Örümceğin arkadaşlarıyla sosyalleşmesini sağlar.
- `siradansaglik()`: Örümceğin sağlık durumunu kontrol eder.
- `dusmangor()`: Örümceğin düşmanla karşılaşmasını simüle eder.
- `egitimal()`: Örümceğin eğitim almasını sağlar.
- `temizlik()`: Örümceğin temizlenmesini sağlar.
- `bosaltimyapma()`: Örümceğin tuvalet ihtiyacını giderir.
- `eglenmek()`: Örümceğin eğlenmesini sağlar.

## Kullanıcı Geri Bildirimi

Uygulama, her bir aktivitenin ardından kullanıcıya örümceğin güncel durumunu gösterir. Eğer kullanıcı yanlış bir seçim yaparsa, program bir hata mesajı verir ve kullanıcıyı tekrar doğru bir seçim yapmaya yönlendirir.

---

## Örnek Çıktı

