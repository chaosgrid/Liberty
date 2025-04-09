#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_595800);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x595800, internal_595800, public_595800);
extern "C" NAKED register_t __cdecl internal_595800()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_5e55ac
        mov dword ptr ds : [esi+0x7C], offset public_5e559c
        mov eax, dword ptr ds : [esi+0x3A4]
        push eax
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+0x3A4], eax
        mov dword ptr ds : [esi+0x3A8], eax
        mov dword ptr ds : [esi+0x3AC], eax
        mov ecx, esi
        pop esi
        jmp public_59fa50
        UNREACHABLE_TRAP(0x595800)
    }
}
