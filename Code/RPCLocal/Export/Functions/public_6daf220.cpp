#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf220, internal_6daf220, public_6daf220);
extern "C" NAKED register_t __cdecl internal_6daf220()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6670]
        mov dword ptr ds : [public_6dbc4ac], eax
        ret 
        UNREACHABLE_TRAP(0x6daf220)
    }
}
