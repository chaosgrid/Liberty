#include "Content-PCH.h"

PROC_DECLARE(0x6f4ee00, internal_6f4ee00, public_6f4ee00);
extern "C" NAKED register_t __cdecl internal_6f4ee00()
{
    __asm
    {
/*FIXUP push offset public_6fb3718 @0x6f4ee00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3718
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0d18], eax
        ret 
        UNREACHABLE_TRAP(0x6f4ee00)
    }
}
