#include "Content-PCH.h"

PROC_DECLARE(0x6f70f30, internal_6f70f30, public_6f70f30);
extern "C" NAKED register_t __cdecl internal_6f70f30()
{
    __asm
    {
/*FIXUP push offset public_6fb376c @0x6f70f30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb376c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3a2c], eax
        ret 
        UNREACHABLE_TRAP(0x6f70f30)
    }
}
