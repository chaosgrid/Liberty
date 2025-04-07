#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daee70, internal_6daee70, public_6daee70);
extern "C" NAKED register_t __cdecl internal_6daee70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6624]
        mov dword ptr ds : [public_6dbc454], eax
        ret 
        UNREACHABLE_TRAP(0x6daee70)
    }
}
