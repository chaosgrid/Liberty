#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43600);
CLANG_FORWARD_PROC_SYMBOL(public_6d43820);

PROC_DECLARE(0x6d43820, internal_6d43820, public_6d43820);
extern "C" NAKED register_t __cdecl internal_6d43820()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d43600
        add esp, 4
        neg eax
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x6d43820)
    }
}
