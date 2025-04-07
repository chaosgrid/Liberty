#include "Common-PCH.h"

PROC_DECLARE(0x62a8240, internal_62a8240, public_62a8240);
extern "C" NAKED register_t __cdecl internal_62a8240()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639dffc]
        mov dword ptr ds : [public_63fc2b8], eax
        ret 
        UNREACHABLE_TRAP(0x62a8240)
    }
}
