#include "Common-PCH.h"

PROC_DECLARE(0x6309ad0, internal_6309ad0, public_6309ad0);
extern "C" NAKED register_t __cdecl internal_6309ad0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a3478]
        mov dword ptr ds : [public_63fcf10], eax
        ret 
        UNREACHABLE_TRAP(0x6309ad0)
    }
}
