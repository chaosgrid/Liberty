#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dcf2c);
CLANG_FORWARD_PROC_SYMBOL(public_65de5a0);
CLANG_FORWARD_PROC_SYMBOL(public_65df1f7);
CLANG_FORWARD_PROC_SYMBOL(public_65df4ea);

#define public_65df53a _public_65df53a
#define public_65df55d _public_65df55d
#define public_65df574 _public_65df574
#define public_65df589 _public_65df589
#define public_65df5ae _public_65df5ae
#define public_65df5c3 _public_65df5c3
#define public_65df5d0 _public_65df5d0
#define public_65df5d5 _public_65df5d5
#define public_65df5d7 _public_65df5d7
#define public_65df5dd _public_65df5dd
#define public_65df5e2 _public_65df5e2
#define public_65df5e9 _public_65df5e9
#define public_65df614 _public_65df614
#define public_65df628 _public_65df628
#define public_65df62e _public_65df62e
#define public_65df632 _public_65df632
#define public_65df645 _public_65df645
#define public_65df65d _public_65df65d
#define public_65df668 _public_65df668
#define public_65df6a1 _public_65df6a1
#define public_65df6a5 _public_65df6a5
#define public_65df6b7 _public_65df6b7
#define public_65df710 _public_65df710
#define public_65df714 _public_65df714
#define public_65df722 _public_65df722
#define public_65df753 _public_65df753
#define public_65df755 _public_65df755

