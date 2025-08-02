# ArduBali

**ArduBali** adalah library Arduino yang mengubah sintaks Arduino menjadi Bahasa Bali.
## Fitur

- Makro untuk status pin: `PESU`, `MECELEP`, `NYALE`, `AMOR`
- Makro untuk fungsi dasar: `ngaturang`, `kontrol`, `antos`, `maca`, `macaAnalog`, `ngirim`
- Makro untuk fungsi serial: `Mekawit`, `cetak`, `cetakln`
- Tipe data dan fungsi utama: `angke`, `angkeDesimal`, `fungsi`, `nyiapang`, `abadi`
- Nilai logika: `becik`, `salah`

## Instalasi

1. Download atau clone repository ini.
2. Ubah ke dalam zip, lalu tambahkan library ini ke arduino ide anda dengan menggunakan zip
3. Restart Arduino IDE jika sudah terbuka.

## Contoh Penggunaan

```cpp
#include "ArduBali.h"

angke i; // Tipe data angka (int)

fungsi nyiapang() {
    antuk(i = 0; i < 10; i = i = 1){
        Mekawit(9600)
        cetak("Angke ke - ");
        cetak(i);
        cetakln("");
        antos(500);
    }
    cetak("Program suud")
}
fungsi abadi() {
}
```

## Daftar Sintaks

| Bahasa Bali      | Arduino Asli      | Keterangan                        |
|------------------|-------------------|-----------------------------------|
| ngaturang        | pinMode           | Atur mode pin                     |
| kontrol          | digitalWrite      | Tulis nilai digital ke pin        |
| maca             | digitalRead       | Baca nilai digital dari pin       |
| macaAnalog       | analogRead        | Baca nilai analog dari pin        |
| ngirim           | analogWrite       | Tulis nilai PWM ke pin            |
| antos            | delay             | Jeda waktu                        |
| Mekawit.begin    | Serial.begin      | Mulai komunikasi serial           |
| cetak            | Serial.print      | Cetak ke serial                   |
| cetakln          | Serial.println    | Cetak ke serial (baris baru)      |
| PESU             | OUTPUT            | Mode output                       |
| MECELEP          | INPUT             | Mode input                        |
| NYALE            | HIGH              | Nilai tinggi                      |
| AMOR             | LOW               | Nilai rendah                      |
| angke            | int               | Tipe data integer                 |
| angkeDesimal     | float             | Tipe data pecahan                 |
| fungsi           | void              | Tipe fungsi tanpa nilai balik      |
| nyiapang()       | setup()           | Fungsi setup                      |
| abadi()          | loop()            | Fungsi loop                       |
| becik            | true              | Nilai benar                       |
| salah            | false             | Nilai salah                       |

---

Selamat berkarya dengan **ArduBali**!  
Ngiring ngametuangang inovasi ring jagat teknologi sane ngamolihang


