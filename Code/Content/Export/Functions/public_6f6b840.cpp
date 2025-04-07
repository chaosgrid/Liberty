#include "Content-PCH.h"

PROC_DECLARE(0x6f6b840, internal_6f6b840, public_6f6b840);
extern "C" NAKED register_t __cdecl internal_6f6b840()
{
    __asm
    {
/*FIXUP push offset public_6fb36ec @0x6f6b840*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36ec
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd1d08], eax
        ret 
        UNREACHABLE_TRAP(0x6f6b840)
    }
}
