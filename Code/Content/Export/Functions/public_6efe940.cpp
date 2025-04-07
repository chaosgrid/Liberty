#include "Content-PCH.h"

PROC_DECLARE(0x6efe940, internal_6efe940, public_6efe940);
extern "C" NAKED register_t __cdecl internal_6efe940()
{
    __asm
    {
/*FIXUP push offset public_6fb370c @0x6efe940*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb370c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf41c], eax
        ret 
        UNREACHABLE_TRAP(0x6efe940)
    }
}
