#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cd00);
CLANG_FORWARD_PROC_SYMBOL(public_42d4c0);

PROC_DECLARE(0x42d4c0, internal_42d4c0, public_42d4c0);
extern "C" NAKED register_t __cdecl internal_42d4c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        push esi
        call dword ptr ds : [public_5c60cc]
        add esp, 8
        mov ecx, esi
        call public_42cd00
        mov byte ptr ds : [esi+0x10], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x42d4c0)
    }
}
