#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd20);
CLANG_FORWARD_PROC_SYMBOL(public_4f6f00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4f6ee0, internal_4f6ee0, public_4f6ee0);
extern "C" NAKED register_t __cdecl internal_4f6ee0()
{
    __asm
    {
        mov ecx, offset public_674f24
        call public_41dd20
/*FIXUP push offset _public_4f6f00 @0x4f6eea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4f6f00
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4f6ee0)
    }
}
