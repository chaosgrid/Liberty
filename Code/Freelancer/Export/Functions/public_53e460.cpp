#include "Freelancer-PCH.h"

PROC_DECLARE(0x53e460, internal_53e460, public_53e460);
extern "C" NAKED register_t __cdecl internal_53e460()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df540]
        mov dword ptr ds : [public_6789fc], eax
        ret 
        UNREACHABLE_TRAP(0x53e460)
    }
}
