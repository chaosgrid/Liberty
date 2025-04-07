#include "Content-PCH.h"

PROC_DECLARE(0x6fa7720, internal_6fa7720, public_6fa7720);
extern "C" NAKED register_t __cdecl internal_6fa7720()
{
    __asm
    {
/*FIXUP push offset public_6fb376c @0x6fa7720*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb376c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3db0], eax
        ret 
        UNREACHABLE_TRAP(0x6fa7720)
    }
}
