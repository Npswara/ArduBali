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

// ===== Serial (istilah lama) =====
#define mekawit   Serial.begin
#define cetak     Serial.print
#define cetakln   Serial.println

// ===== Istilah lama (tetap bisa dipakai) =====
#define pesu       OUTPUT
#define mecelep    INPUT
#define nyale      HIGH
#define amor       LOW
#define desimal    float
#define becik      true
#define salah      false
#define ngaturang  pinMode
#define kontrol    digitalWrite
#define antos      delay
#define maca       digitalRead
#define ngirim     analogWrite
#define macanalog  analogRead
#define antuk      for
#define yening     if
#define angke      int
#define fungsi     void
#define nyiapang() setup()
#define abadi()    loop()
// mekawit, cetak, cetakln sudah didefinisikan di bagian Serial di atas

#endif // ARDUBALI_H
