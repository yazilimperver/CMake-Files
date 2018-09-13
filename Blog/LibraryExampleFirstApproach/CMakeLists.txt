cmake_minimum_required(VERSION 3.9.1)
project(seperateLibFirstApproach)

# C++ standardını atayalım
set(CMAKE_CXX_STANDARD 14)

# Bazı derleyici ayarlarını girelim
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -W0")

# ilgili pathi ekleyelim
include_directories(lib)

# Çıktı dizinlerini ayarlayalım
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR}/lib)

# Bilgilendirme
message(${CMAKE_BINARY_DIR})

# Kütüphane komutları
#add_library(math SHARED lib/math/mathLib.h lib/math/mathLib.cpp)
add_library(math STATIC lib/math/mathLib.h lib/math/mathLib.cpp)

# Çalıştırılabilir uygulama kodu
add_executable(seperateLibFirstApproach src/main.cpp)

# Kütüphaneleri bağlayalım
target_link_libraries(seperateLibFirstApproach math)