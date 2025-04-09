#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5080);
CLANG_FORWARD_PROC_SYMBOL(public_4c5940);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4c5060, internal_4c5060, public_4c5060);
extern "C" NAKED register_t __cdecl internal_4c5060()
{
    __asm
    {
        push 0
        mov ecx, offset public_6728d8
        call public_4c5940
/*FIXUP push offset _public_4c5080 @0x4c506c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4c5080
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4c5060)
    }
}
