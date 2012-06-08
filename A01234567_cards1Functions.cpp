/*
  Name: card1Functions.cpp
  Author: Carl Gregory
  Date: 05/06/12 13:24
  Description: 
  			   contains the function code for prototypes in cards1.h
  Functions:
  			setupRand();
			freshDeck( );
			displayDeck( );
			shuffleDeck( );
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>   // rand and srand
#include <ctime>     // For the time function

#include "A01234567_cards1.h"

using namespace std;

/*
  Name: setupRand()
  Author: Carl Gregory
  Date: 21/05/12 14:07
  Description:
        sets up pseudorandom number generator
  Parameters:
          none
  Calls:
          time( )
          srand( )
  Returns:
          none
  Changes:
          seed : unsigned
*/
void setupRand()
{
    // Set up pseusorandom numbers

    // Get the system time.
    unsigned seed = time(0);

    // Seed the random number generator with unsidned system time
    srand(seed);

} //

/*
  Name: freshDeck( )
  Author: Carl Gregory
  Date: 25/04/12 13:48
  Description:
          assigns all suit and number values to the card deck (4 parallel arrays)
  Parameters:
          spades : int []
          hearts : int []
          diamonds : int []
          clubs : int []
          size : int  dimension of the arrays
  Calls:
          none
  Returns:
          none
  Changes:
          spades : int []
          hearts : int []
          diamonds : int []
          clubs : int []
*/

void freshDeck(int spades[] , int hearts[] , int diamonds[] , int clubs[] , int size)
{
 	 int count;
 	 
 	 // just assign each element its own index
 	 for (count = 0; count < size; count++)
 	 {
	  	 spades[count] = count;
	  	 hearts[count] = count;
	  	 diamonds[count] = count;
	  	 clubs[count] = count;
	 }
 	 
} // void freshDeck( )

/*
  Name: displayDeck( )
  Author: Carl Gregory
  Date: 25/04/12 13:48
  Description:
          displays the full card deck (4 parallel arrays)
  Parameters:
          spades : int []
          hearts : int []
          diamonds : int []
          clubs : int []
          size : int  dimension of the arrays
  Calls:
          none
  Returns:
          none
  Changes:
          none
*/
void displayDeck(int spades[] , int hearts[] , int diamonds[] , int clubs[] , int size)
{
 	 int count;
 	 
 	 // display spades
 	 for (count = 0; count < size; ++count)
 	 {
	  	 switch (spades[count])
	  	 {
		  	 case 0:
			 	  cout << 'A';
			 	  break;
		  	 case 1:
			 	  cout << '2';
			 	  break;
		  	 case 2:
			 	  cout << '3';
			 	  break;
		  	 case 3:
			 	  cout << '4';
			 	  break;
		  	 case 4:
			 	  cout << '5';
			 	  break;
		  	 case 5:
			 	  cout << '6';
			 	  break;
		  	 case 6:
			 	  cout << '7';
			 	  break;
		  	 case 7:
			 	  cout << '8';
			 	  break;
		  	 case 8:
			 	  cout << '9';
			 	  break;
		  	 case 9:
			 	  cout << "10";
			 	  break;
		  	 case 10:
			 	  cout << 'J';
			 	  break;
		  	 case 11:
			 	  cout << 'Q';
			 	  break;
		  	 case 12:
			 	  cout << 'K';
			 	  break;
		  	 default:
			 	  cout << "??";
			 	  break;
 		 }; // switch (spades[count])
	  	 cout << 'S';
 		 cout << " ";
	 }
	 cout << endl;

 	 // display hearts
 	 for (count = 0; count < size; ++count)
 	 {
	  	 switch (hearts[count])
	  	 {
		  	 case 0:
			 	  cout << 'A';
			 	  break;
		  	 case 1:
			 	  cout << '2';
			 	  break;
		  	 case 2:
			 	  cout << '3';
			 	  break;
		  	 case 3:
			 	  cout << '4';
			 	  break;
		  	 case 4:
			 	  cout << '5';
			 	  break;
		  	 case 5:
			 	  cout << '6';
			 	  break;
		  	 case 6:
			 	  cout << '7';
			 	  break;
		  	 case 7:
			 	  cout << '8';
			 	  break;
		  	 case 8:
			 	  cout << '9';
			 	  break;
		  	 case 9:
			 	  cout << "10";
			 	  break;
		  	 case 10:
			 	  cout << 'J';
			 	  break;
		  	 case 11:
			 	  cout << 'Q';
			 	  break;
		  	 case 12:
			 	  cout << 'K';
			 	  break;
		  	 default:
			 	  cout << "??";
			 	  break;
 		 }; // switch (hearts[count])
	  	 cout << 'H';
 		 cout << " ";
	 }
	 cout << endl;

 	 // display diamonds
 	 for (count = 0; count < size; ++count)
 	 {
	  	 switch (diamonds[count])
	  	 {
		  	 case 0:
			 	  cout << 'A';
			 	  break;
		  	 case 1:
			 	  cout << '2';
			 	  break;
		  	 case 2:
			 	  cout << '3';
			 	  break;
		  	 case 3:
			 	  cout << '4';
			 	  break;
		  	 case 4:
			 	  cout << '5';
			 	  break;
		  	 case 5:
			 	  cout << '6';
			 	  break;
		  	 case 6:
			 	  cout << '7';
			 	  break;
		  	 case 7:
			 	  cout << '8';
			 	  break;
		  	 case 8:
			 	  cout << '9';
			 	  break;
		  	 case 9:
			 	  cout << "10";
			 	  break;
		  	 case 10:
			 	  cout << 'J';
			 	  break;
		  	 case 11:
			 	  cout << 'Q';
			 	  break;
		  	 case 12:
			 	  cout << 'K';
			 	  break;
		  	 default:
			 	  cout << "??";
			 	  break;
 		 }; // switch (diamonds[count])
	  	 cout << 'D';
 		 cout << " ";
	 }
	 cout << endl;

 	 // display clubs
 	 for (count = 0; count < size; ++count)
 	 {
	  	 switch (clubs[count])
	  	 {
		  	 case 0:
			 	  cout << 'A';
			 	  break;
		  	 case 1:
			 	  cout << '2';
			 	  break;
		  	 case 2:
			 	  cout << '3';
			 	  break;
		  	 case 3:
			 	  cout << '4';
			 	  break;
		  	 case 4:
			 	  cout << '5';
			 	  break;
		  	 case 5:
			 	  cout << '6';
			 	  break;
		  	 case 6:
			 	  cout << '7';
			 	  break;
		  	 case 7:
			 	  cout << '8';
			 	  break;
		  	 case 8:
			 	  cout << '9';
			 	  break;
		  	 case 9:
			 	  cout << "10";
			 	  break;
		  	 case 10:
			 	  cout << 'J';
			 	  break;
		  	 case 11:
			 	  cout << 'Q';
			 	  break;
		  	 case 12:
			 	  cout << 'K';
			 	  break;
		  	 default:
			 	  cout << "??";
			 	  break;
 		 }; // switch (clubs[count])
	  	 cout << 'C';
 		 cout << " ";
	 }
	 cout << endl;
} // void displayDeck( )

