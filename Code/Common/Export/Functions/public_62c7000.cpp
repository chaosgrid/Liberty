#include "Common-PCH.h"

PROC_DECLARE(0x62c7000, internal_62c7000, public_62c7000);
extern "C" NAKED register_t __cdecl internal_62c7000()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x2E9], al
        mov byte ptr ds : [ecx+0x2E8], 0
        ret 4
        UNREACHABLE_TRAP(0x62c7000)
    }
}
