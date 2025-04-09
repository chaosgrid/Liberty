#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4670);

PROC_DECLARE(0x5a5a90, internal_5a5a90, public_5a5a90);
extern "C" NAKED register_t __cdecl internal_5a5a90()
{
    __asm
    {
        push ecx
        call public_4c4670
        mov dword ptr ss : [esp], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        lea edx, ss:[esp+4]
        push edx
        push eax
        call dword ptr ds : [public_5c6c7c]
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x5a5a90)
    }
}
