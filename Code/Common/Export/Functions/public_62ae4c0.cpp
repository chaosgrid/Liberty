#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ae4e0);
CLANG_FORWARD_PROC_SYMBOL(public_62ae590);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62ae4c0, internal_62ae4c0, public_62ae4c0);
extern "C" NAKED register_t __cdecl internal_62ae4c0()
{
    __asm
    {
        call public_62ae4e0
/*FIXUP push offset _public_62ae590 @0x62ae4c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ae590
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ae4c0)
    }
}
