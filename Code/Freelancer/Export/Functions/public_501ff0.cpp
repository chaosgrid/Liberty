#include "Freelancer-PCH.h"

PROC_DECLARE(0x501ff0, internal_501ff0, public_501ff0);
extern "C" NAKED register_t __cdecl internal_501ff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5da780]
        mov dword ptr ds : [public_674fe0], eax
        ret 
        UNREACHABLE_TRAP(0x501ff0)
    }
}
