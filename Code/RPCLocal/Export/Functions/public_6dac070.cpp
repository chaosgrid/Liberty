#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac070, internal_6dac070, public_6dac070);
extern "C" NAKED register_t __cdecl internal_6dac070()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db63b0]
        mov dword ptr ds : [public_6dbc220], eax
        ret 
        UNREACHABLE_TRAP(0x6dac070)
    }
}
