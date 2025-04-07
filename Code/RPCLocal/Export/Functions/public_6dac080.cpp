#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac080, internal_6dac080, public_6dac080);
extern "C" NAKED register_t __cdecl internal_6dac080()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db63b0]
        mov dword ptr ds : [public_6dbc224], eax
        ret 
        UNREACHABLE_TRAP(0x6dac080)
    }
}
