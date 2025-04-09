#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4724f0);
CLANG_FORWARD_PROC_SYMBOL(public_474880);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4724d0, internal_4724d0, public_4724d0);
extern "C" NAKED register_t __cdecl internal_4724d0()
{
    __asm
    {
/*FIXUP push offset public_5d0610 @0x4724d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0610
        mov ecx, offset public_66db70
        call public_474880
/*FIXUP push offset _public_4724f0 @0x4724df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4724f0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4724d0)
    }
}
