#include <iostream>
#include <clocale>
#include <windows.h>
#include <fstream>
#include <cstring>
#include <stdexcept>
#include <cstdlib>
#include <vector>
#include <cctype>
#include <ctime>
#include <string>

using namespace std;



string rastgeleKelimeUret(int uzunluk);
void kelimeListesiniDosyayaYaz(const string& dosyaAdi, int kelimeSayisi, int kelimeUzunlugu);
void crunch();
void numbers();
void words();
void random();
void complex();
void miliar();
void specialnumber();
void tc();
void fastattack();
void formeword();
void fundamentalword();
void mixword();
void autoword();
void complexword();


//ana fonksiyon bölümü



std::string addUpperCase(const std::string& word) {
    std::string upperCaseWord = word;
    for (size_t i = 0; i < upperCaseWord.length(); ++i) {
        upperCaseWord[i] = toupper((unsigned char)upperCaseWord[i]);
    }
    return upperCaseWord;
}

// Küçük harf eklemek
std::string addLowerCase(const std::string& word) {
    std::string lowerCaseWord = word;
    for (size_t i = 0; i < lowerCaseWord.length(); ++i) {
        lowerCaseWord[i] = tolower((unsigned char)lowerCaseWord[i]);
    }
    return lowerCaseWord;
}

// Kelime listesinden wordlist oluşturma
void generateWordlist(const std::vector<std::string>& words, std::ofstream& outFile) {
    for (size_t i = 0; i < words.size(); ++i) {
        outFile << words[i] << std::endl;
        outFile << addUpperCase(words[i]) << std::endl;
        outFile << addLowerCase(words[i]) << std::endl;
    }
}

