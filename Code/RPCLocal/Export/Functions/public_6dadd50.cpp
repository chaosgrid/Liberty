#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dadd50, internal_6dadd50, public_6dadd50);
extern "C" NAKED register_t __cdecl internal_6dadd50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65a8]
        mov dword ptr ds : [public_6dbc3ac], eax
        ret 
        UNREACHABLE_TRAP(0x6dadd50)
    }
}
