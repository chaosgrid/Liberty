#include "Content-PCH.h"

PROC_DECLARE(0x6efe220, internal_6efe220, public_6efe220);
extern "C" NAKED register_t __cdecl internal_6efe220()
{
    __asm
    {
/*FIXUP push offset public_6fb3758 @0x6efe220*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3758
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf3c0], eax
        ret 
        UNREACHABLE_TRAP(0x6efe220)
    }
}
