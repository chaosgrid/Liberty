#include "Content-PCH.h"

PROC_DECLARE(0x6f57e50, internal_6f57e50, public_6f57e50);
extern "C" NAKED register_t __cdecl internal_6f57e50()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6f57e50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0df8], eax
        ret 
        UNREACHABLE_TRAP(0x6f57e50)
    }
}
