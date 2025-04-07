#include "Content-PCH.h"

PROC_DECLARE(0x6eb7580, internal_6eb7580, public_6eb7580);
extern "C" NAKED register_t __cdecl internal_6eb7580()
{
    __asm
    {
/*FIXUP push offset public_6fb4708 @0x6eb7580*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4708
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcefcc], eax
        ret 
        UNREACHABLE_TRAP(0x6eb7580)
    }
}
