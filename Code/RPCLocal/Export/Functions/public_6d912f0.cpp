#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d912f0, internal_6d912f0, public_6d912f0);
extern "C" NAKED register_t __cdecl internal_6d912f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3ce4]
        mov dword ptr ds : [public_6dbbdb0], eax
        ret 
        UNREACHABLE_TRAP(0x6d912f0)
    }
}
