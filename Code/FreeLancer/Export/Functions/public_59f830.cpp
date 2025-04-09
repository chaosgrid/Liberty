#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59f850);
CLANG_FORWARD_PROC_SYMBOL(public_5a19b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x59f830, internal_59f830, public_59f830);
extern "C" NAKED register_t __cdecl internal_59f830()
{
    __asm
    {
/*FIXUP push offset public_5e251c @0x59f830*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e251c
        mov ecx, offset public_67dd14
        call public_5a19b0
/*FIXUP push offset _public_59f850 @0x59f83f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59f850
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x59f830)
    }
}
