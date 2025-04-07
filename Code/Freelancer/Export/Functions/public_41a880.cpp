#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a880);

PROC_DECLARE(0x41a880, internal_41a880, public_41a880);
extern "C" NAKED register_t __cdecl internal_41a880()
{
    __asm
    {
/*FIXUP push offset public_6166ec @0x41a880*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        call dword ptr ds : [public_5c6eec]
        ret 
        UNREACHABLE_TRAP(0x41a880)
    }
}
