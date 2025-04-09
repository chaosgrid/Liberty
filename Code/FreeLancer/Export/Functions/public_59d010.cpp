#include "Freelancer-PCH.h"

PROC_DECLARE(0x59d010, internal_59d010, public_59d010);
extern "C" NAKED register_t __cdecl internal_59d010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5dc0]
        mov dword ptr ds : [public_67dcb8], eax
        ret 
        UNREACHABLE_TRAP(0x59d010)
    }
}
