#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e9770);

#define public_62e97be _public_62e97be
#define public_62e97c2 _public_62e97c2
#define public_62e97ed _public_62e97ed
#define public_62e97f1 _public_62e97f1
#define public_62e9804 _public_62e9804
#define public_62e9814 _public_62e9814
#define public_62e9825 _public_62e9825
#define public_62e9827 _public_62e9827
#define public_62e9850 _public_62e9850
#define public_62e9858 _public_62e9858
#define public_62e9860 _public_62e9860
#define public_62e9868 _public_62e9868
#define public_62e986e _public_62e986e
#define public_62e987f _public_62e987f
#define public_62e9881 _public_62e9881
#define public_62e98a6 _public_62e98a6
#define public_62e98b7 _public_62e98b7
#define public_62e98b9 _public_62e98b9
#define public_62e98d6 _public_62e98d6
#define public_62e98e7 _public_62e98e7
#define public_62e98e9 _public_62e98e9
#define public_62e990c _public_62e990c
#define public_62e990e _public_62e990e
#define public_62e9932 _public_62e9932
#define public_62e9934 _public_62e9934
#define public_62e9945 _public_62e9945
#define public_62e996f _public_62e996f
#define public_62e9971 _public_62e9971

PROC_DECLARE(0x62e9770, internal_62e9770, public_62e9770);
extern "C" NAKED register_t __cdecl internal_62e9770()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xC
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        xor eax, eax
        test esi, esi
        push edi
        mov ebp, ecx
        je public_62e9971
        mov edi, dword ptr ss : [esp+0x24]
        test edi, edi
        je public_62e9971
        mov dl, byte ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        and dl, 0xF8
        and ecx, 0xE0000000
        mov byte ptr ss : [esp+0x10], dl
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x14], ecx
        xor ecx, ecx
        test edx, edx
        mov dword ptr ss : [esp+0x24], ecx
        jle public_62e97f1
        lea eax, ds:[edi+8]
        jmp public_62e97c2
        public_62e97be : nop
        mov ecx, dword ptr ss : [esp+0x24]
        public_62e97c2 : nop
        mov cx, word ptr ds : [esi+ecx*2]
        cmp cx, word ptr ds : [public_63a4aa4]
        je public_62e97ed
        mov word ptr ds : [eax-8], cx
        mov ecx, dword ptr ss : [esp+0x24]
        inc ecx
        mov byte ptr ds : [eax-6], 0
        mov dword ptr ds : [eax], 5
        add eax, 0x20
        cmp ecx, edx
        mov dword ptr ss : [esp+0x24], ecx
        jl public_62e97be
        public_62e97ed : nop
        mov ecx, dword ptr ss : [esp+0x24]
        public_62e97f1 : nop
        test ecx, ecx
        jbe public_62e996f
        mov dword ptr ss : [esp+0x20], esi
        add edi, 8
        mov dword ptr ss : [esp+0xC], ecx
        public_62e9804 : nop
        mov al, byte ptr ss : [esp+0x28]
        test al, al
        je public_62e9814
        mov dword ptr ds : [edi], 3
        jmp public_62e986e
        public_62e9814 : nop
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e9825
        lea ecx, ds:[eax-8]
        jmp public_62e9827
        public_62e9825 : nop
        xor ecx, ecx
        public_62e9827 : nop
        mov eax, dword ptr ds : [ecx]
        push 0
        push 6
        lea edx, ds:[edi-8]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        call dword ptr ds : [eax+0x11C]
        test eax, eax
        jne public_62e986e
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, 3
        ja public_62e986e
