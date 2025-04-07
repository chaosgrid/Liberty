#include "Content-PCH.h"

PROC_DECLARE(0x6ea5720, internal_6ea5720, public_6ea5720);
extern "C" NAKED register_t __cdecl internal_6ea5720()
{
    __asm
    {
/*FIXUP push offset public_6fb370c @0x6ea5720*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb370c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fced14], eax
        ret 
        UNREACHABLE_TRAP(0x6ea5720)
    }
}
