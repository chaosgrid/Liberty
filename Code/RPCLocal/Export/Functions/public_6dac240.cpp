#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac240, internal_6dac240, public_6dac240);
extern "C" NAKED register_t __cdecl internal_6dac240()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6460]
        mov dword ptr ds : [public_6dbc2ac], eax
        ret 
        UNREACHABLE_TRAP(0x6dac240)
    }
}
