# ArduBali

ArduBali adalah library Arduino yang menyediakan makro dengan istilah Bahasa Bali. Yang dibuat untuk mempermudah orang bali dalam menggunakan arduino.
## Fitur

- status pin: `PESU`, `MECELEP`, `NYALE`, `AMOR`
- fungsi: `ngaturang`, `kontrol`, `antos`
- Tipe data dan fungsi utama: `angke`, `fungsi`, `nyiapang`, `abadi`
- Fungsi print: `cetak`, `cetakln`

## Instalasi

1. Download atau clone repository ini.
2. Ubah file ke `zip` lalu masukan file zip tersebut ke arduino ide.
3. Restart Arduino IDE jika sudah terbuka.

## Contoh Penggunaan

```cpp
#include <ArduBali.h>

angke i = 0; 

fungsi nyiapang() {
    Mekawit(9600);
    cetakln("Program dimulai!");
}

fungsi abadi() {
    cetak("Angka Ke - ");
    cetakln(i);
    i += 1;
    antos(1000);
}
```

---

© 2024 Npswara - Semua hak dilindungi MIT.

