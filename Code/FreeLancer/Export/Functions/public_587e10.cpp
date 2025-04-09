#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_587e30);
CLANG_FORWARD_PROC_SYMBOL(public_5899b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x587e10, internal_587e10, public_587e10);
extern "C" NAKED register_t __cdecl internal_587e10()
{
    __asm
    {
/*FIXUP push offset public_5cb118 @0x587e10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb118
        mov ecx, offset public_67c504
        call public_5899b0
/*FIXUP push offset _public_587e30 @0x587e1f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_587e30
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x587e10)
    }
}
