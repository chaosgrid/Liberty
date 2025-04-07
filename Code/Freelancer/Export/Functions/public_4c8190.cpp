#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8190);

PROC_DECLARE(0x4c8190, internal_4c8190, public_4c8190);
extern "C" NAKED register_t __cdecl internal_4c8190()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_612274], eax
        ret 
        UNREACHABLE_TRAP(0x4c8190)
    }
}
