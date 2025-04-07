#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dab770, internal_6dab770, public_6dab770);
extern "C" NAKED register_t __cdecl internal_6dab770()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6394]
        mov dword ptr ds : [public_6dbc1fc], eax
        ret 
        UNREACHABLE_TRAP(0x6dab770)
    }
}
