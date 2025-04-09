#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b23c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b2550);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5b23a0, internal_5b23a0, public_5b23a0);
extern "C" NAKED register_t __cdecl internal_5b23a0()
{
    __asm
    {
        mov ecx, offset public_67ea60
        call public_5b23c0
/*FIXUP push offset _public_5b2550 @0x5b23aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b2550
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5b23a0)
    }
}
