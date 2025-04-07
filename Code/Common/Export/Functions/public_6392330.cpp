#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);
CLANG_FORWARD_PROC_SYMBOL(public_6392330);
CLANG_FORWARD_PROC_SYMBOL(public_6392340);

PROC_DECLARE(0x6392330, internal_6392330, public_6392330);
/* CHUNK of public_6392310 */
extern "C" NAKED register_t __cdecl internal_6392330()
{
    __asm
    {
/*FIXUP push offset _public_6392340 @0x6392330*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6392340
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6392330)
    }
}
