#include "Content-PCH.h"

PROC_DECLARE(0x6f28fe0, internal_6f28fe0, public_6f28fe0);
extern "C" NAKED register_t __cdecl internal_6f28fe0()
{
    __asm
    {
/*FIXUP push offset public_6fb3718 @0x6f28fe0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3718
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0804], eax
        ret 
        UNREACHABLE_TRAP(0x6f28fe0)
    }
}
