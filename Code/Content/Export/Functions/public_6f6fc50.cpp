#include "Content-PCH.h"

PROC_DECLARE(0x6f6fc50, internal_6f6fc50, public_6f6fc50);
extern "C" NAKED register_t __cdecl internal_6f6fc50()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6f6fc50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd1d14], eax
        ret 
        UNREACHABLE_TRAP(0x6f6fc50)
    }
}
