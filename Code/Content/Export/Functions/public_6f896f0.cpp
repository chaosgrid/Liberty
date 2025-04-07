#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f322a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f32320);
CLANG_FORWARD_PROC_SYMBOL(public_6f51370);
CLANG_FORWARD_PROC_SYMBOL(public_6f521d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f89550);
CLANG_FORWARD_PROC_SYMBOL(public_6f89650);
CLANG_FORWARD_PROC_SYMBOL(public_6f98010);

#define public_6f8972a _public_6f8972a
#define public_6f89740 _public_6f89740
#define public_6f8975c _public_6f8975c
#define public_6f8977a _public_6f8977a
#define public_6f89790 _public_6f89790
#define public_6f897a0 _public_6f897a0
#define public_6f897ac _public_6f897ac
#define public_6f897d2 _public_6f897d2
#define public_6f897eb _public_6f897eb
#define public_6f89847 _public_6f89847
#define public_6f89857 _public_6f89857
#define public_6f89871 _public_6f89871
#define public_6f8987a _public_6f8987a
#define public_6f89882 _public_6f89882
#define public_6f89886 _public_6f89886
#define public_6f8988a _public_6f8988a
#define public_6f89896 _public_6f89896
#define public_6f898b0 _public_6f898b0
#define public_6f89900 _public_6f89900
#define public_6f8990c _public_6f8990c
#define public_6f89965 _public_6f89965
#define public_6f89977 _public_6f89977
#define public_6f8998d _public_6f8998d

PROC_DECLARE(0x6f896f0, internal_6f896f0, public_6f896f0);
extern "C" NAKED register_t __cdecl internal_6f896f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        push ebx
        push edi
        mov esi, ecx
        call public_6f89550
        test al, al
        jne public_6f89900
        lea eax, ds:[edi-3]
        cmp eax, 0xA
        ja public_6f8988a
