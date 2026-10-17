#include <iostream>
#include <string>

using namespace std;
//Khai báo các thư viện,như iostram và chuỗi kí tự
int main() {
    
    string secret = "GMBH|D0ef_Cb4t1d~";
 //Khai báo chuỗi bí mật
    string input;
    cout << "Nhap mat khau: ";
    cin >> input;
//Phần nhập input,cin đóng vai trò lưu input,cout đóng vai trò giúp người dùng biết là mình cần nhập mật khẩu 
    for (char &c : input) {
        c = c + 1; 
    }
//Biến đổi kí tự theo chuẩn ASCII
    if (input == secret) {
        cout << "Chinh xac! Ban da tim ra Flag." << endl;
    } else {
        cout << "Sai mat khau!" << endl;
    }
//Kiểm tra kết quả và kết thúc code
    return 0;
}
//end
