#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48a000);
CLANG_FORWARD_PROC_SYMBOL(public_48b150);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x489fe0, internal_489fe0, public_489fe0);
extern "C" NAKED register_t __cdecl internal_489fe0()
{
    __asm
    {
/*FIXUP push offset public_5d0234 @0x489fe0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0234
        mov ecx, offset public_671fb8
        call public_48b150
/*FIXUP push offset _public_48a000 @0x489fef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_48a000
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x489fe0)
    }
}
