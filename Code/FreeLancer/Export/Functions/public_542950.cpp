#include "Freelancer-PCH.h"

PROC_DECLARE(0x542950, internal_542950, public_542950);
extern "C" NAKED register_t __cdecl internal_542950()
{
    __asm
    {
/*FIXUP push offset public_5dfb64 @0x542950*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dfb64
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_678b50], eax
        ret 
        UNREACHABLE_TRAP(0x542950)
    }
}
