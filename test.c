#include <stdio.h>
#include <stdlib.h>

u_int16_t end_swap_16(u_int8_t buffer[2]) {
  u_int16_t opposite_endianness = 0;

  /* Iterate through the bits and shift them */

  

  buffer[0] = 12;
  buffer[1] = 12;

  u_int8_t temp = buffer[0];
  buffer[0] = buffer[1];
  buffer[1] = temp;
  
  
  for (int i = 0; i < 2; i++) {
    buffer[i] = ((buffer[i] & 0xF0) >> 4)| ((buffer[i] & 0x0F) << 4);
    buffer[i] = ((buffer[i] & 0xCC) >> 2) | ((buffer[i] & 0x33) << 2);
    buffer[i] = ((buffer[i] & 0xAA) >> 1) | ((buffer[i] & 0x55) << 1);

  }
  
 
  
  
  

 
  //opposite_endianness = buffer[0] >> 1;
  //opposite_endianness = buffer[1] >> 1;

  //combine those 2 to make it a 16 bit number

  printf("%d", opposite_endianness);
  return opposite_endianness;

} /* end_swap_16() */
