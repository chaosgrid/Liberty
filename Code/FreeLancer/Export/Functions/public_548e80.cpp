#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c95b0);
CLANG_FORWARD_PROC_SYMBOL(public_548ea0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x548e80, internal_548e80, public_548e80);
extern "C" NAKED register_t __cdecl internal_548e80()
{
    __asm
    {
        push 0
        mov ecx, offset public_679744
        call public_4c95b0
/*FIXUP push offset _public_548ea0 @0x548e8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_548ea0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x548e80)
    }
}
