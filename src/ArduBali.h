#ifndef ARDUBALI_H
#define ARDUBALI_H

#include <Arduino.h>

// Konstanta untuk status perangkat
#define PESU OUTPUT
#define MECELEP INPUT
#define NYALE HIGH
#define AMOR LOW

// Makro untuk menggantikan fungsi pinMode, digitalWrite, dan delay
#define ngaturang pinMode
#define kontrol digitalWrite
#define antos delay


// Makro untuk fungsi serial
#define Mekawit Serial.begin
#define cetak Serial.print
#define cetakln Serial.println

// Makro untuk menggantikan tipe data dan fungsi utama
#define angke int
#define fungsi void
#define nyiapang() setup()
#define abadi() loop()

#endif // ARDUBALI_H
