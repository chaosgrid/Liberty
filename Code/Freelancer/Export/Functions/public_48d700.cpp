#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48d720);
CLANG_FORWARD_PROC_SYMBOL(public_4a2dd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x48d700, internal_48d700, public_48d700);
extern "C" NAKED register_t __cdecl internal_48d700()
{
    __asm
    {
/*FIXUP push offset public_5cb130 @0x48d700*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb130
        mov ecx, offset public_672058
        call public_4a2dd0
/*FIXUP push offset _public_48d720 @0x48d70f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_48d720
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x48d700)
    }
}
