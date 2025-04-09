#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a2850);
CLANG_FORWARD_PROC_SYMBOL(public_5a4c90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5a2830, internal_5a2830, public_5a2830);
extern "C" NAKED register_t __cdecl internal_5a2830()
{
    __asm
    {
/*FIXUP push offset public_5e5f50 @0x5a2830*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e5f50
        mov ecx, offset public_67de10
        call public_5a4c90
/*FIXUP push offset _public_5a2850 @0x5a283f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5a2850
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5a2830)
    }
}
