#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55bc30);
CLANG_FORWARD_PROC_SYMBOL(public_564610);

#define public_55cfbb _public_55cfbb
#define public_55cff0 _public_55cff0
#define public_55d011 _public_55d011
#define public_55d059 _public_55d059
#define public_55d071 _public_55d071
#define public_55d089 _public_55d089
#define public_55d0a6 _public_55d0a6
#define public_55d0f4 _public_55d0f4
#define public_55d101 _public_55d101
#define public_55d110 _public_55d110
#define public_55d140 _public_55d140
#define public_55d167 _public_55d167
#define public_55d177 _public_55d177
#define public_55d183 _public_55d183
#define public_55d18d _public_55d18d
#define public_55d196 _public_55d196
#define public_55d1ba _public_55d1ba
#define public_55d1c7 _public_55d1c7
#define public_55d1d6 _public_55d1d6
#define public_55d1e2 _public_55d1e2

PROC_DECLARE(0x55cf90, internal_55cf90, public_55cf90);
extern "C" NAKED register_t __cdecl internal_55cf90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x1C
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        push ebp
        push esi
        lea eax, ds:[ebx-6]
        cmp eax, 0x2B
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        ja public_55d1e2
/*FIXUP movzx eax, byte ptr ds : [eax+public_55d214] @0x55cfad*/
/*FIXUP jmp dword ptr ds : [eax*4+public_55d200] @0x55cfb4*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000cadc
  JMPTB mov eax, 0
  JMPTB public_4c0000000000cadc : nop
        je public_55cfbb
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000cad8
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cad8 : nop
        je public_55d1e2
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000cad4
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cad4 : nop
        je public_55d1e2
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000cad0
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cad0 : nop
        je public_55d1e2
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000cacc
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cacc : nop
        je public_55d1e2
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000cac8
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cac8 : nop
        je public_55d1e2
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000cac4
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cac4 : nop
        je public_55d1e2
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000cac0
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cac0 : nop
        je public_55d1e2
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000cabc
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cabc : nop
        je public_55d1e2
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000cab8
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cab8 : nop
        je public_55d1e2
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000cab4
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cab4 : nop
        je public_55d1e2
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000cab0
  JMPTB mov eax, 4
  JMPTB public_4c0000000000cab0 : nop
        je public_55d1e2
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000caac
  JMPTB mov eax, 4
  JMPTB public_4c0000000000caac : nop
        je public_55d1e2
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000caa8
  JMPTB mov eax, 4
  JMPTB public_4c0000000000caa8 : nop
        je public_55d1e2
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000caa4
  JMPTB mov eax, 4
  JMPTB public_4c0000000000caa4 : nop
        je public_55d1e2
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000caa0
  JMPTB mov eax, 4
  JMPTB public_4c0000000000caa0 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000ca9c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca9c : nop
        je public_55d1e2
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000ca98
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca98 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000ca94
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca94 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000ca90
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca90 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c0000000000ca8c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca8c : nop
        je public_55d1e2
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c0000000000ca88
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca88 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c0000000000ca84
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca84 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c0000000000ca80
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca80 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c0000000000ca7c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca7c : nop
        je public_55d1e2
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c0000000000ca78
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca78 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c0000000000ca74
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca74 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c0000000000ca70
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca70 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c0000000000ca6c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca6c : nop
        je public_55d1e2
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c0000000000ca68
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca68 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c0000000000ca64
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca64 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c0000000000ca60
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca60 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c0000000000ca5c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca5c : nop
        je public_55d1e2
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c0000000000ca58
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca58 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c0000000000ca54
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca54 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c0000000000ca50
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca50 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c0000000000ca4c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca4c : nop
        je public_55d1e2
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c0000000000ca48
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca48 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c0000000000ca44
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca44 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c0000000000ca40
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca40 : nop
        je public_55d1e2
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c0000000000ca3c
  JMPTB mov eax, 4
  JMPTB public_4c0000000000ca3c : nop
        je public_55d1e2
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c0000000000ca38
  JMPTB mov eax, 1
  JMPTB public_4c0000000000ca38 : nop
        je public_55d071
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c0000000000ca34
  JMPTB mov eax, 2
  JMPTB public_4c0000000000ca34 : nop
        je public_55d089
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c0000000000ca30
  JMPTB mov eax, 3
  JMPTB public_4c0000000000ca30 : nop
        je public_55d0a6
  JMPTB int 3
        public_55cfbb : nop
        mov edi, dword ptr ss : [esp+0x34]
        lea eax, ds:[esi+0xA8]
        mov ecx, edi
        mov ebp, dword ptr ds : [ecx]
        mov edx, eax
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebp
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        cmp dword ptr ds : [esi+0x84], 0xFFFFFFFF
        je public_55d059
        test byte ptr ds : [esi+0x2F4], 1
        jne public_55cff0
        lea eax, ds:[esi+0x60]
        jmp public_55d011
        public_55cff0 : nop
        fld dword ptr ds : [eax]
        fadd dword ptr ds : [esi+0x60]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [esi+0x64]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x14]
        fadd dword ptr ds : [esi+0x68]
        fstp dword ptr ss : [esp+0x1C]
        public_55d011 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x28], edx
        lea edx, ss:[esp+0x20]
        push edx
        mov edx, dword ptr ds : [esi+0x37C]
        mov dword ptr ss : [esp+0x28], ecx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+0x37C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_55d059 : nop
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        push edi
        mov ecx, esi
        push ebx
        call public_55bc30
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 0xC
        public_55d071 : nop
        mov ecx, dword ptr ds : [esi+0x3A0]
        mov edx, dword ptr ss : [esp+0x34]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        pop ebx
        add esp, 0x1C
        ret 0xC
        public_55d089 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        xor eax, eax
        test ecx, ecx
        sete al
        pop edi
        mov dword ptr ds : [esi+0x3A0], eax
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x1C
        ret 0xC
        public_55d0a6 : nop
        mov edi, dword ptr ss : [esp+0x34]
        test edi, edi
        je public_55d110
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        lea ebx, ds:[esi+0x3A4]
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_55d0f4
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x34]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ebx+8], ebp
        mov byte ptr ds : [eax+ebp], 0
        public_55d0f4 : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_55d101
        mov ebx, dword ptr ds : [public_5c7078]
        public_55d101 : nop
        push ebx
        call public_564610
        add esp, 4
        mov dword ptr ds : [esi+0x3C4], eax
        public_55d110 : nop
        mov edi, dword ptr ss : [esp+0x38]
        test edi, edi
        je public_55d1d6
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        lea ebx, ds:[esi+0x3B4]
        mov ebp, ecx
        mov ecx, ebx
        call dword ptr ds : [public_5c6f90]
        cmp eax, ebp
        jae public_55d140
        call dword ptr ds : [public_5c7070]
        public_55d140 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_55d167
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_55d167
        cmp cl, 0xFF
        je public_55d167
        test ebp, ebp
        jne public_55d18d
        dec cl
        mov byte ptr ds : [eax-1], cl
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        jmp public_55d1ba
        public_55d167 : nop
        test ebp, ebp
        jne public_55d177
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        jmp public_55d1ba
        public_55d177 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, 0x1F
        ja public_55d183
        cmp eax, ebp
        jae public_55d196
        public_55d183 : nop
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        public_55d18d : nop
        mov ecx, ebx
        push ebp
        call dword ptr ds : [public_5c7074]
        public_55d196 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov esi, dword ptr ss : [esp+0x38]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c706c]
        mov esi, dword ptr ss : [esp+0x10]
        public_55d1ba : nop
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        jne public_55d1c7
        mov ebx, dword ptr ds : [public_5c7078]
        public_55d1c7 : nop
        push ebx
        call public_564610
        add esp, 4
        mov dword ptr ds : [esi+0x3C8], eax
        public_55d1d6 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x1C
        ret 0xC
        public_55d1e2 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x34]
        push eax
        push ecx
        mov ecx, esi
        push ebx
        call public_55bc30
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 0xC
        UNREACHABLE_TRAP(0x55cf90)
        ASM_EXPORT_ENTRY_SINGLE(0x55d1e2, public_55d1e2)
    }
}

#undef public_55cfbb
#undef public_55cff0
#undef public_55d011
#undef public_55d059
#undef public_55d071
#undef public_55d089
#undef public_55d0a6
#undef public_55d0f4
#undef public_55d101
#undef public_55d110
#undef public_55d140
#undef public_55d167
#undef public_55d177
#undef public_55d183
#undef public_55d18d
#undef public_55d196
#undef public_55d1ba
#undef public_55d1c7
#undef public_55d1d6
#undef public_55d1e2

#pragma init_seg(compiler)
extern "C" void const* const public_55d1e2 = __AsmFindLabelExport(&internal_55cf90, 0x55d1e2);
