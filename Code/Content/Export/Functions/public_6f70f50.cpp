#include "Content-PCH.h"

PROC_DECLARE(0x6f70f50, internal_6f70f50, public_6f70f50);
extern "C" NAKED register_t __cdecl internal_6f70f50()
{
    __asm
    {
/*FIXUP push offset public_6fb3778 @0x6f70f50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3778
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3a28], eax
        ret 
        UNREACHABLE_TRAP(0x6f70f50)
    }
}
