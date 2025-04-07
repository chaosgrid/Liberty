#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac290, internal_6dac290, public_6dac290);
extern "C" NAKED register_t __cdecl internal_6dac290()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db647c]
        mov dword ptr ds : [public_6dbc2d4], eax
        ret 
        UNREACHABLE_TRAP(0x6dac290)
    }
}
