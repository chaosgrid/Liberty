#include "Content-PCH.h"

PROC_DECLARE(0x6f6ff30, internal_6f6ff30, public_6f6ff30);
extern "C" NAKED register_t __cdecl internal_6f6ff30()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6f6ff30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd39e0], eax
        ret 
        UNREACHABLE_TRAP(0x6f6ff30)
    }
}
