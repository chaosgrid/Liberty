#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_45dce0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x45b6d0, internal_45b6d0, public_45b6d0);
extern "C" NAKED register_t __cdecl internal_45b6d0()
{
    __asm
    {
/*FIXUP push offset public_5ce820 @0x45b6d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce820
        mov ecx, offset public_66d39c
        call public_45dce0
/*FIXUP push offset _public_45b6f0 @0x45b6df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_45b6f0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x45b6d0)
    }
}
