#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

PROC_DECLARE(0x6304970, internal_6304970, public_6304970);
extern "C" NAKED register_t __cdecl internal_6304970()
{
    __asm
    {
/*FIXUP push offset public_63a274c @0x6304970*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a274c
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [public_63fce10], eax
        ret 
        UNREACHABLE_TRAP(0x6304970)
    }
}
