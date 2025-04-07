#include "Common-PCH.h"

PROC_DECLARE(0x62b17a0, internal_62b17a0, public_62b17a0);
extern "C" NAKED register_t __cdecl internal_62b17a0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x2BC], al
        ret 4
        UNREACHABLE_TRAP(0x62b17a0)
    }
}
