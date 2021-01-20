Exercise 2: Fahrenheit Centigrade Conversion

#include <iostream>

int main() {
  float temperature;//This are the variales that I used to calculte the tempature 
  float result1;
  float result2;
	std::string measurement;//This the varible input for the celicus or Fahrenheit

	std::cout << "Please enter the starting temperature:";
	std::cin >> temperature;//I used this cin to get the input for the tempature

  std::cout << "Press ‘C’ to convert from Fahrenheit to Centigrade.\n";//Simple output telling user instuctions 
  std::cout << "Press ‘F’ to convert from Centigrade to Fahrenheit.\n";
  
  std::cout << "Your choice:";
	std::cin >> measurement;//The user decides to  input what measurement to input 

  if (measurement == "C"|| measurement == "c") {
    result1 = (temperature-32) * 5 / 9;
    std::cout<< temperature <<" degrees Fahrenheit is "<<result1;
    //60.1 degrees Fahrenheit is 15.6111
    //This if statement convert from Fahrenheit to Centigrade.
  } else if (measurement == "F" || measurement == "f") {
    result2 = (temperature * 9 / 5) + 32;
    std::cout<< result2;
    std::cout<< temperature <<" degrees Centigrade is "<<result1;
    //convert from Centigrade to Fahrenheit.
} else {
  std::cout << "Your choice:";
	std::cin >> measurement;
}


	return 0;
}
