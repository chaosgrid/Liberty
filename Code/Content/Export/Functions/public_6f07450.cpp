#include "Content-PCH.h"

PROC_DECLARE(0x6f07450, internal_6f07450, public_6f07450);
extern "C" NAKED register_t __cdecl internal_6f07450()
{
    __asm
    {
        fld dword ptr ds : [public_6fb8100]
        fmul dword ptr ds : [public_6fb8100]
        fstp dword ptr ds : [public_6fd0648]
        ret 
        UNREACHABLE_TRAP(0x6f07450)
    }
}
