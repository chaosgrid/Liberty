#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_46bf90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x45e2a0, internal_45e2a0, public_45e2a0);
extern "C" NAKED register_t __cdecl internal_45e2a0()
{
    __asm
    {
/*FIXUP push offset public_5ced90 @0x45e2a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced90
        mov ecx, offset public_66d8f4
        call public_46bf90
/*FIXUP push offset _public_45e2c0 @0x45e2af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_45e2c0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x45e2a0)
    }
}
