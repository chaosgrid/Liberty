#include "Content-PCH.h"

PROC_DECLARE(0x6eb6c40, internal_6eb6c40, public_6eb6c40);
extern "C" NAKED register_t __cdecl internal_6eb6c40()
{
    __asm
    {
/*FIXUP push offset public_6fb3700 @0x6eb6c40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3700
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcefa8], eax
        ret 
        UNREACHABLE_TRAP(0x6eb6c40)
    }
}
