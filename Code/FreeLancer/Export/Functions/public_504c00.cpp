#include "FreeLancer-PCH.h"

PROC_DECLARE(0x504c00, internal_504c00, public_504c00);
extern "C" NAKED register_t __cdecl internal_504c00()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x2C8]
        ret 
        UNREACHABLE_TRAP(0x504c00)
    }
}
