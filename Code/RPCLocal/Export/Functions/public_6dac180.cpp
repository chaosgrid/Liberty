#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac180, internal_6dac180, public_6dac180);
extern "C" NAKED register_t __cdecl internal_6dac180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6420]
        mov dword ptr ds : [public_6dbc26c], eax
        ret 
        UNREACHABLE_TRAP(0x6dac180)
    }
}
