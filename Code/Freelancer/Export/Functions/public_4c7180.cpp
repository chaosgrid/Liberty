#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd20);
CLANG_FORWARD_PROC_SYMBOL(public_4c71a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4c7180, internal_4c7180, public_4c7180);
extern "C" NAKED register_t __cdecl internal_4c7180()
{
    __asm
    {
        mov ecx, offset public_673520
        call public_41dd20
/*FIXUP push offset _public_4c71a0 @0x4c718a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4c71a0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4c7180)
    }
}
