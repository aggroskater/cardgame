/**\file A01234567_AcesUp.h
 * \brief Contains the methods that describe the Aces Up game.
 * \author Preston Maness
 *
 */

/*
 * A01234567_AcesUp.h
 *
 *  Created on: Jul 5, 2012
 *      Author: preston
 */

#ifndef A01234567_ACESUP_H_
#define A01234567_ACESUP_H_

#include "A01234567_Card.h"
#include <vector>
#include <string>

using namespace std;

class AcesUp

{

private:

	vector< vector<Card> > stax;

public:

	AcesUp();
	virtual ~AcesUp();

	void gameLoop();

	void intro();
	void parseCommand(string);
	void deal();
	void remove(int);
	void move(int,int);
	void render();
	void stateTracker();

};

#endif /* A01234567_ACESUP_H_ */
