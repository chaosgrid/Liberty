#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634a4e0);
CLANG_FORWARD_PROC_SYMBOL(public_634a500);

PROC_DECLARE(0x6285e80, internal_6285e80, public_6285e80);
extern "C" NAKED register_t __cdecl internal_6285e80()
{
    __asm
    {
        sub esp, 0x54
        mov eax, dword ptr ss : [esp+0x5C]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x5C]
        push eax
        push ecx
        lea ecx, ss:[esp+0xC]
        call public_634a500
        mov edx, dword ptr ds : [esi+4]
        push edx
        lea ecx, ss:[esp+8]
        mov dword ptr ss : [esp+0x58], esi
        mov dword ptr ss : [esp+8], offset public_639baec
        call public_634a4e0
        pop esi
        add esp, 0x54
        ret 8
        UNREACHABLE_TRAP(0x6285e80)
    }
}
