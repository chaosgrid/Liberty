#include "Content-PCH.h"

PROC_DECLARE(0x6f84260, internal_6f84260, public_6f84260);
extern "C" NAKED register_t __cdecl internal_6f84260()
{
    __asm
    {
/*FIXUP push offset public_6fb37c8 @0x6f84260*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37c8
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3bc4], eax
        ret 
        UNREACHABLE_TRAP(0x6f84260)
    }
}
