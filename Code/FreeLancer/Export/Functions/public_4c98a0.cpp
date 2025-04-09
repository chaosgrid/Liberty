#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c98c0);
CLANG_FORWARD_PROC_SYMBOL(public_4c98f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4c98a0, internal_4c98a0, public_4c98a0);
extern "C" NAKED register_t __cdecl internal_4c98a0()
{
    __asm
    {
        mov ecx, offset public_6735b4
        call public_4c98c0
/*FIXUP push offset _public_4c98f0 @0x4c98aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4c98f0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4c98a0)
    }
}
