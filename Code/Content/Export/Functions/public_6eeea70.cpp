#include "Content-PCH.h"

PROC_DECLARE(0x6eeea70, internal_6eeea70, public_6eeea70);
extern "C" NAKED register_t __cdecl internal_6eeea70()
{
    __asm
    {
/*FIXUP push offset public_6fb3700 @0x6eeea70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3700
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf1ec], eax
        ret 
        UNREACHABLE_TRAP(0x6eeea70)
    }
}
