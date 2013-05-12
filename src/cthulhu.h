
/*  This file is part of CTHULHU.                                     
 *                                                                      
 *  CTHULHU is free software: you can redistribute it and/or modify   
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  CTHULHU is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the     
 *  GNU General Public License for more details.                      
 *                                                                    
 *  You should have received a copy of the GNU General Public License 
 *  along with CTHULHU.  If not, see <http://www.gnu.org/licenses/>.  
 */

/*! \name cthulhu.h 
 *  \brief Structures, macros, constants, and inclusions for CTHULHU.
 *
 */
 

#ifndef _CTHULHU_H
#define _CTHULHU_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define INC(x) (x)++
#define MIN(x,y) (x < y) ? x : y
#define MAX(x,y) (x > y) ? x : y

typedef struct dstr {
  char* str;
  int n;
} dstr_t;

void dstr_init(dstr_t* d, char* s) {
  d->n = strlen(s) * 8;
  d->str = calloc(sizeof(char), d->n);
  strncpy(d->str,s, d->n * sizeof(char));
}

void dstr_append(dstr_t* d, char* s) {
  while (d->n - strlen(d->str) - 1 <= strlen(s)) {
    d->n *= 2;
    realloc(d->str,d->n);
  }
  strcat(d->str,s);
}

void dstr_free(dstr_t* d) {
  free(d->str);
}

#endif
