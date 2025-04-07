#include "Content-PCH.h"

PROC_DECLARE(0x6f97380, internal_6f97380, public_6f97380);
extern "C" NAKED register_t __cdecl internal_6f97380()
{
    __asm
    {
/*FIXUP push offset public_6fb36f0 @0x6f97380*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36f0
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3d7c], eax
        ret 
        UNREACHABLE_TRAP(0x6f97380)
    }
}
