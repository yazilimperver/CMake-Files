cmake_minimum_required(VERSION 3.9.1)

# Çıktı dizinlerini ayarlayalım
set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR}/lib)

# Kütüphane komutları
add_library(math STATIC mathLib.h mathLib.cpp)