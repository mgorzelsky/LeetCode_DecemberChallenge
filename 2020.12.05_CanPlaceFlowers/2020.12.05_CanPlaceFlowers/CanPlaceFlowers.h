#pragma once
#include <vector>

using std::vector;

bool canPlaceFlowers(vector<int>& flowerbed, int n)
{
	int index = 0;
	if (flowerbed.size() == 1 && flowerbed[0] == 0)
	{
		n--;
		index += 2;
	}
	while (n > 0 && index < flowerbed.size())
	{
		// Check the first pot.
		if (index == 0)
		{
			if (flowerbed[index] == 0 && flowerbed[index + 1] == 0)
			{
				n--;
				index += 2;
			}
			else
			{
				index++;
			}
		}
		// Check last pot.
		else if (index == flowerbed.size() - 1)
		{
			if (flowerbed[index] == 0 && flowerbed[index - 1] == 0)
			{
				n--;
				index += 2;
			}
			else
			{
				index++;
			}
		}
		// Check any pot in the middle.
		else if (flowerbed[index] == 0 && flowerbed[index - 1] == 0 && flowerbed[index + 1] == 0)
		{
			n--;
			index += 2;
		}
		else
		{
			index++;
		}
	}
	if (n > 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}