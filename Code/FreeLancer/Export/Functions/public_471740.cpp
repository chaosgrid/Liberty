#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_471760);
CLANG_FORWARD_PROC_SYMBOL(public_471fb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x471740, internal_471740, public_471740);
extern "C" NAKED register_t __cdecl internal_471740()
{
    __asm
    {
/*FIXUP push offset public_5d033c @0x471740*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d033c
        mov ecx, offset public_66db08
        call public_471fb0
/*FIXUP push offset _public_471760 @0x47174f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_471760
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x471740)
    }
}
