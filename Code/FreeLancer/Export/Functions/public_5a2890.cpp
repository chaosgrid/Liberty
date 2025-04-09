#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a28b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a4ed0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5a2890, internal_5a2890, public_5a2890);
extern "C" NAKED register_t __cdecl internal_5a2890()
{
    __asm
    {
/*FIXUP push offset public_5e5f64 @0x5a2890*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5f64
        mov ecx, offset public_67ddb8
        call public_5a4ed0
/*FIXUP push offset _public_5a28b0 @0x5a289f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5a28b0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5a2890)
    }
}
