#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>

using namespace std;

class Dice 
{
	private:
		int maxValue;
	public:
		Dice(int maxValue = 6)
		{
			this->maxValue = maxValue;
		}

		~Dice() 
		{

		}
	
		int toss(int times = 1)
		{
			int result = 0;
			for (size_t i = 0; i < times; i++)
			{
				result += rand() % maxValue + 1;
			}
			return result;
		}
};
int main()
{

	srand(time(NULL));

	Dice d1;
	Dice d2(14);
	Dice d3(20);

	cout << d1.toss() << endl;
	cout << d2.toss() << endl;
	cout << d3.toss() << endl;

	system("pause");
	return 0;
}