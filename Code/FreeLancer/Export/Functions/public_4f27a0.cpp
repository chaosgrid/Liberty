#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f27c0);
CLANG_FORWARD_PROC_SYMBOL(public_4f2830);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4f27a0, internal_4f27a0, public_4f27a0);
extern "C" NAKED register_t __cdecl internal_4f27a0()
{
    __asm
    {
/*FIXUP push offset public_5d9538 @0x4f27a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9538
        mov ecx, offset public_674b20
        call public_4f2830
/*FIXUP push offset _public_4f27c0 @0x4f27af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4f27c0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4f27a0)
    }
}
