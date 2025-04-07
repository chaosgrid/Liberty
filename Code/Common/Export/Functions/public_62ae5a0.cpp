#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ae5c0);
CLANG_FORWARD_PROC_SYMBOL(public_62ae670);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62ae5a0, internal_62ae5a0, public_62ae5a0);
extern "C" NAKED register_t __cdecl internal_62ae5a0()
{
    __asm
    {
        call public_62ae5c0
/*FIXUP push offset _public_62ae670 @0x62ae5a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ae670
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ae5a0)
    }
}
