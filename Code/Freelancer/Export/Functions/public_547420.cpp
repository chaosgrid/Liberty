#include "Freelancer-PCH.h"

PROC_DECLARE(0x547420, internal_547420, public_547420);
extern "C" NAKED register_t __cdecl internal_547420()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e000c]
        mov dword ptr ds : [public_678b70], eax
        ret 
        UNREACHABLE_TRAP(0x547420)
    }
}
