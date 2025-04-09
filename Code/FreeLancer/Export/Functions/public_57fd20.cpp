#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57fd40);
CLANG_FORWARD_PROC_SYMBOL(public_583480);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x57fd20, internal_57fd20, public_57fd20);
extern "C" NAKED register_t __cdecl internal_57fd20()
{
    __asm
    {
/*FIXUP push offset public_5e2538 @0x57fd20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2538
        mov ecx, offset public_67c488
        call public_583480
/*FIXUP push offset _public_57fd40 @0x57fd2f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_57fd40
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x57fd20)
    }
}
