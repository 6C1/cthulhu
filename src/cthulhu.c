/*  This file is part of CTHULHU.                                       
                                                                        
    CTHULHU is free software: you can redistribute it and/or modify     
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or   
    (at your option) any later version.                                 
                                                                        
    CTHULHU is distributed in the hope that it will be useful,          
    but WITHOUT ANY WARRANTY; without even the implied warranty of      
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the       
    GNU General Public License for more details.                        
                                                                        
    You should have received a copy of the GNU General Public License   
    along with CTHULHU.  If not, see <http://www.gnu.org/licenses/>.    
*/

#include <stdlib.h>

#include "cthulhu.h"

int main(int argc, char* argv[]) {
  int argcheck = 0;
  switch (argc)
    {
    case 3:
      argcheck++;
    case 2:
      argcheck++;
      break;
    default:
      printf("Usage: cthulhu src.c OR cthulhu run un.cth\n");
    }
  if ( argcheck < 1 ) {
      return(EXIT_FAILURE);
  } else if (argcheck==1) {
    /*
     * COMPILE MODE
     */
    printf("COMPILE MODE\n");
  } else if (argcheck==2) {
    if (argv[1]!="run") {
      // 3 args but not run
      return(EXIT_FAILURE);
    } else {
      /*
       * RUN MODE
       */
      printf("RUN MODE\n");
    }


  }
  
  return(EXIT_SUCCESS);
}


