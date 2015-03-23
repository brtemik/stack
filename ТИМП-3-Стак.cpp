// ТИМП-3-Стак.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"



#include <iostream>
#include "MyStack.h"

int main(int argc, char** argv)
{
	int n, data;
	char c;

	MyStack stack;

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> c;

		if (c == 'a')
		{
			std::cin >> data;
			stack.push(data);
		}
		else if (c == 'd')
			stack.pop();
	}

	while (!stack.isEmpty())
		std::cout << stack.pop() << std::endl;

	getchar();
	getchar();

	return 0;
}