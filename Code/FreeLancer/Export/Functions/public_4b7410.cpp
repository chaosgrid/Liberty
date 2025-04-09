#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b7430);
CLANG_FORWARD_PROC_SYMBOL(public_4b96b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4b7410, internal_4b7410, public_4b7410);
extern "C" NAKED register_t __cdecl internal_4b7410()
{
    __asm
    {
/*FIXUP push offset public_5cb6bc @0x4b7410*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6bc
        mov ecx, offset public_6722d0
        call public_4b96b0
/*FIXUP push offset _public_4b7430 @0x4b741f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4b7430
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4b7410)
    }
}
