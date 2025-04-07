#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daa090, internal_6daa090, public_6daa090);
extern "C" NAKED register_t __cdecl internal_6daa090()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6308]
        mov dword ptr ds : [public_6dbc190], eax
        ret 
        UNREACHABLE_TRAP(0x6daa090)
    }
}
