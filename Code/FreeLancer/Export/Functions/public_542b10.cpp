#include "Freelancer-PCH.h"

PROC_DECLARE(0x542b10, internal_542b10, public_542b10);
extern "C" NAKED register_t __cdecl internal_542b10()
{
    __asm
    {
/*FIXUP push offset public_5dfc38 @0x542b10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfc38
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b18], eax
        ret 
        UNREACHABLE_TRAP(0x542b10)
    }
}
