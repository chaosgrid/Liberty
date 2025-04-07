#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52a530);
CLANG_FORWARD_PROC_SYMBOL(public_52a610);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x52a510, internal_52a510, public_52a510);
extern "C" NAKED register_t __cdecl internal_52a510()
{
    __asm
    {
        mov ecx, offset public_675400
        call public_52a610
/*FIXUP push offset _public_52a530 @0x52a51a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_52a530
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x52a510)
    }
}
