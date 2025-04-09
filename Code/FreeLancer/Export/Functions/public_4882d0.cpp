#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4882f0);
CLANG_FORWARD_PROC_SYMBOL(public_488db0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4882d0, internal_4882d0, public_4882d0);
extern "C" NAKED register_t __cdecl internal_4882d0()
{
    __asm
    {
/*FIXUP push offset public_5d2260 @0x4882d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2260
        mov ecx, offset public_671ee8
        call public_488db0
/*FIXUP push offset _public_4882f0 @0x4882df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4882f0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4882d0)
    }
}
