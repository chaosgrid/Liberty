#include "Content-PCH.h"

PROC_DECLARE(0x6eb6d00, internal_6eb6d00, public_6eb6d00);
extern "C" NAKED register_t __cdecl internal_6eb6d00()
{
    __asm
    {
/*FIXUP push offset public_6fb3748 @0x6eb6d00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3748
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcef90], eax
        ret 
        UNREACHABLE_TRAP(0x6eb6d00)
    }
}
