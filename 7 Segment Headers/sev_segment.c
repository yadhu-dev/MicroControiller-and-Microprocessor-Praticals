#include <reg51.h>
#include "sev_segment.h"

unsigned char seg[16] = {
											0x3F,
											0x06, 
											0x5B, 
											0x4F, 
											0x66, 
											0x6D, 
											0x7D, 
											0x07, 
											0x7F, 
											0x6F, 
											0x77,
											0x7C, 
											0x39, 
											0x5E, 
											0x79,
											0x71  
										};

unsigned char seg_display(unsigned char value){
	
				return seg[value];
	
}
