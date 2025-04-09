#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b9910);
CLANG_FORWARD_PROC_SYMBOL(public_4bd250);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4b98f0, internal_4b98f0, public_4b98f0);
extern "C" NAKED register_t __cdecl internal_4b98f0()
{
    __asm
    {
/*FIXUP push offset public_5d5a14 @0x4b98f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5a14
        mov ecx, offset public_672368
        call public_4bd250
/*FIXUP push offset _public_4b9910 @0x4b98ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4b9910
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4b98f0)
    }
}
