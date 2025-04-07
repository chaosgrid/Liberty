#include "Content-PCH.h"

PROC_DECLARE(0x6eef270, internal_6eef270, public_6eef270);
extern "C" NAKED register_t __cdecl internal_6eef270()
{
    __asm
    {
/*FIXUP push offset public_6fb373c @0x6eef270*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb373c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf230], eax
        ret 
        UNREACHABLE_TRAP(0x6eef270)
    }
}
