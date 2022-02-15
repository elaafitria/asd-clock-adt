#include "clock.h"
using namespace std;

int main()
{
   clock c1 = MakeClock(13, 45, 8);
   clock c2 = MakeClock(9, 0, 0);
   clock sisa = MakeClock(10, 42, 05);

   PrintClock(c1);
   PrintClock(c2);

   sisa = AddClock(c1, c2);
   PrintClock(sisa);

   return 0;
}
