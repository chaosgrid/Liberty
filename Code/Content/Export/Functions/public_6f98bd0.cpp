#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f98bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98c80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f98bd0, internal_6f98bd0, public_6f98bd0);
extern "C" NAKED register_t __cdecl internal_6f98bd0()
{
    __asm
    {
        mov ecx, offset public_6fd3cb8
        call public_6f98bf0
/*FIXUP push offset _public_6f98c80 @0x6f98bda*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f98c80
        call public_6fa9162
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f98bd0)
    }
}
