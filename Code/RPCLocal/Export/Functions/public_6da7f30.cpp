#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da7f30, internal_6da7f30, public_6da7f30);
extern "C" NAKED register_t __cdecl internal_6da7f30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6210]
        mov dword ptr ds : [public_6dbc0ac], eax
        ret 
        UNREACHABLE_TRAP(0x6da7f30)
    }
}