/*FIXUP jmp dword ptr ds : [eax*4+public_62e997c] @0x62e9849*/
  JMPTB cmp eax, 0
  JMPTB je public_62e9850
  JMPTB cmp eax, 1
  JMPTB je public_62e9858
  JMPTB cmp eax, 2
  JMPTB je public_62e9860
  JMPTB cmp eax, 3
  JMPTB je public_62e9868
  JMPTB int 3
        public_62e9850 : nop
        mov dword ptr ds : [edi], 0
        jmp public_62e986e
        public_62e9858 : nop
        mov dword ptr ds : [edi], 1
        jmp public_62e986e
        public_62e9860 : nop
        mov dword ptr ds : [edi], 2
        jmp public_62e986e
        public_62e9868 : nop
        mov dword ptr ds : [edi], 4
        public_62e986e : nop
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e987f
        lea ecx, ds:[eax-8]
        jmp public_62e9881
        public_62e987f : nop
        xor ecx, ecx
        public_62e9881 : nop
        mov eax, dword ptr ds : [ecx]
        push 0
        push 9
        lea esi, ds:[edi-8]
        push esi
        lea edx, ss:[esp+0x28]
        push edx
        call dword ptr ds : [eax+0x11C]
        test eax, eax
        jne public_62e98a6
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        je public_62e98a6
        mov byte ptr ds : [edi-6], 1
        public_62e98a6 : nop
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e98b7
        lea ecx, ds:[eax-8]
        jmp public_62e98b9
        public_62e98b7 : nop
        xor ecx, ecx
        public_62e98b9 : nop
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0xA
        push esi
        lea edx, ss:[esp+0x28]
        push edx
        call dword ptr ds : [eax+0x11C]
        test eax, eax
        jne public_62e98d6
        mov al, byte ptr ss : [esp+0x1C]
        mov byte ptr ds : [edi-5], al
        public_62e98d6 : nop
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e98e7
        lea ecx, ds:[eax-8]
        jmp public_62e98e9
        public_62e98e7 : nop
        xor ecx, ecx
        public_62e98e9 : nop
        mov edx, dword ptr ds : [ecx]
        push esi
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [edx+0x118]
        test eax, eax
        jne public_62e9945
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e990c
        lea ecx, ds:[eax-8]
        jmp public_62e990e
        public_62e990c : nop
        xor ecx, ecx
        public_62e990e : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xBC]
        test al, al
        jne public_62e9945
        test byte ptr ss : [esp+0x10], 1
        jne public_62e9945
        mov eax, dword ptr ss : [ebp+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e9932
        add eax, 0xFFFFFFF8
        jmp public_62e9934
        public_62e9932 : nop
        xor eax, eax
        public_62e9934 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push 0xFFFFFFFF
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push 1
        push edx
        call dword ptr ds : [eax+0x4C]
        public_62e9945 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0xC]
        add ecx, 2
        add edi, 0x20
        dec eax
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0xC], eax
        jne public_62e9804
        mov eax, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 0x10
        public_62e996f : nop
        mov eax, ecx
        public_62e9971 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x62e9770)
        ASM_EXPORT_ENTRY_FIRST(0x62e9850, public_62e9850)
        ASM_EXPORT_ENTRY(0x62e9858, public_62e9858)
        ASM_EXPORT_ENTRY(0x62e9860, public_62e9860)
        ASM_EXPORT_ENTRY_LAST(0x62e9868, public_62e9868)
    }
}

#undef public_62e97be
#undef public_62e97c2
#undef public_62e97ed
#undef public_62e97f1
#undef public_62e9804
#undef public_62e9814
#undef public_62e9825
#undef public_62e9827
#undef public_62e9850
#undef public_62e9858
#undef public_62e9860
#undef public_62e9868
#undef public_62e986e
#undef public_62e987f
#undef public_62e9881
#undef public_62e98a6
#undef public_62e98b7
#undef public_62e98b9
#undef public_62e98d6
#undef public_62e98e7
#undef public_62e98e9
#undef public_62e990c
#undef public_62e990e
#undef public_62e9932
#undef public_62e9934
#undef public_62e9945
#undef public_62e996f
#undef public_62e9971

#pragma init_seg(compiler)
extern "C" void const* const public_62e9850 = __AsmFindLabelExport(&internal_62e9770, 0x62e9850);
extern "C" void const* const public_62e9858 = __AsmFindLabelExport(&internal_62e9770, 0x62e9858);
extern "C" void const* const public_62e9860 = __AsmFindLabelExport(&internal_62e9770, 0x62e9860);
extern "C" void const* const public_62e9868 = __AsmFindLabelExport(&internal_62e9770, 0x62e9868);
