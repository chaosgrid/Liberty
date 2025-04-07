#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf340, internal_6daf340, public_6daf340);
extern "C" NAKED register_t __cdecl internal_6daf340()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6678]
        mov dword ptr ds : [public_6dbc4c0], eax
        ret 
        UNREACHABLE_TRAP(0x6daf340)
    }
}
