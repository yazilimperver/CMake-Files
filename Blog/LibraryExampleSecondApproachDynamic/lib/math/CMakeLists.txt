cmake_minimum_required(VERSION 3.9.1)

# Çıktı dizinlerini ayarlayalım
set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR}/lib)

include (GenerateExportHeader)          
include_directories(${CMAKE_BINARY_DIR}/lib/math)

# Kütüphane komutları
add_library(math SHARED mathLib.h mathLib.cpp)

GENERATE_EXPORT_HEADER(math           # generates the export header shared_EXPORTS.h automatically
    BASE_NAME math
    EXPORT_MACRO_NAME SHARED_EXPORTS
    EXPORT_FILE_NAME SHARED_EXPORTS.h
    STATIC_DEFINE SHARED_EXPORTS_BUILT_AS_STATIC)