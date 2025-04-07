#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6362550);
CLANG_FORWARD_PROC_SYMBOL(public_6362560);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x6362550, internal_6362550, public_6362550);
/* CHUNK of public_6362350 */
extern "C" NAKED register_t __cdecl internal_6362550()
{
    __asm
    {
/*FIXUP push offset _public_6362560 @0x6362550*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6362560
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6362550)
    }
}
