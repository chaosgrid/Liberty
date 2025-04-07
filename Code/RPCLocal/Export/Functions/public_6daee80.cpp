#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daee80, internal_6daee80, public_6daee80);
extern "C" NAKED register_t __cdecl internal_6daee80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6628]
        mov dword ptr ds : [public_6dbc44c], eax
        ret 
        UNREACHABLE_TRAP(0x6daee80)
    }
}
