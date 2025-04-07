#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da7f80, internal_6da7f80, public_6da7f80);
extern "C" NAKED register_t __cdecl internal_6da7f80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6228]
        mov dword ptr ds : [public_6dbc0d4], eax
        ret 
        UNREACHABLE_TRAP(0x6da7f80)
    }
}
