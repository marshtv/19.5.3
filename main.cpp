#include <fstream>
#include <iostream>
#include <string>

int main() {
	std::ifstream payroll;
	payroll.open("F:\\__C++\\Skillbox\\19\\19.5.3\\Files\\Payroll.txt");

	std::string first_name, first_name_max, last_name, last_name_max, date;
	int pay, max_pay = 0, sum = 0;

	while (!payroll.eof()) {
		payroll >> first_name >> last_name >> pay >> date;
		sum += pay;
		if (pay > max_pay) {
			max_pay = pay;
			first_name_max = first_name;
			last_name_max = last_name;
		}
	}
	payroll.close();
	std::cout << "Sum of payments = " << sum << std::endl;
	std::cout << "Max payment " << max_pay << " received by " << first_name_max << " " << last_name_max << std::endl;

	return 0;
}
