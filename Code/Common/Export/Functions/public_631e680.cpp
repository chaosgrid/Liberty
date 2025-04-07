#include "Common-PCH.h"

PROC_DECLARE(0x631e680, internal_631e680, public_631e680);
extern "C" NAKED register_t __cdecl internal_631e680()
{
    __asm
    {
        fld qword ptr ds : [public_6399410]
        fdiv qword ptr ds : [public_63a3ce0]
        fstp qword ptr ds : [public_6401920]
        ret 
        UNREACHABLE_TRAP(0x631e680)
    }
}
