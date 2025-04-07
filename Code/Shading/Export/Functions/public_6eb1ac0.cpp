#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1aed);

PROC_DECLARE(0x6eb1ac0, internal_6eb1ac0, public_6eb1ac0);
extern "C" NAKED register_t __cdecl internal_6eb1ac0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        test eax, eax
        je public_6eb1aed
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        push esi
        push eax
        push edi
        call dword ptr ds : [public_6ed1028]
        add esp, 0xC
        mov byte ptr ds : [edi+esi-1], 0
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6eb1ac0)
    }
}
