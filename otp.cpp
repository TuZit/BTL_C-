#include "otp.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include <iomanip>

using namespace std;

bool verifyOTP(const string &changes)
{
    srand(time(0));             // Khởi tạo seed ngẫu nhiên
    int otp = rand() % 1000000; // Tạo số ngẫu nhiên từ 0 đến 999999
    stringstream ss;
    ss << setw(6) << setfill('0') << otp; // Đảm bảo OTP luôn có 6 chữ số
    string generatedOTP = ss.str();

    cout << "OTP sent to your account: " << generatedOTP << endl;
    cout << "Changes requested: " << changes << endl;
    cout << "Enter OTP to confirm: ";
    string userOTP;
    cin >> userOTP;
    return userOTP == generatedOTP;
}