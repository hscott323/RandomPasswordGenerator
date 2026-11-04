#include "main.hpp"
#define PEL PasswordEncryptionLevel
#define PELS PasswordEncryptionLevelString

int main() {

	while (true) {
		std::cout << "How many characters do you want your password to be?: ";

		if (std::cin >> PasswordLength) {
			break;
		}

		std::cout << "Invalid input!\n";

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	while (true) {
		std::cout << "What encryption level do you want your password to be? (Low, Mid, High, Ultra): ";
		std::cin >> PELS;

		for (int i = 0; i < PELS.length(); i++) {
			PELS[i] = std::tolower(PELS[i]);
		}

		if (PELS == "low") {
			PEL = EncryptionLevel::LOW;
			break;
		}
		else if (PELS == "mid") {
			PEL = EncryptionLevel::MEDIUM;
			break;
		}
		else if (PELS == "high") {
			PEL = EncryptionLevel::HIGH;
			break;
		}
		else if (PELS == "ultra") {
			PEL = EncryptionLevel::ULTRA;
			break;
		}
		else {
			std::cout << "Invalid input!\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}