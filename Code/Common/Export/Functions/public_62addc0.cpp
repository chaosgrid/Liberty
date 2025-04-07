#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62adde0);
CLANG_FORWARD_PROC_SYMBOL(public_62ade90);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62addc0, internal_62addc0, public_62addc0);
extern "C" NAKED register_t __cdecl internal_62addc0()
{
    __asm
    {
        call public_62adde0
/*FIXUP push offset _public_62ade90 @0x62addc5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ade90
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62addc0)
    }
}
