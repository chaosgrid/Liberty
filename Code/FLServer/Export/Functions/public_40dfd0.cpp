#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419032);

PROC_DECLARE(0x40dfd0, internal_40dfd0, public_40dfd0);
extern "C" NAKED register_t __cdecl internal_40dfd0()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        push edi
        mov edx, ecx
        xor eax, eax
        mov ecx, 0xF
        lea edi, ss:[esp+8]
        rep stosd
        mov eax, dword ptr ss : [esp+0x48]
        sub esp, 0x3C
        mov edi, esp
        mov dword ptr ss : [esp+0x58], eax
        mov ecx, 0xF
        lea esi, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x44], 0x3C
        mov dword ptr ss : [esp+0x48], 0x40000000
        rep movsd
        mov ecx, edx
        call public_419032
        pop edi
        pop esi
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x40dfd0)
    }
}
