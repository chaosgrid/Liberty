#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579180);

PROC_DECLARE(0x579180, internal_579180, public_579180);
extern "C" NAKED register_t __cdecl internal_579180()
{
    __asm
    {
/*FIXUP push offset public_67c3b8 @0x579180*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67c3b8
        call dword ptr ds : [public_5c6c10]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x579180)
    }
}
