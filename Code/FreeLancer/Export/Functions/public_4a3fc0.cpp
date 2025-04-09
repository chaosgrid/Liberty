#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a3fe0);
CLANG_FORWARD_PROC_SYMBOL(public_4a5fb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4a3fc0, internal_4a3fc0, public_4a3fc0);
extern "C" NAKED register_t __cdecl internal_4a3fc0()
{
    __asm
    {
/*FIXUP push offset public_5cb6b4 @0x4a3fc0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6b4
        mov ecx, offset public_6720cc
        call public_4a5fb0
/*FIXUP push offset _public_4a3fe0 @0x4a3fcf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4a3fe0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4a3fc0)
    }
}
