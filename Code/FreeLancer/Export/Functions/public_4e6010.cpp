#include "Freelancer-PCH.h"

PROC_DECLARE(0x4e6010, internal_4e6010, public_4e6010);
extern "C" NAKED register_t __cdecl internal_4e6010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d8d58]
        mov dword ptr ds : [public_674b10], eax
        ret 
        UNREACHABLE_TRAP(0x4e6010)
    }
}
