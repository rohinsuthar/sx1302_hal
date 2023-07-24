// beacon_frame_info.h

#ifndef BEACON_FRAME_INFO  // Include guards to prevent multiple inclusions
#define BEACON_FRAME_INFO

#include <stdint.h>  

typedef struct sbconfinfo{
uint32_t BEACON_GUARD = 3000000; /* Interval where no ping slot can be placed,
                                            to ensure beacon can be sent */
uint32_t BEACON_RESERVED = 2120000;/* Time on air of the beacon, with some margin */
}bconfinfo_t;


#endif // MY_HEADER_H
