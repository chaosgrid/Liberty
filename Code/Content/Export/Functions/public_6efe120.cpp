#include "Content-PCH.h"

PROC_DECLARE(0x6efe120, internal_6efe120, public_6efe120);
extern "C" NAKED register_t __cdecl internal_6efe120()
{
    __asm
    {
/*FIXUP push offset public_6fb36f0 @0x6efe120*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36f0
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf3e0], eax
        ret 
        UNREACHABLE_TRAP(0x6efe120)
    }
}
