#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634cc40);
CLANG_FORWARD_PROC_SYMBOL(public_634cc50);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x634cc40, internal_634cc40, public_634cc40);
/* CHUNK of public_634cc20 */
extern "C" NAKED register_t __cdecl internal_634cc40()
{
    __asm
    {
/*FIXUP push offset _public_634cc50 @0x634cc40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_634cc50
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x634cc40)
    }
}
