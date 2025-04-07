#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da8b30, internal_6da8b30, public_6da8b30);
extern "C" NAKED register_t __cdecl internal_6da8b30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db62a8]
        mov dword ptr ds : [public_6dbc134], eax
        ret 
        UNREACHABLE_TRAP(0x6da8b30)
    }
}
