#include "Freelancer-PCH.h"

PROC_DECLARE(0x542a70, internal_542a70, public_542a70);
extern "C" NAKED register_t __cdecl internal_542a70()
{
    __asm
    {
/*FIXUP push offset public_5dfbe0 @0x542a70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfbe0
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b2c], eax
        ret 
        UNREACHABLE_TRAP(0x542a70)
    }
}
