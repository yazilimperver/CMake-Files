#include <iostream>
#include "Math/MathLib.h"

int main()
 {
	MathLib lib;
    int number1 {0};
    int number2 {0};
	std::cout << "Lutfen toplamak icin iki sayi giriniz:" << std::endl; 
	std::cin >> number1 >> number2;
	
    auto sum = lib.Sum(number1, number2);

	std::cout << "Toplama sonucu: " << sum << std::endl;
	
	return 0;
}