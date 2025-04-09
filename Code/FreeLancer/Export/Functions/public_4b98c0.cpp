#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b98e0);
CLANG_FORWARD_PROC_SYMBOL(public_4bd100);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4b98c0, internal_4b98c0, public_4b98c0);
extern "C" NAKED register_t __cdecl internal_4b98c0()
{
    __asm
    {
/*FIXUP push offset public_5d59fc @0x4b98c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d59fc
        mov ecx, offset public_672394
        call public_4bd100
/*FIXUP push offset _public_4b98e0 @0x4b98cf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4b98e0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4b98c0)
    }
}
