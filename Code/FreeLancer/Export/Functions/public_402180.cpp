#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402180);

PROC_DECLARE(0x402180, internal_402180, public_402180);
extern "C" NAKED register_t __cdecl internal_402180()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        push 0x2000
        push esi
        call dword ptr ds : [public_5c71f0]
        add esp, 0x10
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x402180)
    }
}
