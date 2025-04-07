#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232360);
CLANG_FORWARD_PROC_SYMBOL(public_623e890);
CLANG_FORWARD_PROC_SYMBOL(public_6246176);

PROC_DECLARE(0x6232340, internal_6232340, public_6232340);
extern "C" NAKED register_t __cdecl internal_6232340()
{
    __asm
    {
        mov ecx, offset public_6257b14
        call public_623e890
/*FIXUP push offset _public_6232360 @0x623234a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6232360
        call public_6246176
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6232340)
    }
}
