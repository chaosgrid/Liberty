#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4be690);
CLANG_FORWARD_PROC_SYMBOL(public_4c37a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4be670, internal_4be670, public_4be670);
extern "C" NAKED register_t __cdecl internal_4be670()
{
    __asm
    {
/*FIXUP push offset public_5d0228 @0x4be670*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0228
        mov ecx, offset public_67245c
        call public_4c37a0
/*FIXUP push offset _public_4be690 @0x4be67f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4be690
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4be670)
    }
}
