#include "Common-PCH.h"

PROC_DECLARE(0x631e6a0, internal_631e6a0, public_631e6a0);
extern "C" NAKED register_t __cdecl internal_631e6a0()
{
    __asm
    {
        fld qword ptr ds : [public_639df88]
        fdiv qword ptr ds : [public_6401920]
        fstp qword ptr ds : [public_6401918]
        ret 
        UNREACHABLE_TRAP(0x631e6a0)
    }
}
