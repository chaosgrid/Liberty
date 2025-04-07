#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611090);
CLANG_FORWARD_PROC_SYMBOL(public_66110a0);
CLANG_FORWARD_PROC_SYMBOL(public_662820e);

PROC_DECLARE(0x6611090, internal_6611090, public_6611090);
/* CHUNK of public_6611000 */
extern "C" NAKED register_t __cdecl internal_6611090()
{
    __asm
    {
/*FIXUP push offset _public_66110a0 @0x6611090*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_66110a0
        call public_662820e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6611090)
    }
}
