#include <vector>

namespace Algorithms
{
	template<typename T>
	void Cross_Sort(std::vector<T>& vector)
	{
		bool sorted = false;
		unsigned long long j = 0;
		unsigned long long l = 0;
		unsigned long long r = vector.size() - 1;

		while(sorted == false)
		{
			sorted = true;

			for(unsigned int i = l; i < r; i++)
			{
				j = (vector.size() - i) - 1;

				if(i < j && vector[i] > vector[j])
				{
					sorted = false;
					std::swap(vector[i], vector[j]);
				}

				if(vector[i] > vector[i + 1])
				{
					sorted = false;
					std::swap(vector[i], vector[i + 1]);
				}

				if(vector[j] < vector[j - 1])
				{
					sorted = false;
					std::swap(vector[j], vector[j - 1]);
				}
			}

			l++;
			r--;
		}
	}
}