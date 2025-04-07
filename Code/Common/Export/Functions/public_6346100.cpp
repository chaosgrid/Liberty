#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346100);
CLANG_FORWARD_PROC_SYMBOL(public_6346170);
CLANG_FORWARD_PROC_SYMBOL(public_6346890);
CLANG_FORWARD_PROC_SYMBOL(public_6346c00);
CLANG_FORWARD_PROC_SYMBOL(public_6348470);
CLANG_FORWARD_PROC_SYMBOL(public_6366010);

PROC_DECLARE(0x6346100, internal_6346100, public_6346100);
extern "C" NAKED register_t __cdecl internal_6346100()
{
    __asm
    {
        sub esp, 0x60
        push esi
        push edi
        mov esi, ecx
        call public_6346170
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx+0xFC]
        mov edi, dword ptr ds : [esi+0x98]
        lea eax, ss:[esp+0x28]
        push eax
        mov eax, dword ptr ds : [ecx+0xF8]
        push edx
        push eax
        mov ecx, edi
        call public_6346890
        mov edx, dword ptr ss : [esp+0x6C]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        lea ecx, ss:[esp+0x30]
        call public_6348470
        mov esi, dword ptr ss : [esp+0x70]
        lea eax, ss:[esp+8]
        push eax
        push esi
        lea ecx, ss:[esp+0x30]
        call public_6366010
        push esi
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, edi
        call public_6346c00
        pop edi
        pop esi
        add esp, 0x60
        ret 8
        UNREACHABLE_TRAP(0x6346100)
    }
}
