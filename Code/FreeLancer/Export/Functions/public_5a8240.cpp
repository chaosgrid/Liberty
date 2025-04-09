#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ab380);

PROC_DECLARE(0x5a8240, internal_5a8240, public_5a8240);
extern "C" NAKED register_t __cdecl internal_5a8240()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, offset public_67e7b8
        call public_5ab380
        ret 8
        UNREACHABLE_TRAP(0x5a8240)
    }
}
