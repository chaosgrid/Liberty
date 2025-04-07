#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_548f20);
CLANG_FORWARD_PROC_SYMBOL(public_549300);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x548f00, internal_548f00, public_548f00);
extern "C" NAKED register_t __cdecl internal_548f00()
{
    __asm
    {
        mov ecx, offset public_678b98
        call public_549300
/*FIXUP push offset _public_548f20 @0x548f0a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_548f20
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x548f00)
    }
}
