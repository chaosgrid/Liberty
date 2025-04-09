#include "Freelancer-PCH.h"

PROC_DECLARE(0x4f6df0, internal_4f6df0, public_4f6df0);
extern "C" NAKED register_t __cdecl internal_4f6df0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d999c]
        mov dword ptr ds : [public_674c6c], eax
        ret 
        UNREACHABLE_TRAP(0x4f6df0)
    }
}
