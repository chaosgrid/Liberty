#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f48030);

PROC_DECLARE(0x6f48030, internal_6f48030, public_6f48030);
extern "C" NAKED register_t __cdecl internal_6f48030()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        lea edx, ss:[esp+4]
        push edx
        mov dword ptr ss : [esp+8], eax
        call dword ptr ds : [public_6fb35e4]
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6f48030)
    }
}
