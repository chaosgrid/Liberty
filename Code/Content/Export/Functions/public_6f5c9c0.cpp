#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5c9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ca00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f5c9c0, internal_6f5c9c0, public_6f5c9c0);
extern "C" NAKED register_t __cdecl internal_6f5c9c0()
{
    __asm
    {
        mov ecx, offset public_6fd1bf0
        call public_6f5ca00
/*FIXUP push offset _public_6f5c9e0 @0x6f5c9ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f5c9e0
        call public_6fa9162
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f5c9c0)
    }
}
