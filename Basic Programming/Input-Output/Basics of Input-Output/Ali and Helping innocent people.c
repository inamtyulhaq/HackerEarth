// Question:
/*Arpasland has surrounded by attackers. A truck enters the city. The driver claims the load is food and medicine from Iranians.
Ali is one of the soldiers in Arpasland. He doubts about the truck, maybe it's from the siege.
He knows that a tag is valid if the sum of every two consecutive digits of it is even and its letter is not a vowel.
Determine if the tag of the truck is valid or not.
We consider the letters "A","E","I","O","U","Y" to be vowels for this problem.*/

// Explanation:
/*A string is given. I used a for loop simply. When i is 2, meaning we accessed the alphabet,
I checked whether it is equal to any given vowel alphabet. If it is, choice boolean variable was turned in
as FALSE. Regarding consecutive numbers, when i is at 0, 3, 4 and 7, if sum of i and i+1 is not even, "choice"
boolean variable is turned in as FALSE. CHOICE bool is default at true. So, if it remains true, I printed valid.*/

// Solution:
#include <stdio.h>
#include <stdbool.h>

int main()
{
	char st[9];
	bool choice = true;
    scanf("%s", st);
	for(int i = 0; i < 9; i++)
	{
		if(i == 0 || i == 3 || i == 4 || i == 7)
		{
			if((st[i] + st[i+1]) % 2 != 0)
            {
				choice = false;
				break;
			}
		}

		if(i == 2)
		{
			if (st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st[i] == 'O' 
		        				|| st[i] == 'U' || st[i] == 'Y')
			{
				choice = false;
                break;
			}
        }
            
	}

	if(choice == true)
	{
		printf("valid\n");
	}
	else
	{
		printf("invalid\n");
	}

	return 0;	
}
