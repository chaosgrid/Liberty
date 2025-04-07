#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_661c5e4 _public_661c5e4
#define public_661c5e6 _public_661c5e6
#define public_661c60c _public_661c60c
#define public_661c628 _public_661c628
#define public_661c674 _public_661c674

PROC_DECLARE(0x661c5c0, internal_661c5c0, public_661c5c0);
extern "C" NAKED register_t __cdecl internal_661c5c0()
{
    __asm
    {
        sub esp, 0x40
        push esi
        mov esi, ecx
        push edi
        test byte ptr ds : [esi+0x34], 2
        je public_661c60c
        fld dword ptr ds : [esi+0x28]
        fcomp qword ptr ds : [public_6629238]
        fnstsw ax
        test ah, 5
        jp public_661c5e4
        mov ecx, 1
        jmp public_661c5e6
        public_661c5e4 : nop
        xor ecx, ecx
        public_661c5e6 : nop
        mov eax, dword ptr ds : [esi+0x24]
        lea edi, ss:[esp+8]
        test cl, cl
        mov edx, dword ptr ds : [eax]
        push edi
        sete cl
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], edx
        jmp public_661c628
        public_661c60c : nop
        mov eax, dword ptr ds : [esi+0x24]
        lea edx, ss:[esp+0xC]
        push edx
        lea edx, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [esi+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        public_661c628 : nop
        fld dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        sub esp, 8
        fstp qword ptr ss : [esp]
        push ecx
        lea ecx, ss:[esp+0x38]
        push edx
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax]
        mov edi, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, edi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [public_662acf4]
        test eax, eax
        jne public_661c674
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661c674 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x3C]
        push edi
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi+0x60]
        mov eax, dword ptr ss : [esp+0x4C]
        pop edi
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [esi+0x64]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi+0x68]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ecx
        pop esi
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x661c5c0)
    }
}

#undef public_661c5e4
#undef public_661c5e6
#undef public_661c60c
#undef public_661c628
#undef public_661c674
