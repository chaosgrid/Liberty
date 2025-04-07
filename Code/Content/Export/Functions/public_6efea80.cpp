#include "Content-PCH.h"

PROC_DECLARE(0x6efea80, internal_6efea80, public_6efea80);
extern "C" NAKED register_t __cdecl internal_6efea80()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6efea80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf3f4], eax
        ret 
        UNREACHABLE_TRAP(0x6efea80)
    }
}
