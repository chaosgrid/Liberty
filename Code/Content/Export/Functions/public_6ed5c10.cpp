#include "Content-PCH.h"

PROC_DECLARE(0x6ed5c10, internal_6ed5c10, public_6ed5c10);
extern "C" NAKED register_t __cdecl internal_6ed5c10()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6ed5c10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf174], eax
        ret 
        UNREACHABLE_TRAP(0x6ed5c10)
    }
}
