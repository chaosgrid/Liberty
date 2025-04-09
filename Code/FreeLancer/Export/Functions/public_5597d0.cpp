#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5597f0);
CLANG_FORWARD_PROC_SYMBOL(public_55d350);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5597d0, internal_5597d0, public_5597d0);
extern "C" NAKED register_t __cdecl internal_5597d0()
{
    __asm
    {
/*FIXUP push offset public_5e14e0 @0x5597d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e14e0
        mov ecx, offset public_679a80
        call public_55d350
/*FIXUP push offset _public_5597f0 @0x5597df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5597f0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5597d0)
    }
}
