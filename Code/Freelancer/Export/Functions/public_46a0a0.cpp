#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46a0c0);
CLANG_FORWARD_PROC_SYMBOL(public_46a140);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x46a0a0, internal_46a0a0, public_46a0a0);
extern "C" NAKED register_t __cdecl internal_46a0a0()
{
    __asm
    {
        mov ecx, offset public_66d3f8
        call public_46a0c0
/*FIXUP push offset _public_46a140 @0x46a0aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_46a140
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x46a0a0)
    }
}
