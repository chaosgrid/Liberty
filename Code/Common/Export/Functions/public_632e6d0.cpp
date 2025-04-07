#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

PROC_DECLARE(0x632e6d0, internal_632e6d0, public_632e6d0);
extern "C" NAKED register_t __cdecl internal_632e6d0()
{
    __asm
    {
/*FIXUP push offset public_63a48b8 @0x632e6d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a48b8
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [public_640a70c], eax
        ret 
        UNREACHABLE_TRAP(0x632e6d0)
    }
}
