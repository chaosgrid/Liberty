#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b0840, internal_5b0840, public_5b0840);
extern "C" NAKED register_t __cdecl internal_5b0840()
{
    __asm
    {
        mov dword ptr ds : [public_67ea6c], 0
        mov dword ptr ds : [public_67ea64], offset public_5e6674
        mov dword ptr ds : [public_67ea68], offset public_5e6668
        ret 
        UNREACHABLE_TRAP(0x5b0840)
    }
}
