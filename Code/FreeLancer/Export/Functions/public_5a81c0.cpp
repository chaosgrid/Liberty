#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a81e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a8be0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5a81c0, internal_5a81c0, public_5a81c0);
extern "C" NAKED register_t __cdecl internal_5a81c0()
{
    __asm
    {
        mov ecx, offset public_67e7b8
        call public_5a8be0
/*FIXUP push offset _public_5a81e0 @0x5a81ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5a81e0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5a81c0)
    }
}
