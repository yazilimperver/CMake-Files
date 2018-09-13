cmake_minimum_required(VERSION 3.9.1)
project(seperateLibSecondApproach)

# C++ standardını atayalım
set(CMAKE_CXX_STANDARD 14)

# Bazı derleyici ayarlarını girelim
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -W0")

# ilgili pathi ekleyelim
include_directories(lib)

# Bu dizini olusturulacak olan dll tanimlamalari icin (sadece DLL olmasi durumu icin gecerli)
include_directories(${CMAKE_BINARY_DIR}/lib/math)

# Çıktı dizinlerini ayarlayalım
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

# Bilgilendirme
message(${CMAKE_BINARY_DIR})

# Kütüphaneye ilişkin oluşturma dosyasına olan bağlantı
add_subdirectory(lib/math)

# Çalıştırılabilir uygulama kodu
add_executable(seperateLibSecondApproach src/main.cpp)

# Kütüphaneleri bağlayalım
target_link_libraries(seperateLibSecondApproach math)