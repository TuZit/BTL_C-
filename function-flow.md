
## 1. Tổng quan luồng chương trình

- **Chương trình bắt đầu tại hàm `main()`**
- `main()` hiển thị menu, nhận lựa chọn từ người dùng (chưa đăng nhập, admin, user)
- Tùy lựa chọn, `main()` gọi các hàm chức năng tương ứng

-----

## 2. Sơ đồ gọi hàm

```mermaid
flowchart 
    Start([Start]) --> Main[main()]
    Main -->|Chưa đăng nhập| MenuGuest
    Main -->|Admin| MenuAdmin
    Main -->|User| MenuUser

    MenuGuest -->|1. Register (User)| registerUser
    MenuGuest -->|2. Register (Admin)| registerUser
    MenuGuest -->|3. Login| login
    MenuGuest -->|4. Exit| End([End])

    login -->|Đăng nhập thành công| Main

    MenuAdmin -->|1. View User List| viewUserList
    MenuAdmin -->|2. Create New Account| createNewAccount
    createNewAccount --> registerUser
    MenuAdmin -->|3. Adjust User Info| adjustUserInfo
    adjustUserInfo --> verifyOTP
    MenuAdmin -->|4. Logout| Main

    MenuUser -->|1. Transfer Points| transferPointsBetweenWallets
    MenuUser -->|2. Change Password| changePassword
    MenuUser -->|3. Update Profile| updateProfile
    updateProfile --> verifyOTP
    MenuUser -->|4. Create Wallet| createWallet
    MenuUser -->|5. Your Profile| viewProfile
    MenuUser -->|6. View Transaction History| viewTransactionHistory
    MenuUser -->|7. Logout| Main

    %% Các hàm lưu/đọc file
    registerUser --> saveUsers
    changePassword --> saveUsers
    updateProfile --> saveUsers
    adjustUserInfo --> saveUsers
    transferPointsBetweenWallets --> saveUsers
    createWallet --> saveUsers

    Main --> loadUsers

```