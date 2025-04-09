#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45e290);
CLANG_FORWARD_PROC_SYMBOL(public_46bd90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x45e270, internal_45e270, public_45e270);
extern "C" NAKED register_t __cdecl internal_45e270()
{
    __asm
    {
/*FIXUP push offset public_5cef64 @0x45e270*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cef64
        mov ecx, offset public_66d920
        call public_46bd90
/*FIXUP push offset _public_45e290 @0x45e27f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_45e290
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x45e270)
    }
}
