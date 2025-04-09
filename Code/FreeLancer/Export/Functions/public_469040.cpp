#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_469060);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x469040, internal_469040, public_469040);
extern "C" NAKED register_t __cdecl internal_469040()
{
    __asm
    {
        mov ecx, offset public_66d40c
        call dword ptr ds : [public_5c62dc]
/*FIXUP push offset _public_469060 @0x46904b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_469060
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x469040)
    }
}