/*
  Name: shuffleDeck( )
  Author: Carl Gregory
  Date: 25/04/12 13:48
  Description:
          randomly swaps card values in random suits
          in the card deck (4 parallel arrays)
  Parameters:
          spades : int []
          hearts : int []
          diamonds : int []
          clubs : int []
          size : int  dimension of the arrays
  Calls:
          none
  Returns:
          none
  Changes:
          spades : int []
          hearts : int []
          diamonds : int []
          clubs : int []
  Algorithm:
		  for the chosen number of swaps:
			generate two random numbers (from and to) for the card value
			generate two random numbers (from and to) for the suit
			time-tested swap technique:
				set a temp value to (to suit)[ (to card) ]
				set (to   suit)[ (to   card) ] to
					(from suit)[ (from card) ]
				set (from suit)[ (from card) ] to the temp value
*/

void shuffleDeck(int spades[] , int hearts[] , int diamonds[] , int clubs[] , int size)
{
 	 const int NUM_SWAPS = size;
 	 
 	 int fromSuit, toSuit;
 	 int fromCard, toCard;
 	 int swap, temp;
 	 
 	 bool noProblem = true;
 	 
 	 /*
 	   I think there are actual statistics on such things as "after three normal
 	   shuffles the deck is effectively back to its starting point", none of
 	   which I really trust, but clearly the number of swaps makes a difference
 	   here.
 	   
 	   To allow a "fudge factor", I don't check for duplicates, that is, I allow
 	   a card to be swapped with itself.  This makes each shuffle involve a
 	   different number of cards each time.
 	   
 	   I have no idea whatsoever whether this makes any difference, or whether
 	   that difference is desirable or not.
 	 */
  	 noProblem = true;
 	 for (swap = 0; ( (swap < NUM_SWAPS) && noProblem ); ++swap)
 	 {
	  	 /*
		    We know it's 4 suits because there are four array parameters;
			couldn't be more general using a defined constant NUM_SUITS here
			because we would have to change the parameter list each time we
			change the value of the constant
			
			This wouldn't be the case with, say, a 2-D array --
			in that case we would HAVE to use something like NUM_SUITS instead
			of the literal 4
	  	 */
	  	 fromSuit = rand() % 4;
	  	 toSuit = rand() % 4;
	  	 fromCard = rand() % NUM_SUIT_CARDS;
	  	 toCard = rand() % NUM_SUIT_CARDS;
	  	 
		 /*
		  time-tested swap technique, but a bit awkward with separate arrays
				set a temp value to (to suit)[ (to card) ]
				set (to   suit)[ (to   card) ] to
					(from suit)[ (from card) ]
				set (from suit)[ (from card) ] to the temp value
		 */
	  	 switch (fromSuit)
	  	 {
		  	 case 0:		// from spades
				switch (toSuit)
				{
				 case 0:	// to spades
				 	  temp = spades[toCard];
				 	  temp = spades[toCard] = spades[fromCard];
				 	  spades[fromCard] = temp;
				 	  break;
				 case 1:	// to hearts
				 	  temp = hearts[toCard];
				 	  temp = hearts[toCard] = spades[fromCard];
				 	  spades[fromCard] = temp;
				 	  break;
				 case 2:	// to diamonds
				 	  temp = diamonds[toCard];
				 	  temp = diamonds[toCard] = spades[fromCard];
				 	  spades[fromCard] = temp;
				 	  break;
				 case 3:	// to clubs
				 	  temp = clubs[toCard];
				 	  temp = clubs[toCard] = spades[fromCard];
				 	  spades[fromCard] = temp;
				 	  break;
				 default:
				 	  noProblem = false;
				 	  break;
				}; // switch (toSuit) from spades
				break;
		  	 case 1:		// from to hearts
				switch (toSuit)
				{
				 case 0:	// to spades
				 	  temp = spades[toCard];
				 	  temp = spades[toCard] = hearts[fromCard];
				 	  hearts[fromCard] = temp;
				 	  break;
				 case 1:	// to hearts
				 	  temp = hearts[toCard];
				 	  temp = hearts[toCard] = hearts[fromCard];
				 	  hearts[fromCard] = temp;
				 	  break;
				 case 2:	// to diamonds
				 	  temp = diamonds[toCard];
				 	  temp = diamonds[toCard] = hearts[fromCard];
				 	  hearts[fromCard] = temp;
				 	  break;
				 case 3:	// to clubs
				 	  temp = clubs[toCard];
				 	  temp = clubs[toCard] = hearts[fromCard];
				 	  hearts[fromCard] = temp;
				 	  break;
				 default:
				 	  noProblem = false;
				 	  break;
				}; // switch (toSuit) from hearts
				break;
		  	 case 2:		// from diamonds
				switch (toSuit)
				{
				 case 0:	// to spades
				 	  temp = spades[toCard];
				 	  temp = spades[toCard] = diamonds[fromCard];
				 	  diamonds[fromCard] = temp;
				 	  break;
				 case 1:	// to hearts
				 	  temp = hearts[toCard];
				 	  temp = hearts[toCard] = diamonds[fromCard];
				 	  diamonds[fromCard] = temp;
				 	  break;
				 case 2:	// to diamonds
				 	  temp = diamonds[toCard];
				 	  temp = diamonds[toCard] = diamonds[fromCard];
				 	  diamonds[fromCard] = temp;
				 	  break;
				 case 3:	// to clubs
				 	  temp = clubs[toCard];
				 	  temp = clubs[toCard] = diamonds[fromCard];
				 	  diamonds[fromCard] = temp;
				 	  break;
				 default:
				 	  noProblem = false;
				 	  break;
				}; // switch (toSuit) from diamonds
				break;
		  	 case 3:		// from clubs
				switch (toSuit)
				{
				 case 0:	// to spades
				 	  temp = spades[toCard];
				 	  temp = spades[toCard] = clubs[fromCard];
				 	  clubs[fromCard] = temp;
				 	  break;
				 case 1:	// to hearts
				 	  temp = hearts[toCard];
				 	  temp = hearts[toCard] = clubs[fromCard];
				 	  clubs[fromCard] = temp;
				 	  break;
				 case 2:	// to diamonds
				 	  temp = diamonds[toCard];
				 	  temp = diamonds[toCard] = clubs[fromCard];
				 	  clubs[fromCard] = temp;
				 	  break;
				 case 3:	// to clubs
				 	  temp = clubs[toCard];
				 	  temp = clubs[toCard] = clubs[fromCard];
				 	  clubs[fromCard] = temp;
				 	  break;
				 default:
				 	  noProblem = false;
				 	  break;
				}; // switch (toSuit) from clubs
				break;
		  	 default:
			 	  noProblem = false;
			 	  break;
 		 }; // switch (fromSuit)
	  	 
	 } // for (swap = 0; swap < NUM_SWAPS; ++swap)
 	 
} // void shuffleDeck( )
