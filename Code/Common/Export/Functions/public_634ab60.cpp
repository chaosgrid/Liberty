#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634a4e0);
CLANG_FORWARD_PROC_SYMBOL(public_634a500);

PROC_DECLARE(0x634ab60, internal_634ab60, public_634ab60);
extern "C" NAKED register_t __cdecl internal_634ab60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x50
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x58]
        push eax
        push ecx
        lea ecx, ss:[esp+0xC]
        call public_634a500
        mov edx, dword ptr ds : [esi+4]
        push edx
        lea ecx, ss:[esp+8]
        call public_634a4e0
        pop esi
        add esp, 0x50
        ret 8
        UNREACHABLE_TRAP(0x634ab60)
    }
}
