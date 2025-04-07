#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ae160);
CLANG_FORWARD_PROC_SYMBOL(public_62ae210);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62ae140, internal_62ae140, public_62ae140);
extern "C" NAKED register_t __cdecl internal_62ae140()
{
    __asm
    {
        call public_62ae160
/*FIXUP push offset _public_62ae210 @0x62ae145*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ae210
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ae140)
    }
}
