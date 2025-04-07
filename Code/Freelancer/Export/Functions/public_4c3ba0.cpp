#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c3bc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4c3ba0, internal_4c3ba0, public_4c3ba0);
extern "C" NAKED register_t __cdecl internal_4c3ba0()
{
    __asm
    {
        mov ecx, offset public_672960
        call dword ptr ds : [public_5c6454]
/*FIXUP push offset _public_4c3bc0 @0x4c3bab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4c3bc0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4c3ba0)
    }
}
