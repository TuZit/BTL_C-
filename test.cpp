#include <iostream>
#include <vector>
using namespace std;

int findSmallestMissingPositive(vector<int> &A, int n)
{
    // Tạo mảng đánh dấu, kích thước n+2 để phòng TH thiếu số n+1
    vector<bool> seen(n + 2, false);

    // Đánh dấu các số dương xuất hiện
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0 && A[i] <= n + 1)
        {
            seen[A[i]] = true;
        }
    }

    // Tìm số nhỏ nhất chưa được đánh dấu
    for (int i = 1; i <= n + 1; i++)
    {
        if (!seen[i])
        {
            return i;
        }
    }

    return n + 1; // dự phòng
}

int main()
{
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;

    vector<int> A(n);
    cout << "Nhap " << n << " phan tu cua mang:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int result = findSmallestMissingPositive(A, n);
    cout << "So nguyen duong nho nhat khong xuat hien trong mang la: " << result << endl;

    vector<int> duong(n);
    for (int i = 0; i < n; i++)
    {
        // if (A[i] > 0) {
        //     duong.insert(A[i])
        // }
    }
    return 0;
}
