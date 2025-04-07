#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ae240);
CLANG_FORWARD_PROC_SYMBOL(public_62ae2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62ae220, internal_62ae220, public_62ae220);
extern "C" NAKED register_t __cdecl internal_62ae220()
{
    __asm
    {
        call public_62ae240
/*FIXUP push offset _public_62ae2f0 @0x62ae225*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ae2f0
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ae220)
    }
}
