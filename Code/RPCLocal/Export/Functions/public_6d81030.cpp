#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d81030, internal_6d81030, public_6d81030);
extern "C" NAKED register_t __cdecl internal_6d81030()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_6db3250
        ret 
        UNREACHABLE_TRAP(0x6d81030)
    }
}
