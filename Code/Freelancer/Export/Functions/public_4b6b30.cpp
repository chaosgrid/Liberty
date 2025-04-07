#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b6b50);
CLANG_FORWARD_PROC_SYMBOL(public_4b7200);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4b6b30, internal_4b6b30, public_4b6b30);
extern "C" NAKED register_t __cdecl internal_4b6b30()
{
    __asm
    {
/*FIXUP push offset public_5d021c @0x4b6b30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d021c
        mov ecx, offset public_672294
        call public_4b7200
/*FIXUP push offset _public_4b6b50 @0x4b6b3f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4b6b50
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4b6b30)
    }
}
