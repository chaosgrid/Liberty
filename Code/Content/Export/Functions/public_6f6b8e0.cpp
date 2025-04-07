#include "Content-PCH.h"

PROC_DECLARE(0x6f6b8e0, internal_6f6b8e0, public_6f6b8e0);
extern "C" NAKED register_t __cdecl internal_6f6b8e0()
{
    __asm
    {
/*FIXUP push offset public_6fb3724 @0x6f6b8e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3724
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd1cf4], eax
        ret 
        UNREACHABLE_TRAP(0x6f6b8e0)
    }
}
