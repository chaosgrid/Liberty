#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daee40, internal_6daee40, public_6daee40);
extern "C" NAKED register_t __cdecl internal_6daee40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6618]
        mov dword ptr ds : [public_6dbc444], eax
        ret 
        UNREACHABLE_TRAP(0x6daee40)
    }
}
