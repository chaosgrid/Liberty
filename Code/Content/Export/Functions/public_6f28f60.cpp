#include "Content-PCH.h"

PROC_DECLARE(0x6f28f60, internal_6f28f60, public_6f28f60);
extern "C" NAKED register_t __cdecl internal_6f28f60()
{
    __asm
    {
/*FIXUP push offset public_6fb36ec @0x6f28f60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36ec
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0814], eax
        ret 
        UNREACHABLE_TRAP(0x6f28f60)
    }
}
