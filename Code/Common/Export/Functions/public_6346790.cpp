#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63461a0);
CLANG_FORWARD_PROC_SYMBOL(public_6346790);
CLANG_FORWARD_PROC_SYMBOL(public_6346cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);

#define public_63467ec _public_63467ec

PROC_DECLARE(0x6346790, internal_6346790, public_6346790);
extern "C" NAKED register_t __cdecl internal_6346790()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test ah, 3
        jne public_63467ec
        mov edx, dword ptr ss : [esp+0x40]
        push edi
        mov edi, dword ptr ss : [esp+0x3C]
        lea eax, ss:[esp+8]
        push eax
        mov eax, dword ptr ss : [esp+0x44]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_6346cf0
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        push edi
        mov ecx, esi
        call public_63461a0
        lea ecx, ss:[esp+0x28]
        call public_6347e60
        pop edi
        fdivr dword ptr ds : [public_63a53d0]
        pop esi
        add esp, 0x30
        ret 0xC
        public_63467ec : nop
        fld dword ptr ds : [public_63a53d0]
        pop esi
        add esp, 0x30
        ret 0xC
        UNREACHABLE_TRAP(0x6346790)
    }
}

#undef public_63467ec