/*FIXUP movzx eax, byte ptr ds : [eax+public_6f899e8] @0x6f8971c*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6f899d0] @0x6f89723*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c000000000055b6
  JMPTB mov eax, 0
  JMPTB public_4c000000000055b6 : nop
        je public_6f8972a
  JMPTB cmp eax, 1
  JMPTB jne public_4c000000000055b2
  JMPTB mov eax, 1
  JMPTB public_4c000000000055b2 : nop
        je public_6f8977a
  JMPTB cmp eax, 2
  JMPTB jne public_4c000000000055ae
  JMPTB mov eax, 2
  JMPTB public_4c000000000055ae : nop
        je public_6f897eb
  JMPTB cmp eax, 3
  JMPTB jne public_4c000000000055aa
  JMPTB mov eax, 3
  JMPTB public_4c000000000055aa : nop
        je public_6f898b0
  JMPTB cmp eax, 4
  JMPTB jne public_4c000000000055a6
  JMPTB mov eax, 5
  JMPTB public_4c000000000055a6 : nop
        je public_6f8988a
  JMPTB cmp eax, 5
  JMPTB jne public_4c000000000055a2
  JMPTB mov eax, 5
  JMPTB public_4c000000000055a2 : nop
        je public_6f8988a
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000559e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000559e : nop
        je public_6f8988a
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000559a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000559a : nop
        je public_6f8988a
  JMPTB cmp eax, 8
  JMPTB jne public_4c00000000005596
  JMPTB mov eax, 5
  JMPTB public_4c00000000005596 : nop
        je public_6f8988a
  JMPTB cmp eax, 9
  JMPTB jne public_4c00000000005592
  JMPTB mov eax, 5
  JMPTB public_4c00000000005592 : nop
        je public_6f8988a
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000558e
  JMPTB mov eax, 4
  JMPTB public_4c0000000000558e : nop
        je public_6f89965
  JMPTB int 3
        public_6f8972a : nop
        mov esi, dword ptr ds : [esi+0x188]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        je public_6f8988a
        lea ebx, ds:[ebx]
        public_6f89740 : nop
        mov ecx, dword ptr ds : [eax+0x4D8]
        test ecx, ecx
        je public_6f8975c
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        jne public_6f89740
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x14
        ret 8
        public_6f8975c : nop
        mov ecx, dword ptr ds : [eax+0x4D4]
        mov edx, dword ptr ds : [ecx+8]
        push edx
        mov ecx, ebx
        call dword ptr ds : [public_6fb3274]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6f8977a : nop
        mov esi, dword ptr ds : [esi+0x188]
        mov eax, dword ptr ds : [esi]
        xor ecx, ecx
        xor edi, edi
        cmp eax, esi
        je public_6f8988a
        mov edi, edi
        public_6f89790 : nop
        mov edx, dword ptr ds : [eax+0x4D8]
        cmp edx, 1
        je public_6f897a0
        cmp edx, 2
        jne public_6f897ac
        public_6f897a0 : nop
        mov edi, dword ptr ds : [eax+0x4D4]
        inc ecx
        cmp ecx, 1
        jg public_6f897d2
        public_6f897ac : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        jne public_6f89790
        test ecx, ecx
        je public_6f8988a
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_6fb3274]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6f897d2 : nop
        mov eax, dword ptr ds : [edi+8]
        inc eax
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6fb3274]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6f897eb : nop
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ds:[esi+0x120]
        xor ebp, ebp
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x34], ebp
        call public_6f89650
        mov ecx, dword ptr ss : [esp+0x28]
        cmp ecx, 1
        jg public_6f89882
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ds:[esi+0x1C4]
        push ecx
        mov ecx, esi
        call public_6f89650
        mov ecx, dword ptr ss : [esp+0x28]
        cmp ecx, 1
        jg public_6f89882
        mov esi, dword ptr ds : [esi+0x188]
        mov edi, dword ptr ds : [esi]
        cmp edi, esi
        je public_6f89882
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f89847 : nop
        mov eax, dword ptr ds : [edi+0x4F4]
        mov edx, dword ptr ds : [edi+0x4F8]
        cmp eax, edx
        je public_6f8987a
        public_6f89857 : nop
        cmp dword ptr ds : [eax+0xFC], 2
        jne public_6f89871
        add ecx, dword ptr ds : [eax+0x94]
        mov ebx, dword ptr ds : [eax+0x104]
        cmp ecx, 1
        jg public_6f8987a
        public_6f89871 : nop
        add eax, 0x108
        cmp eax, edx
        jne public_6f89857
        public_6f8987a : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, esi
        jne public_6f89847
        jmp public_6f89886
        public_6f89882 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f89886 : nop
        cmp ecx, ebp
        jne public_6f89896
        public_6f8988a : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x14
        ret 8
        public_6f89896 : nop
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x2C]
        push edx
        call dword ptr ds : [public_6fb3270]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6f898b0 : nop
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edi, ds:[esi+0x1F8]
        xor ebp, ebp
        lea ebx, ds:[esi+0x1E0]
        push edi
        push ebx
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x38], ebp
        call public_6f322a0
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0x10
        cmp eax, ebp
        je public_6f8990c
        cmp dword ptr ss : [esp+0x28], ebp
        je public_6f8990c
        mov edi, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ds : [public_6fb307c]
        push eax
        mov ecx, edi
        call esi
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        mov ecx, edi
        call esi
        public_6f89900 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6f8990c : nop
        lea eax, ss:[esp+0x14]
        push eax
        push edi
        push ebx
        mov dword ptr ss : [esp+0x20], ebp
        call public_6f32320
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        cmp eax, ebp
        je public_6f8988a
        add esi, 0x214
        push esi
        call public_6f51370
        add esp, 4
        mov ecx, eax
        call public_6f521d0
        mov edi, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ds : [public_6fb307c]
        push eax
        mov ecx, edi
        call esi
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, edi
        call esi
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 8
        public_6f89965 : nop
        mov al, byte ptr ds : [esi+0xF8]
        test al, al
        je public_6f89977
        lea eax, ds:[esi+0x130]
        jmp public_6f8998d
        public_6f89977 : nop
        mov al, byte ptr ds : [esi+0x19C]
        test al, al
        lea eax, ds:[esi+0x1D4]
        jne public_6f8998d
        lea eax, ds:[esi+0x178]
        public_6f8998d : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [esi+0x14]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x28], edx
        call public_6f98010
        add esp, 8
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x30], eax
        call dword ptr ds : [public_6fb326c]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6f896f0)
        ASM_EXPORT_ENTRY_FIRST(0x6f8972a, public_6f8972a)
        ASM_EXPORT_ENTRY(0x6f8977a, public_6f8977a)
        ASM_EXPORT_ENTRY(0x6f897eb, public_6f897eb)
        ASM_EXPORT_ENTRY(0x6f8988a, public_6f8988a)
        ASM_EXPORT_ENTRY(0x6f898b0, public_6f898b0)
        ASM_EXPORT_ENTRY_LAST(0x6f89965, public_6f89965)
    }
}

#undef public_6f8972a
#undef public_6f89740
#undef public_6f8975c
#undef public_6f8977a
#undef public_6f89790
#undef public_6f897a0
#undef public_6f897ac
#undef public_6f897d2
#undef public_6f897eb
#undef public_6f89847
#undef public_6f89857
#undef public_6f89871
#undef public_6f8987a
#undef public_6f89882
#undef public_6f89886
#undef public_6f8988a
#undef public_6f89896
#undef public_6f898b0
#undef public_6f89900
#undef public_6f8990c
#undef public_6f89965
#undef public_6f89977
#undef public_6f8998d

#pragma init_seg(compiler)
extern "C" void const* const public_6f8972a = __AsmFindLabelExport(&internal_6f896f0, 0x6f8972a);
extern "C" void const* const public_6f8977a = __AsmFindLabelExport(&internal_6f896f0, 0x6f8977a);
extern "C" void const* const public_6f897eb = __AsmFindLabelExport(&internal_6f896f0, 0x6f897eb);
extern "C" void const* const public_6f8988a = __AsmFindLabelExport(&internal_6f896f0, 0x6f8988a);
extern "C" void const* const public_6f898b0 = __AsmFindLabelExport(&internal_6f896f0, 0x6f898b0);
extern "C" void const* const public_6f89965 = __AsmFindLabelExport(&internal_6f896f0, 0x6f89965);
