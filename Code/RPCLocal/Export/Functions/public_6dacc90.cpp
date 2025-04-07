#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dacc90, internal_6dacc90, public_6dacc90);
extern "C" NAKED register_t __cdecl internal_6dacc90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db651c]
        mov dword ptr ds : [public_6dbc32c], eax
        ret 
        UNREACHABLE_TRAP(0x6dacc90)
    }
}
