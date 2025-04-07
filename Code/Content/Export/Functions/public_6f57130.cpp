#include "Content-PCH.h"

PROC_DECLARE(0x6f57130, internal_6f57130, public_6f57130);
extern "C" NAKED register_t __cdecl internal_6f57130()
{
    __asm
    {
/*FIXUP push offset public_6fb37b4 @0x6f57130*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37b4
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0d88], eax
        ret 
        UNREACHABLE_TRAP(0x6f57130)
    }
}
