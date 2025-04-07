#include "Alchemy-PCH.h"

PROC_DECLARE(0x62031b0, internal_62031b0, public_62031b0);
extern "C" NAKED register_t __cdecl internal_62031b0()
{
    __asm
    {
        mov dword ptr ds : [public_6257920], offset public_624b358
        mov dword ptr ds : [public_6257924], offset public_624b334
        mov dword ptr ds : [public_6257928], 1
        ret 
        UNREACHABLE_TRAP(0x62031b0)
    }
}
