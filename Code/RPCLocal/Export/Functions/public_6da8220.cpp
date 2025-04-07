#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da8220, internal_6da8220, public_6da8220);
extern "C" NAKED register_t __cdecl internal_6da8220()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6248]
        mov dword ptr ds : [public_6dbc0f4], eax
        ret 
        UNREACHABLE_TRAP(0x6da8220)
    }
}
