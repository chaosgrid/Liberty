#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daa220, internal_6daa220, public_6daa220);
extern "C" NAKED register_t __cdecl internal_6daa220()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6328]
        mov dword ptr ds : [public_6dbc1b4], eax
        ret 
        UNREACHABLE_TRAP(0x6daa220)
    }
}
