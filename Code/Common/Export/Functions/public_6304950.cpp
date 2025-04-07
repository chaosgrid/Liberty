#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

PROC_DECLARE(0x6304950, internal_6304950, public_6304950);
extern "C" NAKED register_t __cdecl internal_6304950()
{
    __asm
    {
/*FIXUP push offset public_63a2740 @0x6304950*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2740
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [public_63fce14], eax
        ret 
        UNREACHABLE_TRAP(0x6304950)
    }
}
