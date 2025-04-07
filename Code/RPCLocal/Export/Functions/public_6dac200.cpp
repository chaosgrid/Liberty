#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac200, internal_6dac200, public_6dac200);
extern "C" NAKED register_t __cdecl internal_6dac200()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db644c]
        mov dword ptr ds : [public_6dbc2a4], eax
        ret 
        UNREACHABLE_TRAP(0x6dac200)
    }
}
