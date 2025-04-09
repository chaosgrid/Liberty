#include "Freelancer-PCH.h"

PROC_DECLARE(0x558840, internal_558840, public_558840);
extern "C" NAKED register_t __cdecl internal_558840()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1450]
        mov dword ptr ds : [public_6799cc], eax
        ret 
        UNREACHABLE_TRAP(0x558840)
    }
}
