#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5737b0);
CLANG_FORWARD_PROC_SYMBOL(public_573840);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x573790, internal_573790, public_573790);
extern "C" NAKED register_t __cdecl internal_573790()
{
    __asm
    {
        mov ecx, offset public_67a598
        call public_573840
/*FIXUP push offset _public_5737b0 @0x57379a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5737b0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x573790)
    }
}
