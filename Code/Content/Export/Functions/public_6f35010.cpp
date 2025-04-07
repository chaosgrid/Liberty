#include "Content-PCH.h"

PROC_DECLARE(0x6f35010, internal_6f35010, public_6f35010);
extern "C" NAKED register_t __cdecl internal_6f35010()
{
    __asm
    {
/*FIXUP push offset public_6fb3758 @0x6f35010*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3758
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd08e0], eax
        ret 
        UNREACHABLE_TRAP(0x6f35010)
    }
}
