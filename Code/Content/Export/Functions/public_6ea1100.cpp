#include "Content-PCH.h"

PROC_DECLARE(0x6ea1100, internal_6ea1100, public_6ea1100);
extern "C" NAKED register_t __cdecl internal_6ea1100()
{
    __asm
    {
/*FIXUP push offset public_6fb3748 @0x6ea1100*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3748
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce940], eax
        ret 
        UNREACHABLE_TRAP(0x6ea1100)
    }
}
