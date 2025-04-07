#include "Content-PCH.h"

PROC_DECLARE(0x6ea5700, internal_6ea5700, public_6ea5700);
extern "C" NAKED register_t __cdecl internal_6ea5700()
{
    __asm
    {
/*FIXUP push offset public_6fb3700 @0x6ea5700*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3700
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fced18], eax
        ret 
        UNREACHABLE_TRAP(0x6ea5700)
    }
}
