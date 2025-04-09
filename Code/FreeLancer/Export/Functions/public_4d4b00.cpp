#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d4b20);
CLANG_FORWARD_PROC_SYMBOL(public_4d5a80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4d4b00, internal_4d4b00, public_4d4b00);
extern "C" NAKED register_t __cdecl internal_4d4b00()
{
    __asm
    {
/*FIXUP push offset public_5d7c1c @0x4d4b00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7c1c
        mov ecx, offset public_674954
        call public_4d5a80
/*FIXUP push offset _public_4d4b20 @0x4d4b0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4d4b20
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4d4b00)
    }
}
