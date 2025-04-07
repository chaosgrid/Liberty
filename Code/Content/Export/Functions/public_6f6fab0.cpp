#include "Content-PCH.h"

PROC_DECLARE(0x6f6fab0, internal_6f6fab0, public_6f6fab0);
extern "C" NAKED register_t __cdecl internal_6f6fab0()
{
    __asm
    {
/*FIXUP push offset public_6fb36f0 @0x6f6fab0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36f0
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd1d48], eax
        ret 
        UNREACHABLE_TRAP(0x6f6fab0)
    }
}
