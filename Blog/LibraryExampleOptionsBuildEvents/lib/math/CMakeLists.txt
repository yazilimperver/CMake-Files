cmake_minimum_required(VERSION 3.9.1)

# Çıktı dizinlerini ayarlayalım
set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR}/lib)

if (OPTIONS_SHARED_LIBRARY_ENABLED)
	include (GenerateExportHeader)          
	include_directories(${CMAKE_BINARY_DIR}/lib/math)
endif (OPTIONS_SHARED_LIBRARY_ENABLED)	

# Kütüphane komutları
if (OPTIONS_SHARED_LIBRARY_ENABLED)
	add_library(math SHARED mathLib.h mathLib.cpp)
else()
	add_library(math STATIC mathLib.h mathLib.cpp)
endif (OPTIONS_SHARED_LIBRARY_ENABLED)

if (OPTIONS_SHARED_LIBRARY_ENABLED)
	GENERATE_EXPORT_HEADER(math           # generates the export header shared_EXPORTS.h 	automatically
    	BASE_NAME math
    	EXPORT_MACRO_NAME SHARED_EXPORTS
    	EXPORT_FILE_NAME SHARED_EXPORTS.h
    	STATIC_DEFINE SHARED_EXPORTS_BUILT_AS_STATIC)
endif (OPTIONS_SHARED_LIBRARY_ENABLED)    	