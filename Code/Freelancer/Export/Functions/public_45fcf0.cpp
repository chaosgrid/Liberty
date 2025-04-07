#include "Freelancer-PCH.h"

PROC_DECLARE(0x45fcf0, internal_45fcf0, public_45fcf0);
extern "C" NAKED register_t __cdecl internal_45fcf0()
{
    __asm
    {
        fld dword ptr ds : [public_66d4cc]
        fmul dword ptr ds : [public_5c75e0]
        fsubr qword ptr ds : [public_5cf100]
        fstp dword ptr ds : [public_66d4bc]
        ret 
        UNREACHABLE_TRAP(0x45fcf0)
    }
}
