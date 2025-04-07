#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d50b10);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6d460c0, internal_6d460c0, public_6d460c0);
extern "C" NAKED register_t __cdecl internal_6d460c0()
{
    __asm
    {
        mov ecx, offset public_6d90260
        call public_6d50b10
/*FIXUP push offset _public_6d460e0 @0x6d460ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d460e0
        call public_6d6013e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d460c0)
    }
}
