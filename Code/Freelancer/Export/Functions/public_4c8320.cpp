#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8340);
CLANG_FORWARD_PROC_SYMBOL(public_4c8ca0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4c8320, internal_4c8320, public_4c8320);
extern "C" NAKED register_t __cdecl internal_4c8320()
{
    __asm
    {
/*FIXUP push offset public_5d6e38 @0x4c8320*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6e38
        mov ecx, offset public_6733b0
        call public_4c8ca0
/*FIXUP push offset _public_4c8340 @0x4c832f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4c8340
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4c8320)
    }
}
