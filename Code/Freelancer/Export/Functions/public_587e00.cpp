#include "Freelancer-PCH.h"

PROC_DECLARE(0x587e00, internal_587e00, public_587e00);
extern "C" NAKED register_t __cdecl internal_587e00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e4d68]
        mov dword ptr ds : [public_67c530], eax
        ret 
        UNREACHABLE_TRAP(0x587e00)
    }
}
