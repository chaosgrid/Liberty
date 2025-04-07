#include "Content-PCH.h"

PROC_DECLARE(0x6f6feb0, internal_6f6feb0, public_6f6feb0);
extern "C" NAKED register_t __cdecl internal_6f6feb0()
{
    __asm
    {
/*FIXUP push offset public_6fb3758 @0x6f6feb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3758
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd39f0], eax
        ret 
        UNREACHABLE_TRAP(0x6f6feb0)
    }
}
