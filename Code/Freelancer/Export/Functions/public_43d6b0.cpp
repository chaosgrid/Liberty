#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d6d0);
CLANG_FORWARD_PROC_SYMBOL(public_4429a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x43d6b0, internal_43d6b0, public_43d6b0);
extern "C" NAKED register_t __cdecl internal_43d6b0()
{
    __asm
    {
/*FIXUP push offset public_5cb548 @0x43d6b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb548
        mov ecx, offset public_6687b4
        call public_4429a0
/*FIXUP push offset _public_43d6d0 @0x43d6bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_43d6d0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x43d6b0)
    }
}
