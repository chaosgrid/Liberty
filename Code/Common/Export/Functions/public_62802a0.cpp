#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_62802c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62802a0, internal_62802a0, public_62802a0);
extern "C" NAKED register_t __cdecl internal_62802a0()
{
    __asm
    {
        mov ecx, offset public_63fc02c
        call public_627f9b0
/*FIXUP push offset _public_62802c0 @0x62802aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62802c0
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62802a0)
    }
}
