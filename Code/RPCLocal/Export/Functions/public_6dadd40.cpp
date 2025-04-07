#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dadd40, internal_6dadd40, public_6dadd40);
extern "C" NAKED register_t __cdecl internal_6dadd40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65a4]
        mov dword ptr ds : [public_6dbc3b4], eax
        ret 
        UNREACHABLE_TRAP(0x6dadd40)
    }
}
