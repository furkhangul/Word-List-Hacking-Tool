# FurOfTheWeak

Kişiselleştirilmiş kelime listeleri (wordlist) oluşturmak için geliştirilmiş bir araç.

## 📌 Hakkında

**FurOfTheWeak**, kullanıcıdan alınan bilgilere (isim, soyisim, doğum tarihi, evcil hayvan adı, önemli sayılar vb.) dayanarak olası parola/kelime kombinasyonları üreten bir wordlist oluşturucudur. Sızma testi (pentest), CTF çalışmaları ve güvenlik farkındalığı eğitimleri gibi **yasal ve etik** amaçlarla kullanılmak üzere tasarlanmıştır.

## ✨ Özellikler

- Kullanıcı girdilerinden otomatik kombinasyon üretimi
- Büyük/küçük harf varyasyonları
- Sayı ve özel karakter ekleme (leetspeak dönüşümleri vb.)
- Özelleştirilebilir çıktı formatı
- Oluşturulan listeyi `.txt` dosyası olarak dışa aktarma

## 🚀 Kurulum

```bash
git clone https://github.com/<kullanici-adi>/FurOfTheWeak.git
cd FurOfTheWeak
```

> Gerekli bağımlılıkları yüklemek için (varsa):
```bash
pip install -r requirements.txt
```

## 🛠️ Kullanım

```bash
python furoftheweak.py --output wordlist.txt
```

Programın kabul ettiği parametreler ve kullanım detayları için:

```bash
python furoftheweak.py --help
```

## ⚠️ Yasal Uyarı

Bu araç yalnızca **kendi sistemleriniz üzerinde test yapmak** veya **izinli sızma testi (authorized penetration testing)** çalışmalarında kullanılmak üzere geliştirilmiştir. İzinsiz hesaplara veya sistemlere erişim sağlamak amacıyla kullanılması yasa dışıdır. Bu aracın kötüye kullanımından doğacak her türlü sorumluluk kullanıcıya aittir.

## 👤 Geliştirici

**Furkan Gül**

## 📄 Lisans

Bu proje [MIT Lisansı](LICENSE) altında sunulmaktadır. (Dilediğiniz lisansla değiştirebilirsiniz.)
