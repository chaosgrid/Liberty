#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da7f20, internal_6da7f20, public_6da7f20);
extern "C" NAKED register_t __cdecl internal_6da7f20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db620c]
        mov dword ptr ds : [public_6dbc0b4], eax
        ret 
        UNREACHABLE_TRAP(0x6da7f20)
    }
}
