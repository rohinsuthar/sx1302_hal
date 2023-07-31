// beacon_frame_info.h

#ifndef BEACON_FRAME_INFO  // Include guards to prevent multiple inclusions
#define BEACON_FRAME_INFO

#include <stdint.h>  

typedef struct sBconfinfo{
uint32_t BEACON_GUARD; /* Interval where no ping slot can be placed,
                                            to ensure beacon can be sent */
uint32_t BEACON_RESERVED;/* Time on air of the beacon, with some margin */
}Bconfinfo_t;


#endif // MY_HEADER_H
