#include "Content-PCH.h"

PROC_DECLARE(0x6f6fef0, internal_6f6fef0, public_6f6fef0);
extern "C" NAKED register_t __cdecl internal_6f6fef0()
{
    __asm
    {
/*FIXUP push offset public_6fb376c @0x6f6fef0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb376c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd39e8], eax
        ret 
        UNREACHABLE_TRAP(0x6f6fef0)
    }
}
