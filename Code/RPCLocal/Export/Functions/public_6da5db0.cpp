#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5db0, internal_6da5db0, public_6da5db0);
extern "C" NAKED register_t __cdecl internal_6da5db0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db617c]
        mov dword ptr ds : [public_6dbbff0], eax
        ret 
        UNREACHABLE_TRAP(0x6da5db0)
    }
}
