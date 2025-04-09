#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_469000);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x468fe0, internal_468fe0, public_468fe0);
extern "C" NAKED register_t __cdecl internal_468fe0()
{
    __asm
    {
        mov ecx, offset public_66d424
        call dword ptr ds : [public_5c62dc]
/*FIXUP push offset _public_469000 @0x468feb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_469000
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x468fe0)
    }
}
