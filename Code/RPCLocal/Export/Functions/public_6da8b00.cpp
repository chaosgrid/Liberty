#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da8b00, internal_6da8b00, public_6da8b00);
extern "C" NAKED register_t __cdecl internal_6da8b00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6298]
        mov dword ptr ds : [public_6dbc124], eax
        ret 
        UNREACHABLE_TRAP(0x6da8b00)
    }
}
