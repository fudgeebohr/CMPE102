#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isShort(const string& str) {
    return str.length() < 8;
}

bool hasUpperCase(const string& str) {
    for (char c : str) {
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}

bool hasLowerCase(const string& str) {
    for (char c : str) {
        if (islower(c)) {
            return true;
        }
    }
    return false;
}

bool hasDigit(const string& str) {
    for (char c : str) {
        if (isdigit(c)) {
            return true;
        }
    }
    return false;
}

bool hasSpecialChar(const string& str) {
    for (char c : str) {
        if (!isalnum(c)) {
            return true;
        }
    }
    return false;
}

bool hasConsecutiveUppercase(const string& str) {
    for (int i = 0; i < str.length() - 1; i++) {
        if (isupper(str[i]) && isupper(str[i+1])) {
            return true;
        }
    }
    return false;
}

bool hasConsecutiveLowercase(const string& str) {
    for (int i = 0; i < str.length() - 1; i++) {
        if (islower(str[i]) && islower(str[i+1])) {
            return true;
        }
    }
    return false;
}

bool hasConsecutiveDigits(const string& str) {
    for (int i = 0; i < str.length() - 1; i++) {
        if (isdigit(str[i]) && isdigit(str[i+1])) {
            return true;
        }
    }
    return false;
}

bool hasRepeatingChars(const string& str) {
    for (int i = 0; i < str.length() - 2; i++) {
        if (str[i] == str[i+1] && str[i] == str[i+2]) {
            return true;
        }
    }
    return false;
}

int main() {
    string name, password;
    cout << "Full Name: ";
    getline(cin, name);
    
    cout << "Password: ";
    getline(cin, password);
    
    bool hasWeakness = false;
    if (isShort(password)) {
        cout << "Password is too short." << endl;
        hasWeakness = true;
    }
    if (!hasUpperCase(password) || !hasLowerCase(password)) {
        cout << "Password must contain at least one uppercase letter and one lowercase letter." << endl;
        hasWeakness = true;
    }
    if (!hasDigit(password)) {
        cout << "Password must contain at least one numeric digit." << endl;
        hasWeakness = true;
    }
    if (!hasSpecialChar(password)) {
        cout << "Password must contain at least one special character." << endl;
        hasWeakness = true;
    }
    if (hasConsecutiveUppercase(password)) {
        cout << "Password contains a sequence of consecutive uppercase letters." << endl;
        hasWeakness = true;
    }
    if (hasConsecutiveLowercase(password)) {
        cout << "Password contains a sequence of consecutive lowercase letters." << endl;
        hasWeakness = true;
    }
    if (hasConsecutiveDigits(password)) {
        cout << "Password contains a sequence of consecutive numeric." << endl;
    }
}
