#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ae320);
CLANG_FORWARD_PROC_SYMBOL(public_62ae3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62ae300, internal_62ae300, public_62ae300);
extern "C" NAKED register_t __cdecl internal_62ae300()
{
    __asm
    {
        call public_62ae320
/*FIXUP push offset _public_62ae3d0 @0x62ae305*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ae3d0
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ae300)
    }
}
