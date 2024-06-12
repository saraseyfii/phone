#include<iostream>
#include<cstring>
#include<regex>

bool validateMobileNumber(std::string phoneNumber) {
	//Rengular expression to match a valid mobile number
	std::regex pattern("^(\\+98|0)?0\\d{9}$");
	//check if the phone number mattches the pattern
	if (std::regex_match(phonenumber, pattern)) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	std::string phonenumber;
	std::cout << "please enter phonenumber:";
	
	std::cin >> phonenumber;
	if (validatemobilenumber(phonenumber)) {
		std::cout << "the number entered is valid" << std::endl;
	}
	else {
		std::cout << "the number entered is not valid" << std::endl;
	}
	return 0;
}