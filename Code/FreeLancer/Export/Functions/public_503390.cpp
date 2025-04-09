#include "FreeLancer-PCH.h"

PROC_DECLARE(0x503390, internal_503390, public_503390);
extern "C" NAKED register_t __cdecl internal_503390()
{
    __asm
    {
        mov dword ptr ds : [public_674fcc], offset public_5daab4
        ret 
        UNREACHABLE_TRAP(0x503390)
    }
}
