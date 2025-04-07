#include "Content-PCH.h"

PROC_DECLARE(0x6f46a00, internal_6f46a00, public_6f46a00);
extern "C" NAKED register_t __cdecl internal_6f46a00()
{
    __asm
    {
/*FIXUP push offset public_6fb3730 @0x6f46a00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3730
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0c04], eax
        ret 
        UNREACHABLE_TRAP(0x6f46a00)
    }
}
