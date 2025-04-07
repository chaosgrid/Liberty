#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59c2c0);
CLANG_FORWARD_PROC_SYMBOL(public_59c8d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x59c2a0, internal_59c2a0, public_59c2a0);
extern "C" NAKED register_t __cdecl internal_59c2a0()
{
    __asm
    {
/*FIXUP push offset public_5e5488 @0x59c2a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5488
        mov ecx, offset public_67dac0
        call public_59c8d0
/*FIXUP push offset _public_59c2c0 @0x59c2af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59c2c0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x59c2a0)
    }
}
