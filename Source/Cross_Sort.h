#include <vector>

namespace Algorithms
{
	template<typename T>
	void Cross_Sort(std::vector<T>& vector)
	{
		if(vector.size() < 2)
        {
            return;
        }

		bool sorted = false;
		unsigned long long l_index = 0;
		unsigned long long r_index = vector.size() - 1;
		unsigned long long l_bound = 0;
		unsigned long long r_bound = vector.size() - 1;

		while(sorted == false)
		{
			sorted = true;

			while(l_index < r_bound)
			{
				if(l_index < r_index && vector[l_index] > vector[r_index])
				{
					sorted = false;
					std::swap(vector[l_index], vector[r_index]);
				}

				if(vector[l_index] > vector[l_index + 1])
				{
					sorted = false;
					std::swap(vector[l_index], vector[l_index + 1]);
				}

				if(vector[r_index] < vector[r_index - 1])
				{
					sorted = false;
					std::swap(vector[r_index], vector[r_index - 1]);
				}

				r_index--;
				l_index++;
			}

			if(sorted == false)
			{
	            l_bound++;
			    r_bound--;
			    r_index = r_bound;
			    l_index = l_bound;
			}
		}
	}
}