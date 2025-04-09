#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4d70);

PROC_DECLARE(0x4c4d70, internal_4c4d70, public_4c4d70);
extern "C" NAKED register_t __cdecl internal_4c4d70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_673368], eax
        ret 
        UNREACHABLE_TRAP(0x4c4d70)
    }
}
