#include "Content-PCH.h"

PROC_DECLARE(0x6ea1860, internal_6ea1860, public_6ea1860);
extern "C" NAKED register_t __cdecl internal_6ea1860()
{
    __asm
    {
/*FIXUP push offset public_6fb37c8 @0x6ea1860*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37c8
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce96c], eax
        ret 
        UNREACHABLE_TRAP(0x6ea1860)
    }
}
