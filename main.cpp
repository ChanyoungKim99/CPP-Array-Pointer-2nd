#include <iostream>


int main()
{
	int array[10]{ };

	int sum{};

	// �迭 �ε���
	for (int i = 0; i < 10; i++)
	{
		sum += array[i];
	}



	// ������ Ȱ�� 1
	for (int i = 0; i < 10; i++)
	{
		sum += *(array + i);
	}

	// sum += *array + i; �϶���
	// *�� �켱������ �ſ�ſ� ���⶧����
	// (*array) + i �� ���� �Ǿ������. 

	// ������ Ȱ�� 2
	for (int i = 0, *p = array; i < 10; i++, p++)
	{
		sum += *p;
	}
}