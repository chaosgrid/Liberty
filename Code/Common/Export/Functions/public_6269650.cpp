#include "Common-PCH.h"

PROC_DECLARE(0x6269650, internal_6269650, public_6269650);
extern "C" NAKED register_t __cdecl internal_6269650()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 5
        add eax, edx
        ret 4
        UNREACHABLE_TRAP(0x6269650)
    }
}
