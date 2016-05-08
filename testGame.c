#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "game.h"

#define DEFAULT_DISCIPLINES {STUDENT_BQN, STUDENT_MMONEY, STUDENT_MJ, \
                STUDENT_MMONEY, STUDENT_MJ, STUDENT_BPS, STUDENT_MTV, \
                STUDENT_MTV, STUDENT_BPS,STUDENT_MTV, STUDENT_BQN, \
                STUDENT_MJ, STUDENT_BQN, STUDENT_THD, STUDENT_MJ, \
                STUDENT_MMONEY, STUDENT_MTV, STUDENT_BQN, STUDENT_BPS}
#define DEFAULT_DICE {9,10,8,12,6,5,3,11,3,11,4,6,4,7,9,2,8,10,5}



int main(int argc, char *argv[]) {

   // Create a New Game
   int disciplines[] = DEFAULT_DISCIPLINES;
   int dice[] = DEFAULT_DICE;

   printf("Testing initial state of game\n");

   printf("Testing if newGame is created\n");
   Game g = newGame(disciplines, dice);
   assert(g != NULL);
   printf("Test passed\n");

   // printf("Testing makeAction == NULL\n")
   // assert(makeAction(g) == NULL);
   // printf("Test passed\n");

   //printf("Testing throwDice != NULL");
   //assert(throwDice(g, 4) != );
   //printf("Test passed\n");

   // what type of students are produced by the specified region?
   // regionID is the index of the region in the newGame arrays (above)
   // see discipline codes above
   printf("Testing getDiscipline at regionID of 0 as STUDENT_BQN\n");
   assert(getDiscipline(g, 0) == STUDENT_BQN);
   printf("Test passed\n");

   printf("Testing getDiceValue of 9 as STUDENT_BQN and STUDENT_MJ");
   assert(getDiceValue(g, 0) == 9);
   printf("Test passed\n");

   printf("Testing getMostARCs == NO_ONE");
   assert(getMostARCs(g) == NO_ONE);
   printf("Test passed\n");

   printf("Testing getMostPublications == NO_ONE\n");
   assert(getMostPublications(g) == NO_ONE);
   printf("Test passed\n");

   printf("Testing getTurnNumber == -1\n");
   assert(getTurnNumber(g) == -1);
   printf("Test passed\n");

   printf("Testing getWhoseTurn == NO_ONE");
   assert(getWhoseTurn(g) == NO_ONE);
   printf("Test passed\n");

   printf("Testing getCampus CAMPUS_A\n");
   assert(getCampus(g, "LB") == CAMPUS_A);
   printf("Test passed\n");

   printf("Testing getCampus moving left once\n");
   assert(getCampus(g, "L") == VACANT_VERTEX);
   printf("Test passed\n");

   printf("Testing getARC moving left once\n");
   assert(getARC(g, "L") == VACANT_ARC);
   printf("Test passed\n");

   //assert(isLegalAction(g, a) )

   printf("Testing getARCs UNI_A == 0\n");
   assert(getARCs(g, UNI_A) == 0);
   printf("Test passed\n");

   printf("Testing getGO8s UNI_A == 0\n");
   assert(getGO8s(g, UNI_A) == 0);
   printf("Test passed\n");

   printf("Testing getCampuses UNI_A == 2\n");
   assert(getCampuses(g, UNI_A) == 2);
   printf("Test passed\n");

   printf("Testing getIPs UNI_A == 0\n");
   assert(getIPs(g, UNI_A) == 0);
   printf("Test passed\n");

   printf("Testing getPublications UNI_A == 0\n");
   assert(getPublications(g, UNI_A) == 0);
   printf("Test passed\n");

   printf("Testing getPublications UNI_A == 0\n");
   assert(getStudents(g, UNI_A, STUDENT_MJ) == 0);
   assert(getStudents(g, UNI_A, STUDENT_MTV) == 0);
   printf("Test passed\n");

   printf("Testing getExchangeRate UNI_A from MTV to MJ == 3\n");
   assert(getExchangeRate(g, UNI_A, STUDENT_MTV, STUDENT_MJ) == 3);
   printf("Test passed\n");

   return EXIT_SUCCESS;
}
