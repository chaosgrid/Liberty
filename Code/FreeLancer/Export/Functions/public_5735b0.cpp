#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5735d0);
CLANG_FORWARD_PROC_SYMBOL(public_573780);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5735b0, internal_5735b0, public_5735b0);
extern "C" NAKED register_t __cdecl internal_5735b0()
{
    __asm
    {
        mov ecx, offset public_67a7d0
        call public_5735d0
/*FIXUP push offset _public_573780 @0x5735ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_573780
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5735b0)
    }
}
