#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_595360);
CLANG_FORWARD_PROC_SYMBOL(public_5953f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5953d0, internal_5953d0, public_5953d0);
extern "C" NAKED register_t __cdecl internal_5953d0()
{
    __asm
    {
        mov ecx, offset public_67d9c8
        call public_595360
/*FIXUP push offset _public_5953f0 @0x5953da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5953f0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5953d0)
    }
}
