#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_597a00);
CLANG_FORWARD_PROC_SYMBOL(public_597a40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5979e0, internal_5979e0, public_5979e0);
extern "C" NAKED register_t __cdecl internal_5979e0()
{
    __asm
    {
/*FIXUP push offset public_5e4668 @0x5979e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e4668
        mov ecx, offset public_67d99c
        call public_597a40
/*FIXUP push offset _public_597a00 @0x5979ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_597a00
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5979e0)
    }
}
