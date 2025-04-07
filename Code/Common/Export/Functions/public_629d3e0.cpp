#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

PROC_DECLARE(0x629d3e0, internal_629d3e0, public_629d3e0);
extern "C" NAKED register_t __cdecl internal_629d3e0()
{
    __asm
    {
/*FIXUP push offset public_639d7ec @0x629d3e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639d7ec
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [public_63fc208], eax
        ret 
        UNREACHABLE_TRAP(0x629d3e0)
    }
}
