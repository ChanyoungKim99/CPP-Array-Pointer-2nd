#include <iostream>


int main()
{
	int array[10]{ };

	int sum{};

	// 배열 인덱스
	for (int i = 0; i < 10; i++)
	{
		sum += array[i];
	}



	// 포인터 활용 1
	for (int i = 0; i < 10; i++)
	{
		sum += *(array + i);
	}

	// sum += *array + i; 일때는
	// *의 우선순위가 매우매우 높기때문에
	// (*array) + i 인 꼴이 되어버린다. 

	// 포인터 활용 2
	for (int i = 0, *p = array; i < 10; i++, p++)
	{
		sum += *p;
	}
}