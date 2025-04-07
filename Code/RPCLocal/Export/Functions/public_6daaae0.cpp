#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daaae0, internal_6daaae0, public_6daaae0);
extern "C" NAKED register_t __cdecl internal_6daaae0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6338]
        mov dword ptr ds : [public_6dbc1c0], eax
        ret 
        UNREACHABLE_TRAP(0x6daaae0)
    }
}
