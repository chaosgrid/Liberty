#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a6af0);
CLANG_FORWARD_PROC_SYMBOL(public_4a76b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4a6ad0, internal_4a6ad0, public_4a6ad0);
extern "C" NAKED register_t __cdecl internal_4a6ad0()
{
    __asm
    {
/*FIXUP push offset public_5d04d4 @0x4a6ad0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d04d4
        mov ecx, offset public_672144
        call public_4a76b0
/*FIXUP push offset _public_4a6af0 @0x4a6adf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4a6af0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4a6ad0)
    }
}
