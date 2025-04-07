#include "Content-PCH.h"

PROC_DECLARE(0x6f6ff50, internal_6f6ff50, public_6f6ff50);
extern "C" NAKED register_t __cdecl internal_6f6ff50()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6f6ff50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd39dc], eax
        ret 
        UNREACHABLE_TRAP(0x6f6ff50)
    }
}
