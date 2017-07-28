/* tain_now.c
** tain: TAI timestamp with nanosecond precision
** wcm, 2008.01.08 - 2009.07.27
** ===
*/

#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

#include "tain.h"

struct tain *
tain_now(struct tain *t)
{
  struct timespec now;

  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  t->sec = now.tv_sec;
  t->nsec = now.tv_nsec;
  return t;
}


/* EOF (tain_now.c) */
