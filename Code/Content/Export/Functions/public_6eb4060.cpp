#include "Content-PCH.h"

PROC_DECLARE(0x6eb4060, internal_6eb4060, public_6eb4060);
extern "C" NAKED register_t __cdecl internal_6eb4060()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6eb4060*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcef3c], eax
        ret 
        UNREACHABLE_TRAP(0x6eb4060)
    }
}
