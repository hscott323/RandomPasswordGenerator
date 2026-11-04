#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <limits>

enum class EncryptionLevel {
	LOW,
	MEDIUM,
	HIGH,
	ULTRA
};

EncryptionLevel PasswordEncryptionLevel;
std::string PasswordEncryptionLevelString;
int PasswordLength;