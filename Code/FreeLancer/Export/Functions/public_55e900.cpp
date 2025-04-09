#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55e920);
CLANG_FORWARD_PROC_SYMBOL(public_55fcb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x55e900, internal_55e900, public_55e900);
extern "C" NAKED register_t __cdecl internal_55e900()
{
    __asm
    {
/*FIXUP push offset public_5d6034 @0x55e900*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6034
        mov ecx, offset public_679b14
        call public_55fcb0
/*FIXUP push offset _public_55e920 @0x55e90f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_55e920
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x55e900)
    }
}
