#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daee90, internal_6daee90, public_6daee90);
extern "C" NAKED register_t __cdecl internal_6daee90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6630]
        mov dword ptr ds : [public_6dbc460], eax
        ret 
        UNREACHABLE_TRAP(0x6daee90)
    }
}
