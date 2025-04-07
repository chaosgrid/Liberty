#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631bf30);
CLANG_FORWARD_PROC_SYMBOL(public_631cbc0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x631cba0, internal_631cba0, public_631cba0);
extern "C" NAKED register_t __cdecl internal_631cba0()
{
    __asm
    {
        mov ecx, offset public_6401768
        call public_631bf30
/*FIXUP push offset _public_631cbc0 @0x631cbaa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_631cbc0
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x631cba0)
    }
}
