/*���.4
�� �� ������� �������� �� C++, ���� ����� �� ������� ���������� �� �����. ������� ��� �� ����������� ������� � � � �������� � ����������
������ �������� �����. ��� ����� ������� ��� �������� ���� � � 1 ��-����� (�� ASCII ���).*/


#include <iostream>

void draw(char a)
{
	for (char i = 'A'; i <= a; a--)
	{
		for (char j = 'A'; j <= a; j++)
		{
			std::cout << j << " ";
		}
		std::cout << "\n";
	}
}

int main()
{
	char a;
	std::cin >> a;

	draw(a);
	return 0;
}