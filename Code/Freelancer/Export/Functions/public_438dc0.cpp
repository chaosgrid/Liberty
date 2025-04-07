#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438de0);
CLANG_FORWARD_PROC_SYMBOL(public_438df0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x438dc0, internal_438dc0, public_438dc0);
extern "C" NAKED register_t __cdecl internal_438dc0()
{
    __asm
    {
        mov ecx, offset public_668708
        call public_438df0
/*FIXUP push offset _public_438de0 @0x438dca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_438de0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x438dc0)
    }
}
