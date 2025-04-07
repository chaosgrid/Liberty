#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1ac0);
CLANG_FORWARD_PROC_SYMBOL(public_66f1b20);
CLANG_FORWARD_PROC_SYMBOL(public_66f1b80);
CLANG_FORWARD_PROC_SYMBOL(public_66f2420);
CLANG_FORWARD_PROC_SYMBOL(public_66f24a0);
CLANG_FORWARD_PROC_SYMBOL(public_66f29b0);
CLANG_FORWARD_PROC_SYMBOL(public_66f30a0);
CLANG_FORWARD_PROC_SYMBOL(public_66f3160);
CLANG_FORWARD_JUMP_SYMBOL(public_6700ac8);

#define public_66f24e0 _public_66f24e0
#define public_66f250b _public_66f250b
#define public_66f2513 _public_66f2513
#define public_66f251a _public_66f251a
#define public_66f2528 _public_66f2528
#define public_66f2530 _public_66f2530
#define public_66f253e _public_66f253e
#define public_66f254c _public_66f254c
#define public_66f2552 _public_66f2552
#define public_66f2567 _public_66f2567
#define public_66f25e2 _public_66f25e2
#define public_66f2666 _public_66f2666
#define public_66f266f _public_66f266f
#define public_66f2682 _public_66f2682
#define public_66f26ee _public_66f26ee
#define public_66f26f0 _public_66f26f0
#define public_66f26f7 _public_66f26f7
#define public_66f2704 _public_66f2704
#define public_66f270a _public_66f270a
#define public_66f271d _public_66f271d
#define public_66f2732 _public_66f2732
#define public_66f279e _public_66f279e
#define public_66f27a0 _public_66f27a0
#define public_66f27a7 _public_66f27a7
#define public_66f27ba _public_66f27ba
#define public_66f2838 _public_66f2838
#define public_66f283a _public_66f283a
#define public_66f2841 _public_66f2841
#define public_66f2854 _public_66f2854
#define public_66f28a7 _public_66f28a7
#define public_66f28ae _public_66f28ae
#define public_66f28e0 _public_66f28e0
#define public_66f2914 _public_66f2914
#define public_66f2941 _public_66f2941

PROC_DECLARE(0x66f24a0, internal_66f24a0, public_66f24a0);
extern "C" NAKED register_t __cdecl internal_66f24a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6700ac8 @0x66f24a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700ac8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x4C
        push ebx
        push ebp
        push esi
        xor ebp, ebp
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x18], ebp
        mov esi, dword ptr ss : [esp+0x70]
        mov ebx, dword ptr ds : [esi+0x10]
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x64], ebp
        je public_66f24e0
        lea ecx, ss:[esp+0x14]
        call public_66f1ac0
        public_66f24e0 : nop
        mov ecx, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], ebx
        call dword ptr ds : [eax+0x70]
        cmp eax, ebp
        je public_66f270a
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edx-1]
        cmp ecx, 9
        ja public_66f2552
/*FIXUP jmp dword ptr ds : [ecx*4+public_66f295c] @0x66f2504*/
  JMPTB cmp ecx, 0
  JMPTB je public_66f2528
  JMPTB cmp ecx, 1
  JMPTB je public_66f250b
  JMPTB cmp ecx, 2
  JMPTB je public_66f251a
  JMPTB cmp ecx, 3
  JMPTB je public_66f2513
  JMPTB cmp ecx, 4
  JMPTB je public_66f2530
  JMPTB cmp ecx, 5
  JMPTB je public_66f253e
  JMPTB cmp ecx, 6
  JMPTB je public_66f2530
  JMPTB cmp ecx, 7
  JMPTB je public_66f2528
  JMPTB cmp ecx, 8
  JMPTB je public_66f250b
  JMPTB cmp ecx, 9
  JMPTB je public_66f254c
  JMPTB int 3
        public_66f250b : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        jmp public_66f2552
        public_66f2513 : nop
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x24], edx
        public_66f251a : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], edx
        public_66f2528 : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], eax
        jmp public_66f2552
        public_66f2530 : nop
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_66f1b20
        jmp public_66f2552
        public_66f253e : nop
        mov edx, dword ptr ds : [eax]
        push edx
        lea ecx, ss:[esp+0x18]
        call public_66f1b80
        jmp public_66f2552
        public_66f254c : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], edx
        public_66f2552 : nop
        mov eax, dword ptr ss : [esp+0x14]
        dec eax
        cmp eax, 8
        ja public_66f2941
