#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348790);
CLANG_FORWARD_PROC_SYMBOL(public_63487a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x6348790, internal_6348790, public_6348790);
/* CHUNK of public_6348760 */
extern "C" NAKED register_t __cdecl internal_6348790()
{
    __asm
    {
/*FIXUP push offset _public_63487a0 @0x6348790*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_63487a0
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6348790)
    }
}
