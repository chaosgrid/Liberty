#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62adfa0);
CLANG_FORWARD_PROC_SYMBOL(public_62ae050);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62adf80, internal_62adf80, public_62adf80);
extern "C" NAKED register_t __cdecl internal_62adf80()
{
    __asm
    {
        call public_62adfa0
/*FIXUP push offset _public_62ae050 @0x62adf85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ae050
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62adf80)
    }
}