int main() {
	setlocale(LC_ALL,"Turkish");
    system("@echo off");
    system("title WordList Maker / FurOfTheWeak");
    //system("start https://bandirma.site");
    //system("mkdir WordLists");
    int color = 0;
    int person;
    
    cout << " _______           _______    ___ _______ _            _  _  _             _    \n";
    cout << "(_______)         (_______)  / __|_______) |          | || || |           | |    \n";
    cout << " _____ _   _  ____| |   | |_| |__    _   | |__  _____ | || || |_____ _____| |  _ \n";
    cout << "|  ___) | | |/ ___) |   | (_   __)  | |  |  _ \\| ___  | || || | ___ (____ | |_/ )\n";
    cout << "| |   | |_| | |   | |___| | | |     | |  | | | | ____ | || || | ____/ ___ |  _ ( \n";
    cout << "|_|   |____/|_|    \\_____/  |_|     |_|  |_| |_|_____) \\_____/|_____)_____|_| \\_)\n";
    cout <<"\n                             Created by Furkan Gül                                  ";
    cout << "\n\n[UYARI]*Bu program illegal kullanımlar için kodlanmamış. Kötü amaçlı yazılımları desteklememektedir.\nProgramı amacı dışında kullanmak yasaktır." << endl;
    cout << "\nYükleniyor..." << endl;

     while (color < 10) {
        system("color 1");
        system("color 2");
        system("color 3");
        system("color 4");
        system("color 5");
        system("color 6");
        system("color 7");

        color++;
    }

    system("color 0");
    cout << "____________________________________________________________\n";
    cout << "|                                                          |" <<endl;
    cout << "| Lütfen wordlist oluşturacağınız kişiyi seçiniz.          |" << endl;
    cout << "| [1] Crunch Edition ile Saldırı Wordlist Oluşturucu       |" << endl;
    cout << "| [2] Sayı Wordlist Oluşturucu                             |" << endl;
    cout << "| [3] Kelime Wordlist Oluşturucu                           |" << endl;
    cout << "| [4] Rastegele Wordlist Oluşturucu                        |" << endl;
    cout << "| [5] Kompleks Özel İfadeler Barndıran Wordlist Oluşturucu |" << endl;
    cout << "|__________________________________________________________|\n";
    cout<<"Wordlist Numarasını giriniz:";
    cin >> person;

    switch (person) {
        case 1: crunch(); break;
        case 2: numbers(); break;
        case 3: words(); break;
        case 4: random(); break;
        case 5: complex(); break;
        default: cout << "\n\n\n\nLütfen geçerli sayı giriniz !\n\n\n" << endl;
    }

    return 0;
}
//bu aralık sadece ana menüdeki seçimlerin fonksiyonunu içerir
void crunch() {
  system("cls");
    system("color 2");
    cout << "\n[*]Değerli kullanıcı bu ürün 'CRUNCH' adlı hacking toolsunun muadili olarak kodlanmıştır.\nBu aracın içine entegre etmemizin sebebi Crunch aracı Windows tabanlı sistemlerde\nçalışmamasından dolayı bu eksikliği gidermek istedik.\n\n\n\n[*]Program çalışma mantığı girilen kelime ve uzunluk ile \nprogram sayesinde random numaralar atanmasıdır. ";
    
    ofstream dosya("ozelarac.txt");
    if (!dosya.is_open()) {
        cout << "Dosya oluşturulamadı veya açılamadı!";
    } else {
        string kelime;
        cout << "\n\n\nLütfen liste oluşturulacak kelimeyi giriniz:  ";
        cin >> kelime;
        int mindeger;
        cout << "\nLütfen kelime uzunluğunu giriniz (Girdiğiniz kelimenin harf sayısından daha az seçilemez !) : ";
        cin >> mindeger;

        int harfSayisi = 0;
        for (int i = 0; i < kelime.length(); i++) {
            char harf = kelime[i];
            if (isalpha(harf)) {
                harfSayisi++;
            }
        }

        if (harfSayisi >= mindeger) {
            system("cls");
            cout << "Girdiğiniz kelimenin harf sayısından daha az seçilemez. Lütfen geçerli bir sayı giriniz ! ";
        } else {
            string ek[32] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "r", "s", "t", "u", "v", "y", "z", "x", "q", "w", ".", "_", "-", ",", "@", "!"};
            for (int k = 0; k < mindeger - harfSayisi; k++) {
                for (int i = 0; i < 32; i++) {
                    dosya << kelime + ek[i] << endl;
                    dosya << ek[i] + kelime << endl;

				}
               kelime += ek[k];
                       for(int l=0;l<2031;l++){
                    	dosya<<kelime<<l<<"\n";
                    	dosya<<l<<kelime<<"\n";
					} 
            }
            cout << "\n\n\nWordlistiniz ozelarac.txt dosyasına kaydedildi. Bilgisayarınızdan dosyayı bulunuz.";
        }
        dosya.close();
    } 
}
void numbers() {
	system("cls");
	system("color 2");
	int list;
	cout<<">>>Yalnızca sayılar ile wordlist oluşturucuya hoşgeldiniz.\n Burada sayılar ile sınırlarınızı zorlamanıza yardımcı olacağız.\n>>>Lütfen ilginizi çeken wordlisti numarasını giriniz.\n";
    cout<<"_____________________________________________________________________\n";
    cout<<"|                                                                   |\n";
    cout<<"| [1] 1 Milyarlık Wordlist Oluşturucu                               |\n";
    cout<<"| [2] Özel Sayı Aralığında Wordlist Oluşturucu                      |\n";
	cout<<"| [3] TC Kimlik Numarası Üzerinden Wordlist Oluşturucu              |\n";
	cout<<"| [4] Hızlı Tarama İçin Hazır Wordlist Oluşturucu                   |\n";
	cout<<"|___________________________________________________________________|\n";
	cout<<"Liste Numarası: ";
    cin>>list;
    switch(list){
    	case 1: miliar();
		 break;
		case 2: specialnumber();
		 break;
		case 3: tc();
		 break;
		case 4: fastattack();
		 break;
		 default:
		 cout<<"Lütfen Geçerli Bir Mod Seçiniz !";
		 break;
	}
}
void words() {
	system("cls");
	system("color 2");
	int numberword;
	cout<<">>>Merhaba, kelimeler ile wordlist oluşturma programına hoşgeldiniz.\n>>>Bu bölüm girmek istediğiniz kelimeleri mixler ve size en iyi sonuçlar için wordlist programı oluşturur.\n>>>Lütfen sizr uygun olan modu seçiniz.\n";
	cout<<"_____________________________________________________________\n";
	cout<<"|                                                           |\n";
	cout<<"| [1]Kendin İçin Kelime Wordlist Oluşturucu                 |\n";
	cout<<"| [2]Temel Kelime Wordlist Olşturucu                        |\n";
	cout<<"| [3]Mix Kelime Wordlist Oluşturucu                         |\n";
	cout<<"| [4]Otomatik Kelime Wordlist Oluşturucu                    |\n";
	cout<<"| [5]Kompleks Kelime Wordlist Oluşturucu (Tavsiye edilir)   |\n";
	cout<<"|___________________________________________________________|\n";
	cout<<"Liste Numarası: ";
    cin>>numberword;
    switch(numberword){
    	case 1: formeword();
		 break;
		case 2: fundamentalword();
		 break;
		case 3: mixword();
		 break;
		case 4: autoword();
		 break;
		case 5: complexword();
		 break;
		 default:
		 cout<<"Lütfen Geçerli Bir Mod Seçiniz !";
		 break;
	}
	

	}