/*FIXUP jmp dword ptr ds : [eax*4+public_66f2984] @0x66f2560*/
  JMPTB cmp eax, 0
  JMPTB je public_66f2567
  JMPTB cmp eax, 1
  JMPTB je public_66f25e2
  JMPTB cmp eax, 2
  JMPTB je public_66f2682
  JMPTB cmp eax, 3
  JMPTB je public_66f2732
  JMPTB cmp eax, 4
  JMPTB je public_66f27ba
  JMPTB cmp eax, 5
  JMPTB je public_66f2941
  JMPTB cmp eax, 6
  JMPTB je public_66f27ba
  JMPTB cmp eax, 7
  JMPTB je public_66f2854
  JMPTB cmp eax, 8
  JMPTB je public_66f28e0
  JMPTB int 3
        public_66f2567 : nop
        mov esi, dword ptr ds : [esi+4]
/*FIXUP push offset public_67013dc @0x66f256a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013dc
        push ebp
        lea ecx, ss:[esp+0x30]
        call public_66f2420
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x34], esi
        mov esi, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ds : [esi]
        push edx
        push esi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x38], offset public_67013e8
        mov dword ptr ss : [esp+0x40], 0xC0000000
        mov dword ptr ss : [esp+0x4C], 2
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_66f27a7
        mov eax, dword ptr ds : [esi]
        push ebp
        lea ecx, ss:[esp+0x74]
        push ecx
        push 4
        lea edx, ss:[esp+0x24]
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+0x18]
        test eax, eax
        je public_66f279e
        cmp dword ptr ss : [esp+0x70], 4
        jne public_66f279e
        mov ebx, 1
        jmp public_66f27a0
        public_66f25e2 : nop
        mov esi, dword ptr ds : [esi+4]
/*FIXUP push offset public_67013dc @0x66f25e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013dc
        push ebp
        lea ecx, ss:[esp+0x30]
        call public_66f2420
        lea eax, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x34], esi
        mov esi, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ds : [esi]
        push eax
        push esi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x38], offset public_67013e8
        mov dword ptr ss : [esp+0x40], 0xC0000000
        mov dword ptr ss : [esp+0x4C], 2
        call dword ptr ds : [edx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_66f266f
        mov ecx, dword ptr ds : [esi]
        push ebp
        lea edx, ss:[esp+0x74]
        push edx
        push 4
        lea eax, ss:[esp+0x24]
        push eax
        push edi
        push esi
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        je public_66f2666
        cmp dword ptr ss : [esp+0x70], 4
        jne public_66f2666
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        mov ebx, 1
        call dword ptr ds : [ecx+0x10]
        xor edx, edx
        cmp ebx, ebp
        setne dl
        dec edx
        test edx, 0x80004005
        jmp public_66f2704
        public_66f2666 : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        xor ebx, ebx
        call dword ptr ds : [ecx+0x10]
        public_66f266f : nop
        xor edx, edx
        cmp ebx, ebp
        setne dl
        dec edx
        test edx, 0x80004005
        jmp public_66f2704
        public_66f2682 : nop
        mov esi, dword ptr ds : [esi+4]
/*FIXUP push offset public_67013dc @0x66f2685*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013dc
        push ebp
        lea ecx, ss:[esp+0x30]
        call public_66f2420
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x34], esi
        mov esi, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x38], offset public_67013e8
        mov dword ptr ss : [esp+0x40], 0xC0000000
        mov dword ptr ss : [esp+0x4C], 2
        call dword ptr ds : [eax+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_66f26f7
        mov edx, dword ptr ds : [esi]
        push ebp
        lea eax, ss:[esp+0x74]
        push eax
        push 0xC
        lea ecx, ss:[esp+0x24]
        push ecx
        push edi
        push esi
        call dword ptr ds : [edx+0x18]
        test eax, eax
        je public_66f26ee
        cmp dword ptr ss : [esp+0x70], 0xC
        jne public_66f26ee
        mov ebx, 1
        jmp public_66f26f0
        public_66f26ee : nop
        xor ebx, ebx
        public_66f26f0 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x10]
        public_66f26f7 : nop
        xor eax, eax
        cmp ebx, ebp
        setne al
        dec eax
        test eax, 0x80004005
        public_66f2704 : nop
        jge public_66f2941
        public_66f270a : nop
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        call public_66f1ac0
        xor al, al
        public_66f271d : nop
        mov ecx, dword ptr ss : [esp+0x5C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x58
        ret 0xC
        public_66f2732 : nop
        mov esi, dword ptr ds : [esi+4]
/*FIXUP push offset public_67013dc @0x66f2735*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013dc
        push ebp
        lea ecx, ss:[esp+0x30]
        call public_66f2420
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x34], esi
        mov esi, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ds : [esi]
        push edx
        push esi
        xor ebx, ebx
        mov dword ptr ss : [esp+0x38], offset public_67013e8
        mov dword ptr ss : [esp+0x40], 0xC0000000
        mov dword ptr ss : [esp+0x4C], 2
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_66f27a7
        mov eax, dword ptr ds : [esi]
        push ebp
        lea ecx, ss:[esp+0x74]
        push ecx
        push 0x10
        lea edx, ss:[esp+0x24]
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+0x18]
        test eax, eax
        je public_66f279e
        cmp dword ptr ss : [esp+0x70], 0x10
        jne public_66f279e
        mov ebx, 1
        jmp public_66f27a0
        public_66f279e : nop
        xor ebx, ebx
        public_66f27a0 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        public_66f27a7 : nop
        xor ecx, ecx
        cmp ebx, ebp
        setne cl
        dec ecx
        test ecx, 0x80004005
        jmp public_66f2704
        public_66f27ba : nop
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [esi+4]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov dword ptr ss : [esp+0x70], edi
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
/*FIXUP push offset public_67013dc @0x66f27d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013dc
        push ebp
        lea ecx, ss:[esp+0x30]
        inc edi
        call public_66f2420
        lea eax, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x34], esi
        mov esi, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ds : [esi]
        push eax
        push esi
        mov dword ptr ss : [esp+0x38], offset public_67013e8
        mov dword ptr ss : [esp+0x40], 0xC0000000
        mov dword ptr ss : [esp+0x4C], 2
        call dword ptr ds : [edx+0x7C]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        je public_66f2841
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ds : [esi]
        push 0
        lea edx, ss:[esp+0x78]
        push edx
        push edi
        push eax
        push ebx
        push esi
        call dword ptr ds : [ecx+0x18]
        test eax, eax
        je public_66f2838
        cmp dword ptr ss : [esp+0x74], edi
        jne public_66f2838
        mov ebp, 1
        jmp public_66f283a
        public_66f2838 : nop
        xor ebp, ebp
        public_66f283a : nop
        mov ecx, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [ecx+0x10]
        public_66f2841 : nop
        xor edx, edx
        test ebp, ebp
        setne dl
        dec edx
        test edx, 0x80004005
        jmp public_66f2704
        public_66f2854 : nop
        mov eax, dword ptr ds : [esi+4]
/*FIXUP push offset public_67013dc @0x66f2857*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013dc
        push eax
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x78], ebp
        call public_66f2420
        mov edi, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x28]
        push ecx
        push edi
        call dword ptr ds : [eax+0x7C]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        je public_66f28ae
        mov edx, dword ptr ds : [edi]
        push ebp
        lea eax, ss:[esp+0x78]
        push eax
        push 4
        lea ecx, ss:[esp+0x1C]
        push ecx
        push ebx
        push edi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_66f28a7
        cmp dword ptr ss : [esp+0x74], 4
        jne public_66f28a7
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x70], edx
        public_66f28a7 : nop
        mov eax, dword ptr ds : [edi]
        push ebx
        push edi
        call dword ptr ds : [eax+0x10]
        public_66f28ae : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x70]
        shl ecx, 4
        xor ecx, eax
        and ecx, 0xF0
        xor eax, ecx
        lea edx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x70], eax
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        push edi
        call public_66f3160
        add esp, 0xC
        test eax, eax
        jmp public_66f2704
        public_66f28e0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ss : [esp+0x6C]
        lea ecx, ss:[esp+0x74]
        push ecx
        push edx
        push ebx
        mov dword ptr ss : [esp+0x80], ebp
        xor edi, edi
        call public_66f30a0
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        test eax, 0x20000
        jne public_66f2914
        test eax, 0x40000
        je public_66f2914
        mov edi, 1
        public_66f2914 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push edi
        push eax
        lea ecx, ss:[esp+0x7C]
        push ecx
        call public_66f29b0
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x80]
        push edx
        push eax
        push ebx
        call public_66f3160
        add esp, 0x18
        test eax, eax
        jl public_66f270a
        public_66f2941 : nop
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        call public_66f1ac0
        mov al, 1
        jmp public_66f271d
        UNREACHABLE_TRAP(0x66f24a0)
        ASM_EXPORT_ENTRY_FIRST(0x66f250b, public_66f250b)
        ASM_EXPORT_ENTRY(0x66f2513, public_66f2513)
        ASM_EXPORT_ENTRY(0x66f251a, public_66f251a)
        ASM_EXPORT_ENTRY(0x66f2528, public_66f2528)
        ASM_EXPORT_ENTRY(0x66f2530, public_66f2530)
        ASM_EXPORT_ENTRY(0x66f253e, public_66f253e)
        ASM_EXPORT_ENTRY(0x66f254c, public_66f254c)
        ASM_EXPORT_ENTRY(0x66f2567, public_66f2567)
        ASM_EXPORT_ENTRY(0x66f25e2, public_66f25e2)
        ASM_EXPORT_ENTRY(0x66f2682, public_66f2682)
        ASM_EXPORT_ENTRY(0x66f2732, public_66f2732)
        ASM_EXPORT_ENTRY(0x66f27ba, public_66f27ba)
        ASM_EXPORT_ENTRY(0x66f2854, public_66f2854)
        ASM_EXPORT_ENTRY(0x66f28e0, public_66f28e0)
        ASM_EXPORT_ENTRY_LAST(0x66f2941, public_66f2941)
    }
}

#undef public_66f24e0
#undef public_66f250b
#undef public_66f2513
#undef public_66f251a
#undef public_66f2528
#undef public_66f2530
#undef public_66f253e
#undef public_66f254c
#undef public_66f2552
#undef public_66f2567
#undef public_66f25e2
#undef public_66f2666
#undef public_66f266f
#undef public_66f2682
#undef public_66f26ee
#undef public_66f26f0
#undef public_66f26f7
#undef public_66f2704
#undef public_66f270a
#undef public_66f271d
#undef public_66f2732
#undef public_66f279e
#undef public_66f27a0
#undef public_66f27a7
#undef public_66f27ba
#undef public_66f2838
#undef public_66f283a
#undef public_66f2841
#undef public_66f2854
#undef public_66f28a7
#undef public_66f28ae
#undef public_66f28e0
#undef public_66f2914
#undef public_66f2941

#pragma init_seg(compiler)
extern "C" void const* const public_66f250b = __AsmFindLabelExport(&internal_66f24a0, 0x66f250b);
extern "C" void const* const public_66f2513 = __AsmFindLabelExport(&internal_66f24a0, 0x66f2513);
extern "C" void const* const public_66f251a = __AsmFindLabelExport(&internal_66f24a0, 0x66f251a);
extern "C" void const* const public_66f2528 = __AsmFindLabelExport(&internal_66f24a0, 0x66f2528);
extern "C" void const* const public_66f2530 = __AsmFindLabelExport(&internal_66f24a0, 0x66f2530);
extern "C" void const* const public_66f253e = __AsmFindLabelExport(&internal_66f24a0, 0x66f253e);
extern "C" void const* const public_66f254c = __AsmFindLabelExport(&internal_66f24a0, 0x66f254c);
extern "C" void const* const public_66f2567 = __AsmFindLabelExport(&internal_66f24a0, 0x66f2567);
extern "C" void const* const public_66f25e2 = __AsmFindLabelExport(&internal_66f24a0, 0x66f25e2);
extern "C" void const* const public_66f2682 = __AsmFindLabelExport(&internal_66f24a0, 0x66f2682);
extern "C" void const* const public_66f2732 = __AsmFindLabelExport(&internal_66f24a0, 0x66f2732);
extern "C" void const* const public_66f27ba = __AsmFindLabelExport(&internal_66f24a0, 0x66f27ba);
extern "C" void const* const public_66f2854 = __AsmFindLabelExport(&internal_66f24a0, 0x66f2854);
extern "C" void const* const public_66f28e0 = __AsmFindLabelExport(&internal_66f24a0, 0x66f28e0);
extern "C" void const* const public_66f2941 = __AsmFindLabelExport(&internal_66f24a0, 0x66f2941);
