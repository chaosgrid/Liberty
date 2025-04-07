#include "Content-PCH.h"

PROC_DECLARE(0x6ed5a70, internal_6ed5a70, public_6ed5a70);
extern "C" NAKED register_t __cdecl internal_6ed5a70()
{
    __asm
    {
/*FIXUP push offset public_6fb36ec @0x6ed5a70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36ec
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf1a8], eax
        ret 
        UNREACHABLE_TRAP(0x6ed5a70)
    }
}
