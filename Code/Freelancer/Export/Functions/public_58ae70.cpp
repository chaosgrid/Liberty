#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0880);

#define public_58aedb _public_58aedb
#define public_58aee8 _public_58aee8
#define public_58af0c _public_58af0c
#define public_58af63 _public_58af63

PROC_DECLARE(0x58ae70, internal_58ae70, public_58ae70);
extern "C" NAKED register_t __cdecl internal_58ae70()
{
    __asm
    {
        sub esp, 0x24
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        mov ecx, edi
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x2E0]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax+8], ecx
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        mov byte ptr ds : [esi+0x328], 1
        call dword ptr ds : [edx+0xA4]
        mov al, byte ptr ds : [esi+0x378]
        test al, al
        jne public_58aedb
        fld dword ptr ds : [esi+0x32C]
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x330]
        fmul dword ptr ds : [public_5c75e0]
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        public_58aedb : nop
        test byte ptr ds : [esi+0x2F4], 1
        jne public_58aee8
        mov eax, edi
        jmp public_58af0c
        public_58aee8 : nop
        fld dword ptr ss : [esp+8]
        lea eax, ss:[esp+0x14]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x1C]
        public_58af0c : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], eax
        call public_5a0880
        fld dword ptr ds : [esi+0x32C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_58af63
        fld dword ptr ds : [esi+0xB0]
        mov eax, dword ptr ds : [esi+0x32C]
        fadd dword ptr ds : [esi+0x68]
        mov ecx, dword ptr ds : [esi+0x334]
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        call public_4145d0
        public_58af63 : nop
        pop edi
        pop esi
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x58ae70)
    }
}

#undef public_58aedb
#undef public_58aee8
#undef public_58af0c
#undef public_58af63
