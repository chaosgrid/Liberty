#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daaaf0, internal_6daaaf0, public_6daaaf0);
extern "C" NAKED register_t __cdecl internal_6daaaf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6338]
        mov dword ptr ds : [public_6dbc1c4], eax
        ret 
        UNREACHABLE_TRAP(0x6daaaf0)
    }
}
