#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627d3b0);
CLANG_FORWARD_PROC_SYMBOL(public_627d460);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x627d390, internal_627d390, public_627d390);
extern "C" NAKED register_t __cdecl internal_627d390()
{
    __asm
    {
        call public_627d3b0
/*FIXUP push offset _public_627d460 @0x627d395*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_627d460
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x627d390)
    }
}
