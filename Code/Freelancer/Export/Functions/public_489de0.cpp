#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430ab0);
CLANG_FORWARD_PROC_SYMBOL(public_489de0);

PROC_DECLARE(0x489de0, internal_489de0, public_489de0);
extern "C" NAKED register_t __cdecl internal_489de0()
{
    __asm
    {
/*FIXUP push offset public_5d24a8 @0x489de0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d24a8
        call dword ptr ds : [public_5c6020]
        push eax
        mov dword ptr ds : [public_671f5c], eax
        call public_430ab0
        add esp, 8
        mov dword ptr ds : [public_671f70], eax
        ret 
        UNREACHABLE_TRAP(0x489de0)
    }
}
