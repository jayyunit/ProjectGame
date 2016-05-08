//name: Richard Guan, Grant Wei, Raihan Zhafranata
//date: 4/5/2016
//tests to make sure game is not broken

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Game.h"

int main () {

    printf("testing new game\n");;
    Game test = newGame();
    printf("passed");

    printf("testing makeAction");
    makeAction(test, a);
    int previousTurn = currentTurn;
    assert(a.actionCode != START_SPINOFF);
    if (a.actionCode == PASS) {
        assert (test.currentTurn == previousTurn + 1);
    }

    if (a.actionCode == BUILD_CAMPUS) {
        assert (getCampuses == 1); //need to check this
    }

    if (a.actionCode == BUILD_GO8) {
        assert (getGO8s == 1);
    }

    if (a.actionCode == OBTAIN_ARC) {
        assert (getARC == 1);
    }

    if (a.actionCode == OBTAIN_PUBLICATION) {
        assert (getPublications == 1);
    }

    if (a.actionCode == OBTAIN_IP_PATENT) {
        assert (getIPs == 1);
    }

    if (a.actionCode == RETRAIN_STUDENTS) {
        assert (a.disciplineFrom == ); //need to add number
        assert (a.disciplineTo == ); //need to add number
    }

    printf("Test passed for makeAction");

    printf("Testing throwDice")
    assert (test.currentTurn == -1);
    throwDice(test, diceScore);
    assert (test.currentTurn == 0);
    printf("Test passed for throwDice");

    printf("Testing getDiscipline");
    assert(if(getDiscipline(test, 0) == STUDENT_BQN) == TRUE);
    printf("Test passed for getDiscipline")

    printf("Testing getDiceValue")
    getDiceValue(test, 0);
    assert (if(test.diceScore <= 12 && test.diceScore >= 2) == TRUE );
    printf("Test passed for getDiceValue")

    prinf("Testing getMostARCs")
    assert(getMostARCs(test) == NO_ONE);
    printf("Test passed for getMostARCs");

    prinf("Testing getMostPublications")
    assert(getMostPublications(test) == NO_ONE);
    printf("Test passed for getMostARCs");

    printf("Testing getTurnNumber");
    assert(getTurnNumber(test) == 0);
    printf("Test passed for getTurnNumber");



    return EXIT_SUCCESS;
}
