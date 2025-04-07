#include "Content-PCH.h"

PROC_DECLARE(0x6f5c920, internal_6f5c920, public_6f5c920);
extern "C" NAKED register_t __cdecl internal_6f5c920()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6f5c920*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd1c34], eax
        ret 
        UNREACHABLE_TRAP(0x6f5c920)
    }
}
