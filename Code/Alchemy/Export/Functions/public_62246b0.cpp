#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62246d0);
CLANG_FORWARD_PROC_SYMBOL(public_623e890);
CLANG_FORWARD_PROC_SYMBOL(public_6246176);

PROC_DECLARE(0x62246b0, internal_62246b0, public_62246b0);
extern "C" NAKED register_t __cdecl internal_62246b0()
{
    __asm
    {
        mov ecx, offset public_6257a48
        call public_623e890
/*FIXUP push offset _public_62246d0 @0x62246ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62246d0
        call public_6246176
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62246b0)
    }
}
