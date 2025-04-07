#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f80);

PROC_DECLARE(0x6343f80, internal_6343f80, public_6343f80);
extern "C" NAKED register_t __cdecl internal_6343f80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        imul esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        call dword ptr ds : [public_6399328]
        mov edx, eax
        mov ecx, esi
        shr ecx, 2
        xor eax, eax
        mov edi, edx
        rep stosd
        mov ecx, esi
        add esp, 4
        and ecx, 3
        rep stosb
        pop edi
        mov eax, edx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6343f80)
    }
}
