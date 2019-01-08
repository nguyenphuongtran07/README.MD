#include <iostream>
using namespace std;
int main()
{
	int ThoiHan;
	float TienGui, TienLai, WishMoney, LaiSuat, Sum, count = 1;
	cout << "Nhap vao so tien gui ban dau : " << endl;
	cin >> TienGui;
	cout << "Nhap vao so tien ky vong : " << endl;
	cin >> WishMoney;
	cout << "Nhap vao lai suat khi gui (%): " << endl;
	cin >> LaiSuat;

	TienLai = (TienGui * LaiSuat) / 100;
	Sum = TienGui + TienLai;

	do
	{
		if (Sum < WishMoney)
		{
			count++;
			Sum = Sum + TienLai;
		}
		else
			break;
	} while (1 != 2);
	cout << "Thoi han dat duoc so tien " << WishMoney << " la : " << count << " nam." << endl;
	return 0;
}