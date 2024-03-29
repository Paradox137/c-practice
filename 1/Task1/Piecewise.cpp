#include "pch.h"
#include "Piecewise.h"
#include <math.h> 
// �������� ��� pow, � ������� �������� ����������
float Piecewise(float x, float R)
{
	if (x < -10 || x > (2 * R))//��� �������
		return 0;
	// ����� ����� ������� �� ����� ����, ������ ��� �� ���� ��� ��������� ���
	if (x <= 0)//������
		return (-3 - 0.5 * x);
	// ����� ���� �� ���� ��������� x > 0, ���� �� ��� ���� �� ���, �� � ������� ����� if ��� �� ������� return
	if (x <= R)//������ ����� ��������������
		return -sqrtf(pow(R, 2) - (pow(x,2)));
	// ����� �� �� ����� � x > R
	if (x <= (2*R))//������� ����� ��������������
		return sqrtf(pow(R, 2) - (pow(x-(2*R), 2)));
}
