#include "Freelancer-PCH.h"

PROC_DECLARE(0x401eb0, internal_401eb0, public_401eb0);
extern "C" NAKED register_t __cdecl internal_401eb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c7404]
        mov dword ptr ds : [public_616468], eax
        ret 
        UNREACHABLE_TRAP(0x401eb0)
    }
}
