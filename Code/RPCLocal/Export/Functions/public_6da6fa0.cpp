#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da6fa0, internal_6da6fa0, public_6da6fa0);
extern "C" NAKED register_t __cdecl internal_6da6fa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61dc]
        mov dword ptr ds : [public_6dbc070], eax
        ret 
        UNREACHABLE_TRAP(0x6da6fa0)
    }
}
