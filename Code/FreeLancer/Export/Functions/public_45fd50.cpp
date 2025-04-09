#include "Freelancer-PCH.h"

PROC_DECLARE(0x45fd50, internal_45fd50, public_45fd50);
extern "C" NAKED register_t __cdecl internal_45fd50()
{
    __asm
    {
        fld dword ptr ds : [public_5cef20]
        fsub qword ptr ds : [public_5cf108]
        fsub dword ptr ds : [public_5cef0c]
        fstp dword ptr ds : [public_66d4a8]
        ret 
        UNREACHABLE_TRAP(0x45fd50)
    }
}
