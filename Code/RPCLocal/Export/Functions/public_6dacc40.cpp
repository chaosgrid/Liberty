#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dacc40, internal_6dacc40, public_6dacc40);
extern "C" NAKED register_t __cdecl internal_6dacc40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6508]
        mov dword ptr ds : [public_6dbc320], eax
        ret 
        UNREACHABLE_TRAP(0x6dacc40)
    }
}
