Exercise 2: Fahrenheit Centigrade Conversion

#include <iostream>

int main() {
  float temperature;
  float result1;
  float result2;
	std::string measurement;

	std::cout << "Please enter the starting temperature:";
	std::cin >> temperature;

  std::cout << "Press ‘C’ to convert from Fahrenheit to Centigrade.\n";
  std::cout << "Press ‘F’ to convert from Centigrade to Fahrenheit.\n";
  
  std::cout << "Your choice:";
	std::cin >> measurement;

  if (measurement == "C"|| measurement == "c") {
    result1 = (temperature-32) * 5 / 9;
    std::cout<< temperature <<" degrees Fahrenheit is "<<result1;
    //60.1 degrees Fahrenheit is 15.6111
  } else if (measurement == "F" || measurement == "f") {
    result2 = (temperature * 9 / 5) + 32;
    std::cout<< result2;
    std::cout<< temperature <<" degrees Centigrade is "<<result1;
} else {
  std::cout << "Your choice:";
	std::cin >> measurement;
}


	return 0;
}
