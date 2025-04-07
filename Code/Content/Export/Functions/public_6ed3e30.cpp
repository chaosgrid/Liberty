#include "Content-PCH.h"

PROC_DECLARE(0x6ed3e30, internal_6ed3e30, public_6ed3e30);
extern "C" NAKED register_t __cdecl internal_6ed3e30()
{
    __asm
    {
/*FIXUP push offset public_6fb3724 @0x6ed3e30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3724
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf044], eax
        ret 
        UNREACHABLE_TRAP(0x6ed3e30)
    }
}
