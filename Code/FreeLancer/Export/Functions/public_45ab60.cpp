#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45ab80);
CLANG_FORWARD_PROC_SYMBOL(public_45b4c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x45ab60, internal_45ab60, public_45ab60);
extern "C" NAKED register_t __cdecl internal_45ab60()
{
    __asm
    {
/*FIXUP push offset public_5ce83c @0x45ab60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce83c
        mov ecx, offset public_66d35c
        call public_45b4c0
/*FIXUP push offset _public_45ab80 @0x45ab6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_45ab80
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x45ab60)
    }
}
