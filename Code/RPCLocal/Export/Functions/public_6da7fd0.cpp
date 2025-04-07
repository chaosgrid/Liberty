#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da7fd0, internal_6da7fd0, public_6da7fd0);
extern "C" NAKED register_t __cdecl internal_6da7fd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db623c]
        mov dword ptr ds : [public_6dbc0dc], eax
        ret 
        UNREACHABLE_TRAP(0x6da7fd0)
    }
}
