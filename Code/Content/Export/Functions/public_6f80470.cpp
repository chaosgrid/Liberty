#include "Content-PCH.h"

PROC_DECLARE(0x6f80470, internal_6f80470, public_6f80470);
extern "C" NAKED register_t __cdecl internal_6f80470()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6f80470*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3ab8], eax
        ret 
        UNREACHABLE_TRAP(0x6f80470)
    }
}
