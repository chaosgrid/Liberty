#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46a480);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

PROC_DECLARE(0x46a480, internal_46a480, public_46a480);
extern "C" NAKED register_t __cdecl internal_46a480()
{
    __asm
    {
/*FIXUP push offset public_5cf04c @0x46a480*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cf04c
        call public_59da10
        add esp, 4
        neg eax
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x46a480)
    }
}
