/**
  * Polyspace example.
  *       Copyright 2012-2015 The MathWorks, Inc.
  */

#include "include.h"
#include "single_file_analysis.h"

/* Internal function         */
/* Needed for MISRA-rule 8.1 */
/* polyspace<MISRA-C3:D4.6:Medium:Fix> Add a types.h file, create typedefs and replace inbuilt types */
static int interpolation(void);
void main(void);


/* polyspace<MISRA-C3:D4.6:Medium:Fix> Add a types.h file, create typedefs and replace inbuilt types */
static int interpolation(void)
{
    /* polyspace<MISRA-C3:D4.6:Medium:Fix> Add a types.h file, create typedefs and replace inbuilt types */
    int i, item = 0;
    /* polyspace<MISRA-C3:D4.6:Medium:Fix> Add a types.h file, create typedefs and replace inbuilt types */
    int found = false;


    for (i = 0; i < MAX_SIZE; i++) {
        arr++;
        if ((found == false) && (*arr > 16)) {
            found = true;
            item = i;
        }
    }
    *arr = 20;
    return item;
}


void main(void)
{
    /* polyspace<MISRA-C3:D4.6:Medium:Fix> Add a types.h file, create typedefs and replace inbuilt types */
    int temp;
    PowerLevel = -10000;

    RTE();

    initialise_current_data();

    temp = read_on_bus();
    switch (temp) {
    case new_move:
        temp = interpolation();
        break;
    case previous_move: {
        volatile  s8 PORT_A;
        volatile  u8 PORT_B;
        generic_validation(PORT_A, PORT_B);
    }
    break;
    default:
        compute_new_coordonates();
        polynomia(55);
        polynomia(3);
        break;
    }
}
