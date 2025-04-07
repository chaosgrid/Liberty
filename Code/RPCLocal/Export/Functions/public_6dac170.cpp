#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac170, internal_6dac170, public_6dac170);
extern "C" NAKED register_t __cdecl internal_6dac170()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db641c]
        mov dword ptr ds : [public_6dbc274], eax
        ret 
        UNREACHABLE_TRAP(0x6dac170)
    }
}
