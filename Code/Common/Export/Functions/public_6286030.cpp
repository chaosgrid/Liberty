#include "Common-PCH.h"

PROC_DECLARE(0x6286030, internal_6286030, public_6286030);
extern "C" NAKED register_t __cdecl internal_6286030()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639baf0]
        mov dword ptr ds : [public_63fc0b0], eax
        ret 
        UNREACHABLE_TRAP(0x6286030)
    }
}
