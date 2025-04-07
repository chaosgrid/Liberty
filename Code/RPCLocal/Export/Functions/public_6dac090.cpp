#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac090, internal_6dac090, public_6dac090);
extern "C" NAKED register_t __cdecl internal_6dac090()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db63b4]
        mov dword ptr ds : [public_6dbc21c], eax
        ret 
        UNREACHABLE_TRAP(0x6dac090)
    }
}
