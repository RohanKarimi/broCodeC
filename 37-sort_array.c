#include <stdio.h>

void sort(char array[], int size)
{
	for (int i = 0; i < size - 1; i++) // to compare all numbers left with the others
	{
		for (int j = 0; j < size - i - 1; j++) // how many times need to compare with other numbers
		{
			if (array[j] > array[j+1]) // if wants to reverse the sort, just turn the ">" to "<"
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;	
			}
		}
	}
}

void print_array(char array[], int size) // print each element of the array
{
	int i = 0;
	while (i < size)
	{
		printf("%c ", array[i]);
		i++;
	}
}

int main(void)
{
	//int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5}; // change function arguments to sort numbers
	char array[] = {'C', 'A', 'D', 'G', 'E', 'B','F'};
	int size = sizeof(array) / sizeof(array[0]);

	sort(array, size);
	print_array(array, size);

	return 0;
}