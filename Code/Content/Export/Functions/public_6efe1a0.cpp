#include "Content-PCH.h"

PROC_DECLARE(0x6efe1a0, internal_6efe1a0, public_6efe1a0);
extern "C" NAKED register_t __cdecl internal_6efe1a0()
{
    __asm
    {
/*FIXUP push offset public_6fb3724 @0x6efe1a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3724
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf3d0], eax
        ret 
        UNREACHABLE_TRAP(0x6efe1a0)
    }
}
