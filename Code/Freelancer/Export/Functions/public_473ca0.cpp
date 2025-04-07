#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_473ca0);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);

PROC_DECLARE(0x473ca0, internal_473ca0, public_473ca0);
extern "C" NAKED register_t __cdecl internal_473ca0()
{
    __asm
    {
/*FIXUP push offset public_5d0610 @0x473ca0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0610
        call public_59d9c0
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x473ca0)
    }
}
