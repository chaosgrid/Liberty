#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef04f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef0500);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6ef04d0, internal_6ef04d0, public_6ef04d0);
extern "C" NAKED register_t __cdecl internal_6ef04d0()
{
    __asm
    {
        mov ecx, offset public_6fcf1f8
        call public_6ef0500
/*FIXUP push offset _public_6ef04f0 @0x6ef04da*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ef04f0
        call public_6fa9162
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef04d0)
    }
}
