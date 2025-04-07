#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da7f10, internal_6da7f10, public_6da7f10);
extern "C" NAKED register_t __cdecl internal_6da7f10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db620c]
        mov dword ptr ds : [public_6dbc0b0], eax
        ret 
        UNREACHABLE_TRAP(0x6da7f10)
    }
}
