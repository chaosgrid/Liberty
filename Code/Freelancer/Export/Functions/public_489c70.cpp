#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489c90);
CLANG_FORWARD_PROC_SYMBOL(public_489cc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x489c70, internal_489c70, public_489c70);
extern "C" NAKED register_t __cdecl internal_489c70()
{
    __asm
    {
        mov ecx, offset public_671f50
        call public_489c90
/*FIXUP push offset _public_489cc0 @0x489c7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_489cc0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x489c70)
    }
}
