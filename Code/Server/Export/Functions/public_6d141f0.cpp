#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d141f0);

PROC_DECLARE(0x6d141f0, internal_6d141f0, public_6d141f0);
extern "C" NAKED register_t __cdecl internal_6d141f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6d643b4]
        add esp, 4
        ret 4
        UNREACHABLE_TRAP(0x6d141f0)
    }
}
