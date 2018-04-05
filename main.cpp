#include <iostream>
#include <vector>
#include <string>



int main()
{
	unsigned int n{};
	
	std::vector < int> V{};
	std::vector < int> newV{};
	std::string Sk{};
	getline(std::cin, Sk);
	for (auto& i : Sk)
	{
		V.push_back(i-48);
	}
	V.push_back(-1);
	std::cin >> n;
	
	for(unsigned int j = 0; j < n; j++)
	{
		unsigned int sum = 1;
		const int s = V.size();
		for (unsigned int i = 0; i < s-1; i++)
		{
			if (V[i] == V[i+1])
			{
				sum++;
			} else if (V[i] != V[i+1])
			{
				//std::cout << sum << std::endl;
				newV.push_back(sum);
				newV.push_back(V[i]);
				sum = 1;
			}
		}
		V = newV;
		V.push_back(-1);
		newV.clear();
	}
	for (unsigned int i = 0; i < V.size()-1; i++)
	{
		std::cout << V[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
