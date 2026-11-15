#ifndef ARDUBALI_H
#define ARDUBALI_H

#include <Arduino.h>

// ===== Mode pin =====
#define Pikolih   OUTPUT
#define Padaging  INPUT

// ===== Logika tegangan =====
#define Inggil    HIGH      // Serapan Jawa Kuno
#define Tegeh     HIGH      // Alias Inggil
#define Andap     LOW

// ===== Tipe data & nilai boolean =====
#define Dasamika  float     // Serapan Jawa Kuno
#define angka     int
#define guna      void
#define Patut     true
#define Iwang     false

// ===== Fungsi pin & waktu =====
#define PaksaPin    pinMode
#define suratMaya   digitalWrite
#define wacaMaya    digitalRead
#define analogSurat analogWrite
#define analogWaca  analogRead
#define Jantos      delay

// ===== Struktur kontrol =====
#define angge     for
#define yen       if
#define tios      else
#define yen_tios  else if

// ===== Fungsi utama =====
#define enter()   setup()
#define wali()    loop()

#endif // ARDUBALI_H
