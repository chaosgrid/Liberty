#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59c320);
CLANG_FORWARD_PROC_SYMBOL(public_59cb60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x59c300, internal_59c300, public_59c300);
extern "C" NAKED register_t __cdecl internal_59c300()
{
    __asm
    {
/*FIXUP push offset public_5e5454 @0x59c300*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5454
        mov ecx, offset public_67da68
        call public_59cb60
/*FIXUP push offset _public_59c320 @0x59c30f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59c320
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x59c300)
    }
}