void random() {
	system("cls");
	system("color 2");
	
	cout<<"[*]Bu araç özel olarak kodlanmış olup gireceğiniz değerler ile otomatik olarak anlamlı veya anlamsız kelimeleri derler.";
	
	cout<<"\n\n[*]Aracı kullanırken kodları kendinize göre modifiye edilmesi adına açık uçlu bıraklmıştır.\n\n\n\n";
    
	srand(time(NULL));
	
	int kelimeSayisi, kelimeUzunlugu;
	
    cout << "Oluşturulacak kelime sayısını girin: ";
    cin >> kelimeSayisi;

    cout << "Kelime uzunluğunu girin: ";
    cin >> kelimeUzunlugu;

    cout << "Kelime listesi 'kelime_listesi.txt' dosyasına yazıldı." << endl;
	
	
    ofstream dosya("random.txt");

    if (!dosya.is_open()) {
        cerr << "Dosya açılamadı!" << endl;
    }

    const string KARAKTERLER = "abcçdefgğhıijklmnoöprsştuüvyz";

    for (int i = 0; i < kelimeSayisi; ++i) {
        string kelime;
        for (int j = 0; j < kelimeUzunlugu; ++j) {
            kelime += KARAKTERLER[rand() % KARAKTERLER.length()];
        }
        dosya << kelime << "\n" << endl;
    }
	
	
    dosya.close();
    
	cout<<"\n\n\nWordlistiniz random.txt dosyasına kaydedildi. Bilgisayarınızdan dosyayı bulunuz.";
}
void complex() {
	  setlocale(LC_ALL, "Turkish");
    
    int born, age;
    char name[20], surname[20], mother[20], father[20], team[20], teamshort[20];

    std::cout << "Lüfen adınızı giriniz: ";
    std::cin >> name;
    std::cout << "Lütfen soyadınızı giriniz: ";
    std::cin >> surname;
    std::cout << "Lüfen babanızın adını giriniz: ";
    std::cin >> father;
    std::cout << "Lüfen annenizin adını giriniz: ";
    std::cin >> mother;
    std::cout << "Lütfen doğum yılınızı giriniz: ";
    std::cin >> born;
    std::cout << "Lütfen yaşınızı giriniz: ";
    std::cin >> age;
    std::cout << "Lütfen tuttuğunuz takımı giriniz: ";
    std::cin >> team;
    std::cout << "Lütfen tuttuğunuz takımın kısaltmasını giriniz: ";
    std::cin >> teamshort;

    std::ofstream dosya("kendilistemdetayli.txt");
    if (!dosya.is_open()) {
        std::cerr << "Dosya oluşturulamadı veya açılamadı!" << std::endl;
        return;
    }

    // Parola oluşturma
    srand(time(NULL));
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=<>,.?/{}[]|";
    const int charsetSize = sizeof(charset) - 1;
    const int passwordLength = 8; // Parola uzunluğu
    std::string password;
    for (int i = 0; i < passwordLength; ++i) {
        password += charset[rand() % charsetSize];
    }

    for(int i=0;i<3031;i++){
	
    dosya << name << i << std::endl;
    dosya << surname << i << std::endl;
    dosya << born << i << std::endl;
    dosya << age << i << std::endl;
    dosya << father << i << std::endl;
    dosya << mother << i <<std::endl;
    dosya << team << i <<std::endl;
    dosya << teamshort << i<< std::endl;
    dosya << password << i<<std::endl;
    dosya << i << name << std::endl;
    dosya << i << surname << std::endl;
    dosya << i << born<< std::endl;
    dosya << i << age << std::endl;
    dosya << i << father << std::endl;
    dosya << i << mother <<std::endl;
    dosya << i << team <<std::endl;
    dosya << i << teamshort<< std::endl;
    dosya << i << password<<std::endl;
	}
	 dosya << name << std::endl;
    dosya << surname << std::endl;
    dosya << born << std::endl;
    dosya << age << std::endl;
    dosya << father << std::endl;
    dosya << mother << std::endl;
    dosya << team << std::endl;
    dosya << teamshort << std::endl;
    dosya << password << std::endl;
    dosya.close();
    std::cout << "\n\n\n\n\nLütfen bilgisayarınızda kendilistemdetayli.txt adındaki dosyayı bulunuz. Wordlistiniz başarılı bir şekilde kendilistemdetayli.txt dosyasında oluşturuldu.\n\n\n\n ";
}
//bu aralık sayı fonksiyonun alt menüsündeki fonksiyonları içerir
void miliar(){
	system("cls");
	cout<<"\n\n\n\nÇok fazla girdi girildiğinden bu işlem yaklaşık olarak 5 dakika sürecek(opsiyonel):)\n\n\n\n1 milyarlık sayı listesi oluşturuluyor... \n\n\n\n";
	std::ofstream dosya("milyar.txt");
	 if (!dosya.is_open()) {
    std::cerr << "Dosya oluşturulamadı veya açılamadı!" << std::endl;
    }
    for(int i=0;i<10000000000;i++){
    	dosya<<i<<endl;
	}
	dosya.close();
	cout<<"\n\n\n\n\nLütfen bilgisayarınızda milyar.txt adındaki dosyayı bulunuz. Wordlistiniz başarılı bir şekilde milyar.txt dosyasında oluşturuldu.\n\n\n\n ";
}
void specialnumber() {
    system("cls");
    int max, min;
    cout << "Özel aralıkta sayı wordlisti oluşturucusuna hoşgeldiniz. Lütfen girilecek sayının hangi aralıkta olacağını giriniz.";
    cout << "\n\nMinimum değer: ";
    cin >> min;
    cout << "\nMaksimum değer: ";
    cin >> max;
    std::ofstream dosya("ozelnumaralar.txt");
    if (!dosya.is_open()) {
        std::cerr << "Dosya oluşturulamadı veya açılamadı!" << std::endl;
    } else {
        while (min <= max) {
            dosya << min << endl;
            min++;
        }
        dosya.close();
        cout << "\n\n\n\n\nLütfen bilgisayarınızda ozelnumaralar.txt adındaki dosyayı bulunuz. Wordlistiniz başarılı bir şekilde ozelnumaralar.txt dosyasında oluşturuldu.\n\n\n\n ";
    }
}
void tc() {
    system("cls");
    cout <<"TC  wordlisti oluşturucusuna hoşgeldiniz. (5 Dakika sürebilir)";
    std::ofstream dosya("tcler.txt");
    if (!dosya.is_open()) {
    std::cerr << "Dosya oluşturulamadı veya açılamadı!" << std::endl;
    } 
    else{
	for(long long i=10000000000;i<=99999999999;i++){
    	dosya<<i<<endl;
	}

    dosya.close();
    cout << "\n\n\n\n\nLütfen bilgisayarınızda tcler.txt adındaki dosyayı bulunuz. Wordlistiniz başarılı bir şekilde tcler.txt dosyasında oluşturuldu.\n\n\n\n ";
    }
}
void fastattack() {
    system("cls");
    cout <<"Özel derleme  wordlist oluşturucusuna hoşgeldiniz. Hızlı saldırılarda en kullanışlı sayıları derledik.";
    std::ofstream dosya("hizli.txt");
    if (!dosya.is_open()) {
    std::cerr << "Dosya oluşturulamadı veya açılamadı!" << std::endl;
    } 
    else{
	for(int i=0;i<=100;i++){
    	dosya<<i<<endl;
	}
	for(int k=1800;k<=2030;k++){
		dosya<<k<<endl;
	}


    dosya.close();
    cout << "\n\n\n\n\nLütfen bilgisayarınızda hizli.txt adındaki dosyayı bulunuz. Wordlistiniz başarılı bir şekilde hizli.txt dosyasında oluşturuldu.\n\n\n\n ";
    }
}
//bu aralık kelime fonksiyonun alt menüsündeki fonksiyonları içerir
void formeword(){
	    std::vector<std::string> words;
    words.push_back("password");
    words.push_back("123456");
    words.push_back("hello");
    words.push_back("qwerty");
    words.push_back("abc123");
    
    // Wordlist dosyası
    std::ofstream outFile("wordlist.txt");
    if (!outFile.is_open()) {
        std::cerr << "Dosya oluşturulamadı veya açılamadı!" << std::endl;
    }

    // Wordlist oluşturma
    generateWordlist(words, outFile);
    
    outFile.close();
    std::cout << "Wordlist oluşturuldu: wordlist.txt" << std::endl;


}
void fundamentalword(){
		system("cls");
	system("color 2");
    cout <<"[*] Komplex kelime wordlisti oluşturucusuna hoşgeldiniz.\n[*]Burada sizin bilgilerinizi harmanlayıp en özel listeleri size sunacağız.\n ";
    ofstream dosya("komplekskelimeler.txt");
    if(!dosya.is_open()){	
    	cerr<<"osya oluşturulamadı veya açılamadı!";
	}
	else{
    int uzunluk;
    char ek[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't', 'u', 'v', 'y', 'z', 'x', 'q', 'w'};
    vector<string> dizi(uzunluk);
    vector<string> dizi2(uzunluk);
    vector<string> birlesmisDizi;
    
    cout << "Lütfen dizinin uzunluğunu belirtin: ";
    cin >> uzunluk;
	if(uzunluk<1){
		system("cls");
		cout<<"Lütfen Minimum 10 kelime giriniz !";
		
	}
	
    else{
	
	if(uzunluk>10){
		system("cls");
		cout<<"LÜtfen 10'den daha düşük kelime giriniz veya kompleks kelime bölümünü seçiniz !";
		system("cd..");
	}
	else{
			
		    for(int i = 0; i < uzunluk; i++) {
		        cout << i + 1 << ". kelimeniz: ";
		        cin >> dizi[i];
		    }
		    for(int j = uzunluk - 1; j >= 0; j--) {
		        dizi2[uzunluk - 1 - j] = dizi[j];
		    }
		
		    // Birleştirilmiş diziyi oluştur
		
		    for(int i = 0; i < uzunluk; ++i) {
		        birlesmisDizi.push_back(dizi[i] + dizi2[i]);
		    }
		    int yuksel=0;
		
		    // Birleştirilmiş diziyi yazdır
		    while(yuksel<uzunluk){
				dosya<<birlesmisDizi[yuksel]<<"\n";
		    	dosya<<
		    	yuksel++;
			}
			
			for (int i=0;i<uzunluk;i++){
					dosya<<dizi[i]<<dizi[i];
					dosya<<"\n";
					dosya<<dizi[i]<<dizi2[i];
					dosya<<"\n";
					for(int k=0 ; k<27;k++){
						dosya<<dizi[i]+ek[k];
						dosya<<"\n";
						
						dosya<<ek[k]+dizi[i];
						dosya<<"\n";
					}
				
				}
			dosya.close();
			cout<<"\n\n\nWordlistiniz komplekskelimeler.txt dosyasına kaydedildi. Bilgisayarınızdan dosyayı bulunuz.";
			}
		}
	}
}
void mixword(){
	
}
void autoword(){
	  setlocale(LC_ALL, "Turkish");
    
    int born, age;
    char name[20], surname[20], mother[20], father[20], team[20], teamshort[20];

    std::cout << "Lüfen adınızı giriniz: ";
    std::cin >> name;
    std::cout << "Lütfen soyadınızı giriniz: ";
    std::cin >> surname;
    std::cout << "Lüfen babanızın adını giriniz: ";
    std::cin >> father;
    std::cout << "Lüfen annenizin adını giriniz: ";
    std::cin >> mother;
    std::cout << "Lütfen doğum yılınızı giriniz: ";
    std::cin >> born;
    std::cout << "Lütfen yaşınızı giriniz: ";
    std::cin >> age;
    std::cout << "Lütfen tuttuğunuz takımı giriniz: ";
    std::cin >> team;
    std::cout << "Lütfen tuttuğunuz takımın kısaltmasını giriniz: ";
    std::cin >> teamshort;

    std::ofstream dosya("kendilistemdetayli.txt");
    if (!dosya.is_open()) {
        std::cerr << "Dosya oluşturulamadı veya açılamadı!" << std::endl;
        return;
    }

    // Parola oluşturma
    srand(time(NULL));
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=<>,.?/{}[]|";
    const int charsetSize = sizeof(charset) - 1;
    const int passwordLength = 8; // Parola uzunluğu
    std::string password;
    for (int i = 0; i < passwordLength; ++i) {
        password += charset[rand() % charsetSize];
    }

    // Dosyaya yazma
    dosya << name << std::endl;
    dosya << surname << std::endl;
    dosya << born << std::endl;
    dosya << age << std::endl;
    dosya << father << std::endl;
    dosya << mother << std::endl;
    dosya << team << std::endl;
    dosya << teamshort << std::endl;
    dosya << password << std::endl;

    dosya.close();
    std::cout << "\n\n\n\n\nLütfen bilgisayarınızda kendilistemdetayli.txt adındaki dosyayı bulunuz. Wordlistiniz başarılı bir şekilde kendilistemdetayli.txt dosyasında oluşturuldu.\n\n\n\n ";
}
void complexword(){
	system("cls");
	system("color 2");
    cout <<"[*] Komplex kelime wordlisti oluşturucusuna hoşgeldiniz.\n[*]Burada sizin bilgilerinizi harmanlayıp en özel listeleri size sunacağız.\n ";
    ofstream dosya("komplekskelimeler.txt");
    if(!dosya.is_open()){	
    	cerr<<"osya oluşturulamadı veya açılamadı!";
	}
	else{
    int uzunluk;
    char ek[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't', 'u', 'v', 'y', 'z', 'x', 'q', 'w'};
    vector<string> dizi(uzunluk);
    vector<string> dizi2(uzunluk);
    vector<string> birlesmisDizi;
    
    cout << "Lütfen dizinin uzunluğunu belirtin: ";
    cin >> uzunluk;
	if(uzunluk<10){
		system("cls");
		cout<<"Lütfen Minimum 10 kelime giriniz !";
		
	}
	
    else{
	
	if(uzunluk>100){
		system("cls");
		cout<<"LÜtfen 100'den daha düşük kelime giriniz !";
		system("cd..");
	}
	else{
			
		    for(int i = 0; i < uzunluk; i++) {
		        cout << i + 1 << ". kelimeniz: ";
		        cin >> dizi[i];
		    }
		    for(int j = uzunluk - 1; j >= 0; j--) {
		        dizi2[uzunluk - 1 - j] = dizi[j];
		    }
		
		    // Birleştirilmiş diziyi oluştur
		
		    for(int i = 0; i < uzunluk; ++i) {
		        birlesmisDizi.push_back(dizi[i] + dizi2[i]);
		    }
		    int yuksel=0;
		
		    // Birleştirilmiş diziyi yazdır
		    while(yuksel<uzunluk){
				dosya<<birlesmisDizi[yuksel]<<"\n";
		    	dosya<<
		    	yuksel++;
			}
			
			for (int i=0;i<uzunluk;i++){
					dosya<<dizi[i]<<dizi[i];
					dosya<<"\n";
					dosya<<dizi[i]<<dizi2[i];
					dosya<<"\n";
					for(int k=0 ; k<27;k++){
						dosya<<dizi[i]+ek[k];
						dosya<<"\n";
						
						dosya<<ek[k]+dizi[i];
						dosya<<"\n";
					}
				
				}
			dosya.close();
			cout<<"\n\n\nWordlistiniz komplekskelimeler.txt dosyasına kaydedildi. Bilgisayarınızdan dosyayı bulunuz.";
			}
		}
	}
}
