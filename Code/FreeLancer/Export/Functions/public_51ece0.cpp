#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_51ece0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

PROC_DECLARE(0x51ece0, internal_51ece0, public_51ece0);
extern "C" NAKED register_t __cdecl internal_51ece0()
{
    __asm
    {
/*FIXUP push offset _public_4de730 @0x51ece0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4de730
        push 5
        push 0x10
/*FIXUP push offset public_6752f0 @0x51ece9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6752f0
        call public_5b7ec6
        ret 
        UNREACHABLE_TRAP(0x51ece0)
    }
}
