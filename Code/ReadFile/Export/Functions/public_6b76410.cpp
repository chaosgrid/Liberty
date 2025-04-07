#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76410);

PROC_DECLARE(0x6b76410, internal_6b76410, public_6b76410);
extern "C" NAKED register_t __cdecl internal_6b76410()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b7a224]
        push esi
        add eax, 0x154
        push eax
        call dword ptr ds : [public_6b79054]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+8]
        push ecx
        push edx
        call dword ptr ss : [esp+0x14]
        mov esi, eax
        mov eax, dword ptr ds : [public_6b7a224]
        add eax, 0x154
        push eax
        call dword ptr ds : [public_6b79050]
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6b76410)
    }
}
