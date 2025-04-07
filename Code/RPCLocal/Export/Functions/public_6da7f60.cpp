#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da7f60, internal_6da7f60, public_6da7f60);
extern "C" NAKED register_t __cdecl internal_6da7f60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db621c]
        mov dword ptr ds : [public_6dbc0bc], eax
        ret 
        UNREACHABLE_TRAP(0x6da7f60)
    }
}
