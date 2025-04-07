#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac150, internal_6dac150, public_6dac150);
extern "C" NAKED register_t __cdecl internal_6dac150()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6410]
        mov dword ptr ds : [public_6dbc25c], eax
        ret 
        UNREACHABLE_TRAP(0x6dac150)
    }
}
