#include "Content-PCH.h"

PROC_DECLARE(0x6f28f80, internal_6f28f80, public_6f28f80);
extern "C" NAKED register_t __cdecl internal_6f28f80()
{
    __asm
    {
/*FIXUP push offset public_6fb36f0 @0x6f28f80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36f0
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0810], eax
        ret 
        UNREACHABLE_TRAP(0x6f28f80)
    }
}
