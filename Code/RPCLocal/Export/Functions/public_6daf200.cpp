#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf200, internal_6daf200, public_6daf200);
extern "C" NAKED register_t __cdecl internal_6daf200()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db666c]
        mov dword ptr ds : [public_6dbc4b0], eax
        ret 
        UNREACHABLE_TRAP(0x6daf200)
    }
}
