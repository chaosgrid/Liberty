#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5726c0);
CLANG_FORWARD_PROC_SYMBOL(public_573570);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5726a0, internal_5726a0, public_5726a0);
extern "C" NAKED register_t __cdecl internal_5726a0()
{
    __asm
    {
        mov ecx, offset public_67aa10
        call public_5726c0
/*FIXUP push offset _public_573570 @0x5726aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_573570
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5726a0)
    }
}
