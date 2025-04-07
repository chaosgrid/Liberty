#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac190, internal_6dac190, public_6dac190);
extern "C" NAKED register_t __cdecl internal_6dac190()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db642c]
        mov dword ptr ds : [public_6dbc280], eax
        ret 
        UNREACHABLE_TRAP(0x6dac190)
    }
}
