#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f611a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f767d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);

#define public_6f767e8 _public_6f767e8
#define public_6f767f6 _public_6f767f6
#define public_6f76832 _public_6f76832
#define public_6f76840 _public_6f76840
#define public_6f7684b _public_6f7684b
#define public_6f7684d _public_6f7684d
#define public_6f76879 _public_6f76879
#define public_6f76891 _public_6f76891
#define public_6f768b2 _public_6f768b2
#define public_6f768d0 _public_6f768d0
#define public_6f76900 _public_6f76900
#define public_6f7690b _public_6f7690b
#define public_6f7690d _public_6f7690d
#define public_6f76930 _public_6f76930
#define public_6f7693d _public_6f7693d
#define public_6f76941 _public_6f76941
#define public_6f76959 _public_6f76959

PROC_DECLARE(0x6f767d0, internal_6f767d0, public_6f767d0);
extern "C" NAKED register_t __cdecl internal_6f767d0()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [edi+4]
        mov ebp, ecx
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        cmp eax, ecx
        je public_6f767f6
        public_6f767e8 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], edx
        add eax, 4
        add esi, 4
        cmp eax, ecx
        jne public_6f767e8
        public_6f767f6 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        push esi
        mov ecx, edi
        call public_6ea1490
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_6fb5e84]
        mov dword ptr ds : [edi+8], esi
        mov edx, dword ptr ss : [ebp+0xEC]
        fnstsw ax
        test ah, 0x44
        mov eax, dword ptr ss : [ebp+0xF0]
        jp public_6f768b2
        cmp edx, eax
        mov dword ptr ss : [esp+0x24], edx
        je public_6f76959
        public_6f76832 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f7684b
        lea esp, ss:[esp]
        public_6f76840 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f7684d
        add eax, 4
        cmp eax, ecx
        jne public_6f76840
        public_6f7684b : nop
        mov eax, ecx
        public_6f7684d : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_6f76879
        lea edx, ss:[esp+0x24]
        push edx
        push ecx
        mov ecx, edi
        call public_6eb5770
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call public_6eb5f30
        mov dword ptr ss : [esp+0xC], eax
        mov byte ptr ss : [esp+0x10], 1
        jmp public_6f76891
        public_6f76879 : nop
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x28], 0
        call public_6fa6e80
        public_6f76891 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp+0xF0]
        add edx, 0x98
        cmp edx, eax
        mov dword ptr ss : [esp+0x24], edx
        jne public_6f76832
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 0xC
        public_6f768b2 : nop
        cmp edx, eax
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x20], edx
        fstp dword ptr ss : [esp+0x24]
        je public_6f76959
        mov esi, dword ptr ss : [esp+0x1C]
        mov edi, edi
        public_6f768d0 : nop
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ds:[edx+0x1C]
        push ecx
        add edx, 0x10
        push edx
        push esi
        call public_6f611a0
        fcomp dword ptr ss : [esp+0x34]
        add esp, 0x10
        fnstsw ax
        test ah, 5
        jp public_6f7693d
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0x20]
        je public_6f7690b
        nop 
        public_6f76900 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f7690d
        add eax, 4
        cmp eax, ecx
        jne public_6f76900
        public_6f7690b : nop
        mov eax, ecx
        public_6f7690d : nop
        cmp eax, ecx
        jne public_6f76941
        lea edx, ss:[esp+0x20]
        push edx
        push 1
        push ecx
        mov ecx, edi
        call public_6f937c0
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f7693d
        mov edx, dword ptr ss : [esp+0x20]
        mov edi, edi
        public_6f76930 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f76941
        add eax, 4
        cmp eax, ecx
        jne public_6f76930
        jmp public_6f76941
        public_6f7693d : nop
        mov edx, dword ptr ss : [esp+0x20]
        public_6f76941 : nop
        mov eax, dword ptr ss : [ebp+0xF0]
        add edx, 0x98
        cmp edx, eax
        mov dword ptr ss : [esp+0x20], edx
        jne public_6f768d0
        public_6f76959 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f767d0)
    }
}

#undef public_6f767e8
#undef public_6f767f6
#undef public_6f76832
#undef public_6f76840
#undef public_6f7684b
#undef public_6f7684d
#undef public_6f76879
#undef public_6f76891
#undef public_6f768b2
#undef public_6f768d0
#undef public_6f76900
#undef public_6f7690b
#undef public_6f7690d
#undef public_6f76930
#undef public_6f7693d
#undef public_6f76941
#undef public_6f76959
