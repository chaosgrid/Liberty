#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346890);
CLANG_FORWARD_PROC_SYMBOL(public_6350bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6350df0);

#define public_6346940 _public_6346940

PROC_DECLARE(0x6346890, internal_6346890, public_6346890);
extern "C" NAKED register_t __cdecl internal_6346890()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x60]
        shl eax, 0x18
        cmp eax, 0x8000000
        push edi
        jge public_6346940
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [esi+0x68]
        fadd dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [esi+0x6C]
        fst dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x40
        jne public_6346940
        fld dword ptr ss : [esp+0x1C]
        push ecx
        fmul dword ptr ds : [esi+0x70]
        lea ecx, ds:[esi+0xE4]
        lea edx, ds:[esi+0xD4]
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        lea ecx, ss:[esp+0x14]
        call public_6350df0
        mov edi, dword ptr ss : [esp+0x24]
        push edi
        lea ecx, ss:[esp+0xC]
        call public_6350bc0
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi+0xC8]
        fadd dword ptr ds : [esi+0xB8]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi+0xCC]
        fadd dword ptr ds : [esi+0xBC]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [esi+0xC4]
        fadd dword ptr ds : [esi+0xB4]
        mov dword ptr ds : [edi+0x38], eax
        fstp dword ptr ds : [edi+0x30]
        fstp dword ptr ds : [edi+0x34]
        pop edi
        pop esi
        add esp, 0x10
        ret 0xC
        public_6346940 : nop
        mov edi, dword ptr ss : [esp+0x24]
        add esi, 0xF4
        mov ecx, 0x10
        rep movsd
        pop edi
        pop esi
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6346890)
    }
}

#undef public_6346940
