#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4be2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4be3b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4be280, internal_4be280, public_4be280);
extern "C" NAKED register_t __cdecl internal_4be280()
{
    __asm
    {
/*FIXUP push offset public_5d4dbc @0x4be280*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4dbc
        mov ecx, offset public_672410
        call public_4be3b0
/*FIXUP push offset _public_4be2a0 @0x4be28f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4be2a0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4be280)
    }
}
