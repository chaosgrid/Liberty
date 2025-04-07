#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d09270);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b260);

#define public_6d04e71 _public_6d04e71
#define public_6d04f2d _public_6d04f2d
#define public_6d04f3a _public_6d04f3a
#define public_6d04f8c _public_6d04f8c

PROC_DECLARE(0x6d04e50, internal_6d04e50, public_6d04e50);
extern "C" NAKED register_t __cdecl internal_6d04e50()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0x7C]
        push edi
        fcomp dword ptr ds : [esi+0x80]
        fnstsw ax
        test ah, 5
        jp public_6d04e71
        fld dword ptr ss : [esp+0x48]
        fadd dword ptr ds : [esi+0x7C]
        fstp dword ptr ds : [esi+0x7C]
        public_6d04e71 : nop
        mov eax, dword ptr ds : [esi+0x68]
        xor edi, edi
        cmp eax, edi
        jbe public_6d04f8c
        fld dword ptr ds : [esi+0x7C]
        fcomp dword ptr ds : [esi+0x80]
        fnstsw ax
        test ah, 1
        jne public_6d04f8c
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], 4
        mov dword ptr ss : [esp+0x3C], edi
        mov dword ptr ss : [esp+0x40], edi
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], 7
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x30], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x78]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x34], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], ecx
        je public_6d04f3a
        fld dword ptr ds : [ecx+4]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        jne public_6d04f3a
        fld dword ptr ds : [ecx+8]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        je public_6d04f2d
        fld dword ptr ds : [ecx+0xC]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        je public_6d04f2d
        fld dword ptr ds : [ecx+0x10]
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        jne public_6d04f3a
        public_6d04f2d : nop
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, dword ptr ds : [esi+0x28]
        call public_6d0b260
        public_6d04f3a : nop
        fld dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [esi]
        fld st(0)
        mov ecx, esi
        fmul dword ptr ds : [esi+0x6C]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [esi+0x70]
        fstp dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [esi+0x74]
        fstp dword ptr ss : [esp+0x10]
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [esi+0x28]
        push eax
        mov dword ptr ss : [esp+0x24], edx
        call public_6d09270
        mov dword ptr ds : [esi+0x7C], edi
        public_6d04f8c : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x160]
        neg al
        pop edi
        pop esi
        sbb eax, eax
        inc eax
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x6d04e50)
    }
}

#undef public_6d04e71
#undef public_6d04f2d
#undef public_6d04f3a
#undef public_6d04f8c
