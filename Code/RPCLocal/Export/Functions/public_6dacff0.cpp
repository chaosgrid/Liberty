#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dacff0, internal_6dacff0, public_6dacff0);
extern "C" NAKED register_t __cdecl internal_6dacff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db654c]
        mov dword ptr ds : [public_6dbc35c], eax
        ret 
        UNREACHABLE_TRAP(0x6dacff0)
    }
}
