#include "Freelancer-PCH.h"

PROC_DECLARE(0x4ca640, internal_4ca640, public_4ca640);
extern "C" NAKED register_t __cdecl internal_4ca640()
{
    __asm
    {
        mov dword ptr ds : [public_6735a4], 0
        mov dword ptr ds : [public_6735a8], 0
        mov dword ptr ds : [public_6735ac], 0xBF800000
        mov dword ptr ds : [public_6735b0], 0
        ret 
        UNREACHABLE_TRAP(0x4ca640)
    }
}
