#include "Content-PCH.h"

PROC_DECLARE(0x6eb2730, internal_6eb2730, public_6eb2730);
extern "C" NAKED register_t __cdecl internal_6eb2730()
{
    __asm
    {
/*FIXUP push offset public_6fb3730 @0x6eb2730*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3730
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fceeec], eax
        ret 
        UNREACHABLE_TRAP(0x6eb2730)
    }
}
