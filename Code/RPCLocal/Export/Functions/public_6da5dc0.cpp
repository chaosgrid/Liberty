#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5dc0, internal_6da5dc0, public_6da5dc0);
extern "C" NAKED register_t __cdecl internal_6da5dc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db617c]
        mov dword ptr ds : [public_6dbbff4], eax
        ret 
        UNREACHABLE_TRAP(0x6da5dc0)
    }
}
