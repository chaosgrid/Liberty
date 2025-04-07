#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6715440);

PROC_DECLARE(0x6711440, internal_6711440, public_6711440);
extern "C" NAKED register_t __cdecl internal_6711440()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6715440
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6711440)
    }
}
