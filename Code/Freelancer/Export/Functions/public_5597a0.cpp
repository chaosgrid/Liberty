#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5597c0);
CLANG_FORWARD_PROC_SYMBOL(public_55d240);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5597a0, internal_5597a0, public_5597a0);
extern "C" NAKED register_t __cdecl internal_5597a0()
{
    __asm
    {
/*FIXUP push offset public_5d7510 @0x5597a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7510
        mov ecx, offset public_679aac
        call public_55d240
/*FIXUP push offset _public_5597c0 @0x5597af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5597c0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5597a0)
    }
}
