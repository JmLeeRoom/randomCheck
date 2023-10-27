#include <iostream>
#include <time.h>

using namespace std;

int main() {
	srand((unsigned int)time(NULL));
	int RandomArray[4];
	int temp;

	for (int i = 0; i < 4; i++)
	{
		RandomArray[i] = rand() % 52 + 1;
		for (int j = 0; i < i; j++) 
		{
			if (RandomArray[i] == RandomArray[j]) 
			{
				i--;
			}
		}

		printf("%d\t", RandomArray[i]);
	}


}