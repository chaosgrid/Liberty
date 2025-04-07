#include "Content-PCH.h"

PROC_DECLARE(0x6efe180, internal_6efe180, public_6efe180);
extern "C" NAKED register_t __cdecl internal_6efe180()
{
    __asm
    {
/*FIXUP push offset public_6fb3718 @0x6efe180*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3718
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf3d4], eax
        ret 
        UNREACHABLE_TRAP(0x6efe180)
    }
}
