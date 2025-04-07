#include "Common-PCH.h"

PROC_DECLARE(0x6311460, internal_6311460, public_6311460);
extern "C" NAKED register_t __cdecl internal_6311460()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3728]
        mov dword ptr ds : [public_63fd2bc], eax
        ret 
        UNREACHABLE_TRAP(0x6311460)
    }
}
