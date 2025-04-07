#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daa230, internal_6daa230, public_6daa230);
extern "C" NAKED register_t __cdecl internal_6daa230()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db632c]
        mov dword ptr ds : [public_6dbc1ac], eax
        ret 
        UNREACHABLE_TRAP(0x6daa230)
    }
}
