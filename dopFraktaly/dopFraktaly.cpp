#include <windows.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	HWND hwnd = GetConsoleWindow();
	HDC hdc = GetDC(hwnd);
	int n = 10;
	float x = 10, y = 110;
	//cout << "Введите n" << endl;
	//cin >> n;
	//cout << "Введите k" << endl;
	//cin >> k;

	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 255, 255));
		x += 1;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 255, 255));
		y += 1;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 255, 255));
		x += 1;
	}
	for (float i = 0; i < n; i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 255, 255));
		y -= 1;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 255, 255));
		x += 1;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 255, 255));
		y += 1;
	}
	for (float i = 0; i < n / 2; i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 255, 255));
		x += 1;
	}


	x = 420;
	y = 220;
	n = 5;

	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		x += 1;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		y -= 0.8;
		x += 0.5;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		y += 0.8;
		x += 0.5;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		x += 1;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		y -= 0.8;
		x += 0.5;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		y -= 0.8;
		x -= 0.5;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		x += 1;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		y -= 0.8;
		x += 0.5;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		y += 0.8;
		x += 0.5;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		x += 1;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		y += 0.8;
		x -= 0.5;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		y += 0.8;
		x += 0.5;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		x += 1;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		y -= 0.8;
		x += 0.5;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		y += 0.8;
		x += 0.5;
	}
	for (float i = 0; i < (n / 2); i += 0.05)
	{
		SetPixel(hdc, x, y, RGB(255, 0, 0));
		x += 1;
	}

	ReleaseDC(hwnd, hdc);
	std::cin.ignore();
	return 0;
}

