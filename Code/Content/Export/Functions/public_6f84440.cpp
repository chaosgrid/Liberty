#include "Content-PCH.h"

PROC_DECLARE(0x6f84440, internal_6f84440, public_6f84440);
extern "C" NAKED register_t __cdecl internal_6f84440()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fb30e0]
        inc dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_6fb30e0]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_6fd3b88], ecx
        ret 
        UNREACHABLE_TRAP(0x6f84440)
    }
}
