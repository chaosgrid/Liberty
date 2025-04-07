#include "Content-PCH.h"

PROC_DECLARE(0x6f4a980, internal_6f4a980, public_6f4a980);
extern "C" NAKED register_t __cdecl internal_6f4a980()
{
    __asm
    {
/*FIXUP push offset public_6fb37c8 @0x6f4a980*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37c8
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0c48], eax
        ret 
        UNREACHABLE_TRAP(0x6f4a980)
    }
}
