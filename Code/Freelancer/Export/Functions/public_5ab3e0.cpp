#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ab3e0);

PROC_DECLARE(0x5ab3e0, internal_5ab3e0, public_5ab3e0);
extern "C" NAKED register_t __cdecl internal_5ab3e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        add ecx, 0x1E8
        push ecx
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x5ab3e0)
    }
}
