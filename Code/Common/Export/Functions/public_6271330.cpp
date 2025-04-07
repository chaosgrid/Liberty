#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6270250);
CLANG_FORWARD_PROC_SYMBOL(public_6271350);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x6271330, internal_6271330, public_6271330);
extern "C" NAKED register_t __cdecl internal_6271330()
{
    __asm
    {
        mov ecx, offset public_63fbb74
        call public_6270250
/*FIXUP push offset _public_6271350 @0x627133a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6271350
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6271330)
    }
}
