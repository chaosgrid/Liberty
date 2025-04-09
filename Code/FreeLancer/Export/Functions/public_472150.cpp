#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_472170);
CLANG_FORWARD_PROC_SYMBOL(public_474750);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x472150, internal_472150, public_472150);
extern "C" NAKED register_t __cdecl internal_472150()
{
    __asm
    {
/*FIXUP push offset public_5d052c @0x472150*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d052c
        mov ecx, offset public_66db9c
        call public_474750
/*FIXUP push offset _public_472170 @0x47215f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_472170
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x472150)
    }
}
