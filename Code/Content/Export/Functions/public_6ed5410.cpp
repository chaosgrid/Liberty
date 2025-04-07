#include "Content-PCH.h"

PROC_DECLARE(0x6ed5410, internal_6ed5410, public_6ed5410);
extern "C" NAKED register_t __cdecl internal_6ed5410()
{
    __asm
    {
/*FIXUP push offset public_6fb3718 @0x6ed5410*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3718
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf0c8], eax
        ret 
        UNREACHABLE_TRAP(0x6ed5410)
    }
}
