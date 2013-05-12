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

#include "cthulhu.h"

int main(int argc, char* argv[]) {
  char* c = calloc(256,sizeof(char));
  c = " ";
  do {
    printf(c);
    scanf("%s",c);
  } while (strcmp(c,"exit\0")==0);
  free(c);
  return 0;
}
