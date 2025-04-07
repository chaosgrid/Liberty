#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da78b0, internal_6da78b0, public_6da78b0);
extern "C" NAKED register_t __cdecl internal_6da78b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6200]
        mov dword ptr ds : [public_6dbc0a4], eax
        ret 
        UNREACHABLE_TRAP(0x6da78b0)
    }
}
