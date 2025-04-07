#include "Content-PCH.h"

PROC_DECLARE(0x6ed5b30, internal_6ed5b30, public_6ed5b30);
extern "C" NAKED register_t __cdecl internal_6ed5b30()
{
    __asm
    {
/*FIXUP push offset public_6fb3730 @0x6ed5b30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3730
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf190], eax
        ret 
        UNREACHABLE_TRAP(0x6ed5b30)
    }
}
