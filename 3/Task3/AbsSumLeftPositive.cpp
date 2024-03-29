#include "pch.h"
#include "AbsSumLeftPositive.h"
// ���������� ����� ������� ��������� �������, ������������� �� ���������� �������������� ��������
						// const double*
						// arr - ��� ���������� �� ��������� "arrsiv". �������� �� ������������!
double AbsSumLeftPositive(const double* arr, size_t count)
{
	// ����� - ��� ������ �����. ������� � ����� ����� ������ ���������� �������������� ��������, � � ������ ��� ����� ������
	int CountOfLastPositive = 0; // ������� ��� ����� ��������, ��� ��������� ���������� �� �������� �����?
	double sum = 0;
	// ��� ��� ��� ��� ����� ���� � ����� ���������, ��� ������ ��������� ������������� �����, ����� ������ �� ����
	for (int i = count - 1; i >= 0; --i)
	{
		if (arr[i] > 0)
		{
			CountOfLastPositive = i;
			break;
		}
	}
	// � ����� ��������, ����� �������. �������, ��� �� �������� ���� ��������� ����� �� ��������, �� �������� ��� ��� ����� �����������, ������ �� ������ � ����� (����������� �������) ��� �������
	for (int j = 0; j < CountOfLastPositive; ++j)
	{
		//  � ������� ������ ������� ��� ����� ���������� ���� ���� ������������������
		// ������������� ������� � ������� ��������� [], �� ���� �� *(arr + j - 1), � arr[j - 1];
		// � ������ ��� ����� - j �� 1 �� CountOfLastPositive, � ����� j-1? �������� ��-�����������, j = 0; j < CountOfLastPositive; � ����������� arr[j]
		sum += abs(arr[j]); // ������������� �������� ����������
	}
	return sum;
}