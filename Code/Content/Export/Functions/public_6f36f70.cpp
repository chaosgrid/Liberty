#include "Content-PCH.h"

PROC_DECLARE(0x6f36f70, internal_6f36f70, public_6f36f70);
extern "C" NAKED register_t __cdecl internal_6f36f70()
{
    __asm
    {
/*FIXUP push offset public_6fb370c @0x6f36f70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb370c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0938], eax
        ret 
        UNREACHABLE_TRAP(0x6f36f70)
    }
}
