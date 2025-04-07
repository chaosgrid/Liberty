#include "Content-PCH.h"

PROC_DECLARE(0x6f29000, internal_6f29000, public_6f29000);
extern "C" NAKED register_t __cdecl internal_6f29000()
{
    __asm
    {
/*FIXUP push offset public_6fb3724 @0x6f29000*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3724
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0800], eax
        ret 
        UNREACHABLE_TRAP(0x6f29000)
    }
}
