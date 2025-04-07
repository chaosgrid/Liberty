#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_435c90);

PROC_DECLARE(0x435c90, internal_435c90, public_435c90);
extern "C" NAKED register_t __cdecl internal_435c90()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0x90
        push esi
        push edi
        lea eax, ss:[esp+0x38]
        push eax
        call dword ptr ds : [public_5c60f4]
        mov ecx, dword ptr ss : [esp+0xA4]
        push eax
        push ecx
        lea edx, ss:[esp+0x70]
        push edx
        call dword ptr ds : [public_5c60f0]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0xA8]
        mov ecx, 0xC
        lea edi, ss:[esp+0x14]
        rep movsd
        add esp, 0xC
        mov ecx, 0xC
        lea esi, ss:[esp+8]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x90
        ret 
        UNREACHABLE_TRAP(0x435c90)
    }
}
