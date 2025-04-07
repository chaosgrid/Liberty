#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd20);
CLANG_FORWARD_PROC_SYMBOL(public_5598d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5598b0, internal_5598b0, public_5598b0);
extern "C" NAKED register_t __cdecl internal_5598b0()
{
    __asm
    {
        mov ecx, offset public_679a2c
        call public_41dd20
/*FIXUP push offset _public_5598d0 @0x5598ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5598d0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5598b0)
    }
}
