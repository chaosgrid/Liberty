#include "Common-PCH.h"

PROC_DECLARE(0x6288260, internal_6288260, public_6288260);
extern "C" NAKED register_t __cdecl internal_6288260()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x2A4]
        ret 
        UNREACHABLE_TRAP(0x6288260)
    }
}
