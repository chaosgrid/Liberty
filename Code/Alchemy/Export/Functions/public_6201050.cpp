#include "Alchemy-PCH.h"

PROC_DECLARE(0x6201050, internal_6201050, public_6201050);
extern "C" NAKED register_t __cdecl internal_6201050()
{
    __asm
    {
        mov dword ptr ds : [public_62578b0], 0
        ret 
        UNREACHABLE_TRAP(0x6201050)
    }
}
