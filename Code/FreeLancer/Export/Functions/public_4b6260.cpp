#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b6280);
CLANG_FORWARD_PROC_SYMBOL(public_4b65c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4b6260, internal_4b6260, public_4b6260);
extern "C" NAKED register_t __cdecl internal_4b6260()
{
    __asm
    {
/*FIXUP push offset public_5d5440 @0x4b6260*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5440
        mov ecx, offset public_67224c
        call public_4b65c0
/*FIXUP push offset _public_4b6280 @0x4b626f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4b6280
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4b6260)
    }
}
