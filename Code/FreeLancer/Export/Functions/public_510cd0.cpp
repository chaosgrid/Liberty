#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd20);
CLANG_FORWARD_PROC_SYMBOL(public_510cf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x510cd0, internal_510cd0, public_510cd0);
extern "C" NAKED register_t __cdecl internal_510cd0()
{
    __asm
    {
        mov ecx, offset public_6750a0
        call public_41dd20
/*FIXUP push offset _public_510cf0 @0x510cda*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_510cf0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x510cd0)
    }
}
