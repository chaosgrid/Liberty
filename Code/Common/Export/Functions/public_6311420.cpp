#include "Common-PCH.h"

PROC_DECLARE(0x6311420, internal_6311420, public_6311420);
extern "C" NAKED register_t __cdecl internal_6311420()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_63fd2a4], eax
        ret 
        UNREACHABLE_TRAP(0x6311420)
    }
}
