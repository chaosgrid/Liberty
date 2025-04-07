#include "Server-PCH.h"

PROC_DECLARE(0x6d18830, internal_6d18830, public_6d18830);
extern "C" NAKED register_t __cdecl internal_6d18830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d68668]
        mov dword ptr ds : [public_6d8e598], eax
        ret 
        UNREACHABLE_TRAP(0x6d18830)
    }
}
