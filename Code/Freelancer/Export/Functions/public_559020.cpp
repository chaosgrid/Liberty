#include "Freelancer-PCH.h"

PROC_DECLARE(0x559020, internal_559020, public_559020);
extern "C" NAKED register_t __cdecl internal_559020()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e148c]
        mov dword ptr ds : [public_6799f0], eax
        ret 
        UNREACHABLE_TRAP(0x559020)
    }
}
