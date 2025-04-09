#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d62c0);
CLANG_FORWARD_PROC_SYMBOL(public_4d7450);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4d62a0, internal_4d62a0, public_4d62a0);
extern "C" NAKED register_t __cdecl internal_4d62a0()
{
    __asm
    {
/*FIXUP push offset public_5d8014 @0x4d62a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8014
        mov ecx, offset public_6749d4
        call public_4d7450
/*FIXUP push offset _public_4d62c0 @0x4d62af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4d62c0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4d62a0)
    }
}
