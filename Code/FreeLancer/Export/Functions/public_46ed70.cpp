#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ed90);
CLANG_FORWARD_PROC_SYMBOL(public_470720);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x46ed70, internal_46ed70, public_46ed70);
extern "C" NAKED register_t __cdecl internal_46ed70()
{
    __asm
    {
/*FIXUP push offset public_5d0094 @0x46ed70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0094
        mov ecx, offset public_66dacc
        call public_470720
/*FIXUP push offset _public_46ed90 @0x46ed7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_46ed90
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x46ed70)
    }
}
