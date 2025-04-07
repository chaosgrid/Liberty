#include "Content-PCH.h"

PROC_DECLARE(0x6efb530, internal_6efb530, public_6efb530);
extern "C" NAKED register_t __cdecl internal_6efb530()
{
    __asm
    {
/*FIXUP push offset public_6fb37b4 @0x6efb530*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37b4
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf344], eax
        ret 
        UNREACHABLE_TRAP(0x6efb530)
    }
}