PROC_DECLARE(0x65df4ea, internal_65df4ea, public_65df4ea);
extern "C" NAKED register_t __cdecl internal_65df4ea()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_65e1b40 @0x65df4ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1b40
/*FIXUP push offset _public_65dcf2c @0x65df4f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65dcf2c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        xor ebx, ebx
        cmp dword ptr ds : [public_65e649c], ebx
        push 1
        pop edi
        jne public_65df55d
        push edi
        mov eax, offset public_65e1b10
        push eax
        push edi
        push eax
        push ebx
        push ebx
        call dword ptr ds : [public_65e1020]
        test eax, eax
        je public_65df53a
        mov dword ptr ds : [public_65e649c], edi
        jmp public_65df55d
        public_65df53a : nop
        push edi
        mov eax, offset public_65e1b0c
        push eax
        push edi
        push eax
        push ebx
        push ebx
        call dword ptr ds : [public_65e1024]
        test eax, eax
        je public_65df753
        mov dword ptr ds : [public_65e649c], 2
        public_65df55d : nop
        mov esi, dword ptr ss : [ebp+0x14]
        cmp esi, ebx
        jle public_65df574
        push esi
        push dword ptr ss : [ebp+0x10]
        call public_65df1f7
        pop ecx
        pop ecx
        mov esi, eax
        mov dword ptr ss : [ebp+0x14], esi
        public_65df574 : nop
        cmp dword ptr ss : [ebp+0x1C], ebx
        jle public_65df589
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x18]
        call public_65df1f7
        pop ecx
        pop ecx
        mov dword ptr ss : [ebp+0x1C], eax
        public_65df589 : nop
        mov eax, dword ptr ds : [public_65e649c]
        cmp eax, 2
        jne public_65df5ae
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x18]
        push esi
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_65e1024]
        jmp public_65df755
        public_65df5ae : nop
        cmp eax, edi
        jne public_65df753
        cmp dword ptr ss : [ebp+0x20], ebx
        jne public_65df5c3
        mov eax, dword ptr ds : [public_65e63f8]
        mov dword ptr ss : [ebp+0x20], eax
        public_65df5c3 : nop
        cmp esi, ebx
        je public_65df5d0
        cmp dword ptr ss : [ebp+0x1C], ebx
        jne public_65df668
        public_65df5d0 : nop
        cmp esi, dword ptr ss : [ebp+0x1C]
        jne public_65df5dd
        public_65df5d5 : nop
        push 2
        public_65df5d7 : nop
        pop eax
        jmp public_65df755
        public_65df5dd : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jle public_65df5e9
        public_65df5e2 : nop
        mov eax, edi
        jmp public_65df755
        public_65df5e9 : nop
        cmp esi, edi
        jg public_65df62e
        lea eax, ss:[ebp-0x3C]
        push eax
        push dword ptr ss : [ebp+0x20]
        call dword ptr ds : [public_65e1104]
        test eax, eax
        je public_65df753
        cmp esi, ebx
        jle public_65df632
        cmp dword ptr ss : [ebp-0x3C], 2
        jb public_65df62e
        lea eax, ss:[ebp-0x36]
        cmp byte ptr ss : [ebp-0x36], bl
        je public_65df62e
        public_65df614 : nop
        mov dl, byte ptr ds : [eax+1]
        cmp dl, bl
        je public_65df62e
        mov ecx, dword ptr ss : [ebp+0x10]
        mov cl, byte ptr ds : [ecx]
        cmp cl, byte ptr ds : [eax]
        jb public_65df628
        cmp cl, dl
        jbe public_65df5d5
        public_65df628 : nop
        inc eax
        inc eax
        cmp byte ptr ds : [eax], bl
        jne public_65df614
        public_65df62e : nop
        push 3
        jmp public_65df5d7
        public_65df632 : nop
        cmp dword ptr ss : [ebp+0x1C], ebx
        jle public_65df668
        cmp dword ptr ss : [ebp-0x3C], 2
        jb public_65df5e2
        lea eax, ss:[ebp-0x36]
        cmp byte ptr ss : [ebp-0x36], bl
        je public_65df5e2
        public_65df645 : nop
        mov dl, byte ptr ds : [eax+1]
        cmp dl, bl
        je public_65df5e2
        mov ecx, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [ecx]
        cmp cl, byte ptr ds : [eax]
        jb public_65df65d
        cmp cl, dl
        jbe public_65df5d5
        public_65df65d : nop
        inc eax
        inc eax
        cmp byte ptr ds : [eax], bl
        jne public_65df645
        jmp public_65df5e2
        public_65df668 : nop
        push ebx
        push ebx
        push esi
        push dword ptr ss : [ebp+0x10]
        push 9
        push dword ptr ss : [ebp+0x20]
        call dword ptr ds : [public_65e10e8]
        mov dword ptr ss : [ebp-0x1C], eax
        cmp eax, ebx
        je public_65df753
        mov dword ptr ss : [ebp-4], ebx
        add eax, eax
        add eax, 3
        and al, 0xFC
        call public_65de5a0
        mov dword ptr ss : [ebp-0x18], esp
        mov eax, esp
        mov dword ptr ss : [ebp-0x24], eax
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        jmp public_65df6b7
        public_65df6a1 : nop
        push 1
        pop eax
        ret 
        public_65df6a5 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        xor ebx, ebx
        mov dword ptr ss : [ebp-0x24], ebx
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov esi, dword ptr ss : [ebp+0x14]
        push 1
        pop edi
        public_65df6b7 : nop
        cmp dword ptr ss : [ebp-0x24], ebx
        je public_65df753
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp-0x24]
        push esi
        push dword ptr ss : [ebp+0x10]
        push edi
        push dword ptr ss : [ebp+0x20]
        mov esi, dword ptr ds : [public_65e10e8]
        call esi
        test eax, eax
        je public_65df753
        push ebx
        push ebx
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x18]
        push 9
        push dword ptr ss : [ebp+0x20]
        call esi
        mov esi, eax
        mov dword ptr ss : [ebp-0x20], esi
        cmp esi, ebx
        je public_65df753
        mov dword ptr ss : [ebp-4], edi
        lea eax, ds:[esi+esi]
        add eax, 3
        and al, 0xFC
        call public_65de5a0
        mov dword ptr ss : [ebp-0x18], esp
        mov edi, esp
        mov dword ptr ss : [ebp-0x28], edi
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        jmp public_65df722
        public_65df710 : nop
        push 1
        pop eax
        ret 
        public_65df714 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        xor ebx, ebx
        xor edi, edi
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov esi, dword ptr ss : [ebp-0x20]
        public_65df722 : nop
        cmp edi, ebx
        je public_65df753
        push esi
        push edi
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x18]
        push 1
        push dword ptr ss : [ebp+0x20]
        call dword ptr ds : [public_65e10e8]
        test eax, eax
        je public_65df753
        push esi
        push edi
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp-0x24]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_65e1020]
        jmp public_65df755
        public_65df753 : nop
        xor eax, eax
        public_65df755 : nop
        lea esp, ss:[ebp-0x4C]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65df4ea)
        ASM_EXPORT_ENTRY_FIRST(0x65df6a1, public_65df6a1)
        ASM_EXPORT_ENTRY(0x65df6a5, public_65df6a5)
        ASM_EXPORT_ENTRY(0x65df710, public_65df710)
        ASM_EXPORT_ENTRY_LAST(0x65df714, public_65df714)
    }
}

#undef public_65df53a
#undef public_65df55d
#undef public_65df574
#undef public_65df589
#undef public_65df5ae
#undef public_65df5c3
#undef public_65df5d0
#undef public_65df5d5
#undef public_65df5d7
#undef public_65df5dd
#undef public_65df5e2
#undef public_65df5e9
#undef public_65df614
#undef public_65df628
#undef public_65df62e
#undef public_65df632
#undef public_65df645
#undef public_65df65d
#undef public_65df668
#undef public_65df6a1
#undef public_65df6a5
#undef public_65df6b7
#undef public_65df710
#undef public_65df714
#undef public_65df722
#undef public_65df753
#undef public_65df755

#pragma init_seg(compiler)
extern "C" void const* const public_65df6a1 = __AsmFindLabelExport(&internal_65df4ea, 0x65df6a1);
extern "C" void const* const public_65df6a5 = __AsmFindLabelExport(&internal_65df4ea, 0x65df6a5);
extern "C" void const* const public_65df710 = __AsmFindLabelExport(&internal_65df4ea, 0x65df710);
extern "C" void const* const public_65df714 = __AsmFindLabelExport(&internal_65df4ea, 0x65df714);
