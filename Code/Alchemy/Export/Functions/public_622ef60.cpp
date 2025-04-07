#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ef80);
CLANG_FORWARD_PROC_SYMBOL(public_623e890);
CLANG_FORWARD_PROC_SYMBOL(public_6246176);

PROC_DECLARE(0x622ef60, internal_622ef60, public_622ef60);
extern "C" NAKED register_t __cdecl internal_622ef60()
{
    __asm
    {
        mov ecx, offset public_6257ac4
        call public_623e890
/*FIXUP push offset _public_622ef80 @0x622ef6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_622ef80
        call public_6246176
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x622ef60)
    }
}
