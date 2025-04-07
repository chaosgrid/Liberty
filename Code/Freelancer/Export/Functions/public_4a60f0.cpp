#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a6110);
CLANG_FORWARD_PROC_SYMBOL(public_4a6960);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4a60f0, internal_4a60f0, public_4a60f0);
extern "C" NAKED register_t __cdecl internal_4a60f0()
{
    __asm
    {
/*FIXUP push offset public_5ce080 @0x4a60f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce080
        mov ecx, offset public_672108
        call public_4a6960
/*FIXUP push offset _public_4a6110 @0x4a60ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4a6110
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4a60f0)
    }
}
