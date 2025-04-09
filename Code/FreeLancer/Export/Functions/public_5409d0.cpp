#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5409f0);
CLANG_FORWARD_PROC_SYMBOL(public_59ec40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5409d0, internal_5409d0, public_5409d0);
extern "C" NAKED register_t __cdecl internal_5409d0()
{
    __asm
    {
        mov ecx, offset public_678ac0
        call public_59ec40
/*FIXUP push offset _public_5409f0 @0x5409da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5409f0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5409d0)
    }
}
