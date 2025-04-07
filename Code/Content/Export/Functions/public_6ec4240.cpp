#include "Content-PCH.h"

PROC_DECLARE(0x6ec4240, internal_6ec4240, public_6ec4240);
extern "C" NAKED register_t __cdecl internal_6ec4240()
{
    __asm
    {
/*FIXUP push offset public_6fb4acc @0x6ec4240*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4acc
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcefbc], eax
        ret 
        UNREACHABLE_TRAP(0x6ec4240)
    }
}
