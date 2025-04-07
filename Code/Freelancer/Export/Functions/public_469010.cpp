#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_469030);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x469010, internal_469010, public_469010);
extern "C" NAKED register_t __cdecl internal_469010()
{
    __asm
    {
        mov ecx, offset public_66d418
        call dword ptr ds : [public_5c62dc]
/*FIXUP push offset _public_469030 @0x46901b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_469030
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x469010)
    }
}
