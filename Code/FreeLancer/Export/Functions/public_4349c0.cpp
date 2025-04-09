#include "Freelancer-PCH.h"

PROC_DECLARE(0x4349c0, internal_4349c0, public_4349c0);
extern "C" NAKED register_t __cdecl internal_4349c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cada4]
        mov dword ptr ds : [public_668698], eax
        ret 
        UNREACHABLE_TRAP(0x4349c0)
    }
}
