#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_472140);
CLANG_FORWARD_PROC_SYMBOL(public_474600);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x472120, internal_472120, public_472120);
extern "C" NAKED register_t __cdecl internal_472120()
{
    __asm
    {
/*FIXUP push offset public_5d0518 @0x472120*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0518
        mov ecx, offset public_66dbc8
        call public_474600
/*FIXUP push offset _public_472140 @0x47212f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_472140
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x472120)
    }
}
