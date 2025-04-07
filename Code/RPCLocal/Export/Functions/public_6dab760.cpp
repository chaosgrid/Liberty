#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dab760, internal_6dab760, public_6dab760);
extern "C" NAKED register_t __cdecl internal_6dab760()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6390]
        mov dword ptr ds : [public_6dbc204], eax
        ret 
        UNREACHABLE_TRAP(0x6dab760)
    }
}
