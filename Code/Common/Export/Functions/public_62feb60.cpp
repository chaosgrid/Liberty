#include "Common-PCH.h"

PROC_DECLARE(0x62feb60, internal_62feb60, public_62feb60);
extern "C" NAKED register_t __cdecl internal_62feb60()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x2EC], al
        ret 4
        UNREACHABLE_TRAP(0x62feb60)
    }
}
