#include "Content-PCH.h"

PROC_DECLARE(0x6f4eec0, internal_6f4eec0, public_6f4eec0);
extern "C" NAKED register_t __cdecl internal_6f4eec0()
{
    __asm
    {
/*FIXUP push offset public_6fb3764 @0x6f4eec0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3764
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0d00], eax
        ret 
        UNREACHABLE_TRAP(0x6f4eec0)
    }
}
