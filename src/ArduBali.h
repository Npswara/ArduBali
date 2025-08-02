# ArduBali

**ArduBali** adalah library Arduino yang mengubah sintaks Arduino menjadi Bahasa Bali, dan bertujuan untuk membuat pemrograman Arduino lebih mudah dipahami serta lebih dekat dengan budaya Bali.

## Fitur

- Makro untuk status pin: `PESU`, `MECELEP`, `NYALE`, `AMOR`
- Makro untuk fungsi dasar: `ngaturang`, `kontrol`, `antos`, `maca`, `macaAnalog`, `ngirim`
- Makro untuk fungsi serial: `Mekawit.begin`, `cetak`, `cetakln`
- Tipe data dan fungsi utama: `angke`, `angkeDesimal`, `fungsi`, `nyiapang`, `abadi`
- Nilai logika: `becik`, `salah`

## Instalasi

1. Download atau clone repository ini.
2. Ubah ke dalam zip, lalu tambahkan library ini ke arduino ide anda dengan menggunakan zip
3. Restart Arduino IDE jika sudah terbuka.

## Contoh Penggunaan

```cpp
#include "ArduBali.h"
angke i; 

fungsi nyiapang() {
  mekawit(9600);
    antuk(i = 0; i < 11; i++){
      cetak("Angke ke - ");
      cetak(i);
      cetakln(""); 
      antos(1000);
    }
    cetak("Program suud");
}
fungsi abadi() {
}
```

## Daftar Sintaks

| Bahasa Bali   | Arduino Asli      | Keterangan                        |
|---------------|-------------------|-----------------------------------|
| pesu          | OUTPUT            | Mode output                       |
| mecelep       | INPUT             | Mode input                        |
| nyale         | HIGH              | Nilai tinggi                      |
| amor          | LOW               | Nilai rendah                      |
| desimal       | float             | Tipe data pecahan                 |
| becik         | true              | Nilai benar                       |
| salah         | false             | Nilai salah                       |
| ngaturang     | pinMode           | Atur mode pin                     |
| kontrol       | digitalWrite      | Tulis nilai digital ke pin        |
| antos         | delay             | Jeda waktu                        |
| maca          | digitalRead       | Baca nilai digital dari pin       |
| mekawit       | Serial.begin      | Mulai komunikasi serial           |
| cetak         | Serial.print      | Cetak ke serial                   |
| cetakln       | Serial.println    | Cetak ke serial (baris baru)      |
| ngirim        | analogWrite       | Tulis nilai PWM ke pin            |
| macanalog     | analogRead        | Baca nilai analog dari pin        |
| antuk         | for               | Perulangan for                    |
| angke         | int               | Tipe data integer                 |
| fungsi        | void              | Tipe fungsi tanpa nilai balik      |
| nyiapang()    | setup()           | Fungsi setup                      |
| abadi()       | loop()

---

Selamat berkarya dengan **ArduBali**!  
Ngiring ngametuangang inovasi ring jagat teknologi sane ngamolihang
