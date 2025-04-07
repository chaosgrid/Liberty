#include "Freelancer-PCH.h"

PROC_DECLARE(0x4b6b20, internal_4b6b20, public_4b6b20);
extern "C" NAKED register_t __cdecl internal_4b6b20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d55fc]
        mov dword ptr ds : [public_6722c0], eax
        ret 
        UNREACHABLE_TRAP(0x4b6b20)
    }
}
