#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daff90, internal_6daff90, public_6daff90);
extern "C" NAKED register_t __cdecl internal_6daff90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6710]
        mov dword ptr ds : [public_6dbc510], eax
        ret 
        UNREACHABLE_TRAP(0x6daff90)
    }
}
