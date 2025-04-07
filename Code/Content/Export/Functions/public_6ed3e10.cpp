#include "Content-PCH.h"

PROC_DECLARE(0x6ed3e10, internal_6ed3e10, public_6ed3e10);
extern "C" NAKED register_t __cdecl internal_6ed3e10()
{
    __asm
    {
/*FIXUP push offset public_6fb3718 @0x6ed3e10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3718
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf048], eax
        ret 
        UNREACHABLE_TRAP(0x6ed3e10)
    }
}
