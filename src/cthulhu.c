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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include "cthulhu.h"

// Quick function for checking file extension of a filename.
char *extension (char *filename) {
  char *result = strrchr (filename, '.');
  if (result == NULL) result = "";
  return (result);
}

/*
 * MAIN PROCESS
 */
int main(int argc, char* argv[]) {
  int argcheck = 0;
  // Check number of arguments
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
    // No arguments?
    return(EXIT_FAILURE);
  } else if (argcheck==1 && strcmp(extension(argv[1]),".c")==0) {
    /*
     * COMPILE MODE -------------------------v
     */
    printf("Compile: %s\n",argv[1]);
    struct stat fs;
    if (stat(argv[1],&fs) == -1) {
      printf("stat");
      return(EXIT_FAILURE);
    }
    printf("%ll", (long long) fs.st_size);

    /*
     * END COMPILE MODE ---------------------^
     */

  } else if (argcheck==2) {
    if ( strcmp(argv[1],"run")!=0 || strcmp(extension(argv[2]),".cth")!=0 ) {
      // 3 args but not run
      printf("Usage: cthulhu src.c OR cthulhu run un.cth\n");
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


