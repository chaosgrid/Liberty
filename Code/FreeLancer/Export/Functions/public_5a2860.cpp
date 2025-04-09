#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a2880);
CLANG_FORWARD_PROC_SYMBOL(public_5a4da0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5a2860, internal_5a2860, public_5a2860);
extern "C" NAKED register_t __cdecl internal_5a2860()
{
    __asm
    {
/*FIXUP push offset public_5e5f3c @0x5a2860*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5f3c
        mov ecx, offset public_67dde4
        call public_5a4da0
/*FIXUP push offset _public_5a2880 @0x5a286f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5a2880
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5a2860)
    }
}
