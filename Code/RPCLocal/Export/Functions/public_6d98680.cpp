#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d98680, internal_6d98680, public_6d98680);
extern "C" NAKED register_t __cdecl internal_6d98680()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3ff0]
        mov dword ptr ds : [public_6dbbeac], eax
        ret 
        UNREACHABLE_TRAP(0x6d98680)
    }
}
