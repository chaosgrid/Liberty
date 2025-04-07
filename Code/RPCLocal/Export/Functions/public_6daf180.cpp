#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf180, internal_6daf180, public_6daf180);
extern "C" NAKED register_t __cdecl internal_6daf180()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6648]
        mov dword ptr ds : [public_6dbc484], eax
        ret 
        UNREACHABLE_TRAP(0x6daf180)
    }
}
