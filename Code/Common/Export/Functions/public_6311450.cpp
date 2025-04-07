#include "Common-PCH.h"

PROC_DECLARE(0x6311450, internal_6311450, public_6311450);
extern "C" NAKED register_t __cdecl internal_6311450()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3724]
        mov dword ptr ds : [public_63fd2c0], eax
        ret 
        UNREACHABLE_TRAP(0x6311450)
    }
}
