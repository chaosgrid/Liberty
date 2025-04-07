#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da8b10, internal_6da8b10, public_6da8b10);
extern "C" NAKED register_t __cdecl internal_6da8b10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db629c]
        mov dword ptr ds : [public_6dbc11c], eax
        ret 
        UNREACHABLE_TRAP(0x6da8b10)
    }
}
