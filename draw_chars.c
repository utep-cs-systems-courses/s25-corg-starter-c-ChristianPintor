#include "draw.h"   /* for font */
#include "stdio.h"  /* for putchar */

void print_char_8x12(char c)  // Renamed function for clarity
{
  c -= 0x20;
  for (char row = 0; row < 12; row++) {  // Adjusted for 12 rows
    for (char col = 0; col < 8; col++) { // Adjusted for 8 columns
      unsigned short rowBits = font_8x12[c][row]; // Use `font_8x12`
      unsigned short colMask = 1 << (7 - col);    // Adjust bit masking
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}
