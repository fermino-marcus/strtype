#include "strtype.h"

#ifdef _FUNC
  int getstring(char *string, int lenght)
  {
    char character;
    int cont;

    /* scrolls to (length - 1),
     * because it is necessary to leave a space in the string
     * for the final digit
     */
    for(cont = 0; cont < (lenght - 1); cont++)
    {
        character = fgetc(stdin);//get char

        //Return the loop to 0, for get new char
        if((character == '\n') && (cont == 0))
        {
          cont--;//decrease cont
          continue; //jump to next loop
        }

        string[cont] = character;//storage character on the string

        //Verifies that the enter key has been pressed
        if(character == '\n')
        {
          //Insert the final digit
          string[cont] = '\0';
          //Return the string lenght
          return cont;
        }
    }
  }/*getstring*/
#endif
