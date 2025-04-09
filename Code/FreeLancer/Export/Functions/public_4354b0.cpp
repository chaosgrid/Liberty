#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4349f0);
CLANG_FORWARD_PROC_SYMBOL(public_4354d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4354b0, internal_4354b0, public_4354b0);
extern "C" NAKED register_t __cdecl internal_4354b0()
{
    __asm
    {
        mov ecx, offset public_668660
        call public_4349f0
/*FIXUP push offset _public_4354d0 @0x4354ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4354d0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4354b0)
    }
}
