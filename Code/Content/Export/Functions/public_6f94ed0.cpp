#include "Content-PCH.h"

PROC_DECLARE(0x6f94ed0, internal_6f94ed0, public_6f94ed0);
extern "C" NAKED register_t __cdecl internal_6f94ed0()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6f94ed0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3c3c], eax
        ret 
        UNREACHABLE_TRAP(0x6f94ed0)
    }
}
