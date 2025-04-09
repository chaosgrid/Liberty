#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b98b0);
CLANG_FORWARD_PROC_SYMBOL(public_4bcfc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4b9890, internal_4b9890, public_4b9890);
extern "C" NAKED register_t __cdecl internal_4b9890()
{
    __asm
    {
/*FIXUP push offset public_5cedc4 @0x4b9890*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cedc4
        mov ecx, offset public_6723c0
        call public_4bcfc0
/*FIXUP push offset _public_4b98b0 @0x4b989f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4b98b0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4b9890)
    }
}
