#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_599240);
CLANG_FORWARD_PROC_SYMBOL(public_599250);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x599220, internal_599220, public_599220);
extern "C" NAKED register_t __cdecl internal_599220()
{
    __asm
    {
/*FIXUP push offset public_5e5438 @0x599220*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5438
        mov ecx, offset public_67da00
        call public_599250
/*FIXUP push offset _public_599240 @0x59922f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_599240
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x599220)
    }
}
