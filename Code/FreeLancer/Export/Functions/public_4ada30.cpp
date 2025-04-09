#include "Freelancer-PCH.h"

PROC_DECLARE(0x4ada30, internal_4ada30, public_4ada30);
extern "C" NAKED register_t __cdecl internal_4ada30()
{
    __asm
    {
/*FIXUP push offset public_5d5098 @0x4ada30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5098
        call dword ptr ds : [public_5c6f74]
        xor al, al
        ret 0xC
        UNREACHABLE_TRAP(0x4ada30)
    }
}
