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


//new approach

discovered that at the end the only ones that's going to stay on are those who are complete square
let's say 8 bulbs
at the end only number 1 and number 4 are on
so we need to discover how many numbers has complete square with in the n given and that's it, don't care where they are
so no need to an array and that
*/

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include "TypeDef.h"
#include <math.h>


uint32 BulbSwitcher(uint32 Bulbs)
{
	uint32 onBulbs = 0U;
	uint32 Sqr = 0U;    //ASSIGN THE SQUARE TO INT TO CHECK IF IT'S COMPLETE SQUARE OR NOT

	for (uint32 i = 1U; i <= Bulbs; i++)
	{
		Sqr = sqrt(i);

		if ((Sqr * Sqr) == i)   //Sqr will only have the int bit of the square root and if it's not complete will be false 
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

