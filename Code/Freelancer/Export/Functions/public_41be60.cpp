#include "Freelancer-PCH.h"

PROC_DECLARE(0x41be60, internal_41be60, public_41be60);
extern "C" NAKED register_t __cdecl internal_41be60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c9330]
        mov dword ptr ds : [public_616714], eax
        ret 
        UNREACHABLE_TRAP(0x41be60)
    }
}
