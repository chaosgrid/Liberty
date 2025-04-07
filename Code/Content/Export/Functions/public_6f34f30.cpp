#include "Content-PCH.h"

PROC_DECLARE(0x6f34f30, internal_6f34f30, public_6f34f30);
extern "C" NAKED register_t __cdecl internal_6f34f30()
{
    __asm
    {
/*FIXUP push offset public_6fb3700 @0x6f34f30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3700
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd08fc], eax
        ret 
        UNREACHABLE_TRAP(0x6f34f30)
    }
}
