#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48b2d0);
CLANG_FORWARD_PROC_SYMBOL(public_48d5b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x48b2b0, internal_48b2b0, public_48b2b0);
extern "C" NAKED register_t __cdecl internal_48b2b0()
{
    __asm
    {
/*FIXUP push offset public_5cb6a0 @0x48b2b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6a0
        mov ecx, offset public_671ffc
        call public_48d5b0
/*FIXUP push offset _public_48b2d0 @0x48b2bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_48b2d0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x48b2b0)
    }
}
