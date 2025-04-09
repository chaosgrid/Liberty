#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579370);
CLANG_FORWARD_PROC_SYMBOL(public_57edb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x579350, internal_579350, public_579350);
extern "C" NAKED register_t __cdecl internal_579350()
{
    __asm
    {
/*FIXUP push offset public_5d08ac @0x579350*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d08ac
        mov ecx, offset public_67c414
        call public_57edb0
/*FIXUP push offset _public_579370 @0x57935f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_579370
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x579350)
    }
}
