#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ae400);
CLANG_FORWARD_PROC_SYMBOL(public_62ae4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62ae3e0, internal_62ae3e0, public_62ae3e0);
extern "C" NAKED register_t __cdecl internal_62ae3e0()
{
    __asm
    {
        call public_62ae400
/*FIXUP push offset _public_62ae4b0 @0x62ae3e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ae4b0
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ae3e0)
    }
}
