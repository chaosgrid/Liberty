#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43a4f0);

PROC_DECLARE(0x43a4f0, internal_43a4f0, public_43a4f0);
extern "C" NAKED register_t __cdecl internal_43a4f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        call dword ptr ds : [public_5c616c]
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x43a4f0)
    }
}
