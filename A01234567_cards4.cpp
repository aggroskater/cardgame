/**\file A01234567_cards4.cpp
 * \brief Contains main.cpp and performs the program loop.
 * It seeds the random number generator, gets a fresh deck,
 * displays it, shuffles it, and displays it again.

  Simulates dealing a deck of cards to four players;

  Author: Carl Gregory

  Date: 19/05/12 19:46

  Modified by: Preston Maness

  Date: 24/06/12 19:51

*/

/*
    Copyright 2012 Preston Maness.

    This file is part of CardGame.

    CardGame is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    CardGame is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with CardGame.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <iostream>
#include <string>
#include <cstdlib> /* You need this lib in order to use the EXIT_SUCCESS macro */

#include "A01234567_AcesUp.h"

using namespace std;

/**
 *
 * Not sure why we've got argc and *argv[] here, seeing as
 * the program takes no CLI arguments.
 *
 * \param argc Number of arguments passed to command on CLI
 * \param argv Contains the flag/option+value/argument parameter pairs
 *        like "-c 5 -d 2" or whatever.
 *
 * \return \c EXIT_SUCCESS in a perfect world. Some integer other than zero otherwise.
 */

int main(int argc, char *argv[])
{

    AcesUp game;
    game.intro();
    game.gameLoop();
	return EXIT_SUCCESS;

}
