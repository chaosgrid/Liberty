#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daee60, internal_6daee60, public_6daee60);
extern "C" NAKED register_t __cdecl internal_6daee60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6624]
        mov dword ptr ds : [public_6dbc450], eax
        ret 
        UNREACHABLE_TRAP(0x6daee60)
    }
}
