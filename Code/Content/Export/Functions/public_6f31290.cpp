#include "Content-PCH.h"

PROC_DECLARE(0x6f31290, internal_6f31290, public_6f31290);
extern "C" NAKED register_t __cdecl internal_6f31290()
{
    __asm
    {
/*FIXUP push offset public_6fb3748 @0x6f31290*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3748
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0860], eax
        ret 
        UNREACHABLE_TRAP(0x6f31290)
    }
}
