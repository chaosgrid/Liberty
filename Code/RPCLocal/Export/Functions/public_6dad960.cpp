#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dad960, internal_6dad960, public_6dad960);
extern "C" NAKED register_t __cdecl internal_6dad960()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6588]
        mov dword ptr ds : [public_6dbc38c], eax
        ret 
        UNREACHABLE_TRAP(0x6dad960)
    }
}
