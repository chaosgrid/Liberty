#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a9290);
CLANG_FORWARD_PROC_SYMBOL(public_4b28e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4a9270, internal_4a9270, public_4a9270);
extern "C" NAKED register_t __cdecl internal_4a9270()
{
    __asm
    {
/*FIXUP push offset public_5d4764 @0x4a9270*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4764
        mov ecx, offset public_6721d0
        call public_4b28e0
/*FIXUP push offset _public_4a9290 @0x4a927f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4a9290
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4a9270)
    }
}
