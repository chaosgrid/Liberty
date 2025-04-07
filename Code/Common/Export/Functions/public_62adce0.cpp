#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62add00);
CLANG_FORWARD_PROC_SYMBOL(public_62addb0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62adce0, internal_62adce0, public_62adce0);
extern "C" NAKED register_t __cdecl internal_62adce0()
{
    __asm
    {
        call public_62add00
/*FIXUP push offset _public_62addb0 @0x62adce5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62addb0
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62adce0)
    }
}
