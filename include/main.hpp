#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <cctype>
#include <limits>
#include <random>

#define PEL PasswordEncryptionLevel
#define PELS PasswordEncryptionLevelString
#define PAC PasswordAllowedCharacters

enum class EncryptionLevel {
	LOW,
	MEDIUM,
	HIGH,
	ULTRA
};

EncryptionLevel PasswordEncryptionLevel;
std::string PasswordEncryptionLevelString;
std::string Password;
int PasswordLength;
std::map<EncryptionLevel, std::string> PasswordAllowedCharacters = {
	{EncryptionLevel::LOW, "qwertyuiopasdfghjklzxcvbnm"},
	{EncryptionLevel::MEDIUM, "qwertyuiopasdfghjklzxcvbnm1234567890"},
	{EncryptionLevel::HIGH, "qwertyuiopasdfghjklzxcvbnm1234567890!@#$%^&*()"},
	{EncryptionLevel::ULTRA, "qwertyuiopasdfghjklzxcvbnm1234567890!@#$%^&*()-_+=[{}];:'\"/?.>,<`~"},
};