#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6279fe0);
CLANG_FORWARD_PROC_SYMBOL(public_627a5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x627a580, internal_627a580, public_627a580);
extern "C" NAKED register_t __cdecl internal_627a580()
{
    __asm
    {
        mov ecx, offset public_63fbbc4
        call public_6279fe0
/*FIXUP push offset _public_627a5a0 @0x627a58a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_627a5a0
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x627a580)
    }
}
