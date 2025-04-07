#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf800, internal_6daf800, public_6daf800);
extern "C" NAKED register_t __cdecl internal_6daf800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db66e8]
        mov dword ptr ds : [public_6dbc4f0], eax
        ret 
        UNREACHABLE_TRAP(0x6daf800)
    }
}
