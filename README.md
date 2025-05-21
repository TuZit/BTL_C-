# BÁO CÁO BÀI TẬP LỚN MÔN LẬP TRÌNH C++

## 1. Giới thiệu dự án

**Tên dự án:**  
Hệ thống Quản lý Ví Điện Tử Đơn Giản

**Mục tiêu:**  
Xây dựng một chương trình quản lý ví điện tử cho phép người dùng đăng ký, đăng nhập, quản lý ví, chuyển điểm, xem lịch sử giao dịch, cập nhật thông tin cá nhân và quản lý tài khoản (dành cho admin).

---

## 2. Thành viên tham gia và phân công công việc

| Họ và tên      |  MSSV      | Công việc phụ trách                                                                     |
|----------------|----------- |-----------------------------------------------------------------------------------------|
| Nguyễn Tú Anh  | K24DTCN502 | Thiết kế xử lý chức năng Admin/User; xử lý đăng ký/đăng nhập, đổi mật khẩu, transaction |
|                |            | Xử lý lưu/đọc dữ liệu JSON, OTP, giao diện menu, kiểm thử và hoàn thiện báo cáo         |
|----------------|----------- |-----------------------------------------------------------------------------------------|

---

## 3. Phân tích & Đặc tả chức năng

### 3.1. Đối tượng sử dụng
- **Admin:** Quản lý tài khoản người dùng, tạo tài khoản mới, chỉnh sửa thông tin user.
- **User:** Quản lý ví, chuyển điểm, xem lịch sử giao dịch, cập nhật thông tin cá nhân.

### 3.2. Đặc tả chức năng

#### a. Đăng ký tài khoản
- Người dùng có thể đăng ký tài khoản mới (user hoặc admin).
- Nếu là user, mật khẩu được sinh tự động và yêu cầu đổi khi đăng nhập lần đầu.

#### b. Đăng nhập
- Người dùng nhập username và mật khẩu.
- Hệ thống kiểm tra thông tin, nếu đúng cho phép truy cập.

#### c. Quản lý ví
- Mỗi user có thể tạo nhiều ví, mỗi ví có số dư riêng.
- Có thể chuyển điểm giữa các ví (cùng hoặc khác user).

#### d. Chuyển điểm
- Nhập ID ví nguồn, ví đích và số điểm chuyển.
- Kiểm tra số dư, thực hiện giao dịch và lưu lịch sử.

#### e. Xem lịch sử giao dịch
- Hiển thị danh sách các giao dịch đã thực hiện.

#### f. Cập nhật thông tin cá nhân
- Cho phép đổi tên, đổi mật khẩu (có xác thực OTP).

#### g. Quản lý tài khoản (Admin)
- Xem danh sách user.
- Tạo tài khoản mới.
- Chỉnh sửa thông tin user (có xác thực OTP).

#### h. OTP
- Xác thực các thao tác nhạy cảm (đổi thông tin, đổi mật khẩu).

---

## 4. Hướng dẫn cài đặt, dịch và chạy chương trình

### 4.1. Yêu cầu
- **Hệ điều hành:** Windows
- **Trình biên dịch:** g++ (MinGW, MSYS2, hoặc tương đương)
- **Thư viện ngoài:** [nlohmann/json](https://github.com/nlohmann/json) (đã kèm file `json.hpp`)

### 4.2. Tải chương trình
- Clone git repository: [github](https://github.com/TuZit/BTL_C-.git).

### 4.3. Chạy chương trình
- Mở file `main.cpp` với Visual Studio Code.
- Cài Visual Studio Code extension: [C/C++ Compile Run](https://marketplace.visualstudio.com/items?itemName=danielpinto8zz6.c-cpp-compile-run)
    + Extension hỗ trợ compile và run code dễ dàng hơn.
- Nhấn tổ hợp phím: F5
- Mở terminal/cmd tại thư mục dự án.

- Thực hiện các thao tác theo menu hướng dẫn trên terminal:
    + Đăng ký, đăng nhập
    + Quản lý ví, chuyển điểm
    + Xem lịch sử giao dịch
    + Cập nhật thông tin cá nhân
    + Quản lý tài khoản (admin)

---

## 5. Mô tả input/output, chú thích mã nguồn

- **Input:**  
    + Nhập từ bàn phím: username, password, thông tin ví, số điểm chuyển, OTP, v.v.
- **Output:**  
    + Hiển thị thông tin tài khoản, ví, giao dịch, thông báo thành công/thất bại, hướng dẫn thao tác.

- **Chú thích mã nguồn:**  
    + Mỗi hàm đều có chú thích đầu hàm giải thích chức năng.
    + Các đoạn xử lý chính đều có comment giải thích.
    + Đầu file có mô tả ngắn về vai trò của file/module.

---

## 6. Tài liệu tham khảo

- [nlohmann/json - GitHub](https://github.com/nlohmann/json)
- Tài liệu C++ cơ bản:  
https://cplusplus.com/doc/tutorial/
- Một số ý tưởng tham khảo từ StackOverflow, Copilot và tài liệu môn học.

---

**Mọi thắc mắc, góp ý xin liên hệ nhóm thực hiện. Xin cảm ơn!**