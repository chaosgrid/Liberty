#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7130);

PROC_DECLARE(0x6eb7130, internal_6eb7130, public_6eb7130);
extern "C" NAKED register_t __cdecl internal_6eb7130()
{
    __asm
    {
        sub esp, 0x30
        push esi
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [public_6fb3664]
        mov eax, dword ptr ss : [esp+0x48]
        add esp, 0xC
        mov ecx, 9
        lea esi, ss:[esp+0x14]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x6eb7130)
    }
}
