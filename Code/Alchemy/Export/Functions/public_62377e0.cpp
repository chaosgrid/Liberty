#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6237800);
CLANG_FORWARD_PROC_SYMBOL(public_623e890);
CLANG_FORWARD_PROC_SYMBOL(public_6246176);

PROC_DECLARE(0x62377e0, internal_62377e0, public_62377e0);
extern "C" NAKED register_t __cdecl internal_62377e0()
{
    __asm
    {
        mov ecx, offset public_6257b68
        call public_623e890
/*FIXUP push offset _public_6237800 @0x62377ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6237800
        call public_6246176
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62377e0)
    }
}
