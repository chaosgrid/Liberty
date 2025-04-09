#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45fc90, internal_45fc90, public_45fc90);
extern "C" NAKED register_t __cdecl internal_45fc90()
{
    __asm
    {
        fld dword ptr ds : [public_5ceef8]
        fmul qword ptr ds : [public_5cf0f8]
        fstp dword ptr ds : [public_66d4cc]
        ret 
        UNREACHABLE_TRAP(0x45fc90)
    }
}
