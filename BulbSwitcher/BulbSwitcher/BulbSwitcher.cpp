// BulbSwitcher.cpp : Defines the entry point for the console application.
//

/*
There are n bulbs that are initially off. You first turn on all the bulbs, then you turn off every second bulb.

On the third round, you toggle every third bulb (turning on if it's off or turning off if it's on). For the ith round, you toggle every i bulb. For the nth round, you only toggle the last bulb.

Return the number of bulbs that are on after n rounds.



Example 1:

Input: n = 3
Output: 1
Explanation: At first, the three bulbs are [off, off, off].
After the first round, the three bulbs are [on, on, on].
After the second round, the three bulbs are [on, off, on].
After the third round, the three bulbs are [on, off, off].
So you should return 1 because there is only one bulb is on.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 1


Constraints:

0 <= n <= 10^9

*/

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "TypeDef.h"
#include <algorithm> 

uint32 BulbSwitcher(uint32 Bulbs)
{
	uint16* BulbsArray = new uint16 [Bulbs]; ///starts with all bulbs off 
	std::fill_n(BulbsArray, Bulbs, 0);   ///to initialise the new operator array at once
	uint32 onBulbs = 0U;

	for (uint32 i = 1U; i <= Bulbs; i++)
	{
		if (i == 1U)
		{
			std::fill_n(BulbsArray, Bulbs, 1);   ///to initialise the new operator array at once
			continue;
		}

		for (uint32 j = i; j <= Bulbs; j += i)
		{
			BulbsArray[j-1] = !BulbsArray[j-1];
		}

	}
	for (uint32 i = 0U; i < Bulbs; i++)
	{
		if(BulbsArray[i] == 1U)
		{
			onBulbs++;
		}
	}

	return onBulbs;
}



int main()
{
	uint32 n = 4U;
	uint32 onbulbs = 0U;

	onbulbs = BulbSwitcher(n);

	std::cout << "Number of on Bulbs = " << onbulbs;

	while (true)
	{

	}
    return 0;
}

