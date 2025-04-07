#include "Content-PCH.h"

PROC_DECLARE(0x6fa7780, internal_6fa7780, public_6fa7780);
extern "C" NAKED register_t __cdecl internal_6fa7780()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6fa7780*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3da4], eax
        ret 
        UNREACHABLE_TRAP(0x6fa7780)
    }
}
