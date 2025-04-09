#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_589b10);
CLANG_FORWARD_PROC_SYMBOL(public_58c0b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x589af0, internal_589af0, public_589af0);
extern "C" NAKED register_t __cdecl internal_589af0()
{
    __asm
    {
/*FIXUP push offset public_5d73fc @0x589af0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d73fc
        mov ecx, offset public_67d88c
        call public_58c0b0
/*FIXUP push offset _public_589b10 @0x589aff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_589b10
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x589af0)
    }
}
