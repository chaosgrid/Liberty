#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dad950, internal_6dad950, public_6dad950);
extern "C" NAKED register_t __cdecl internal_6dad950()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6584]
        mov dword ptr ds : [public_6dbc394], eax
        ret 
        UNREACHABLE_TRAP(0x6dad950)
    }
}
