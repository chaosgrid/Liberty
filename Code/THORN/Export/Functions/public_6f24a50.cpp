#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f24a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f57ece);

PROC_DECLARE(0x6f24a50, internal_6f24a50, public_6f24a50);
/* CHUNK of public_6f24a20 */
extern "C" NAKED register_t __cdecl internal_6f24a50()
{
    __asm
    {
/*FIXUP push offset _public_6f24a60 @0x6f24a50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f24a60
        call public_6f57ece
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f24a50)
    }
}
