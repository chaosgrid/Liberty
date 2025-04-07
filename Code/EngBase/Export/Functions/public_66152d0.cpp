#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66152d0);
CLANG_FORWARD_PROC_SYMBOL(public_66156f0);
CLANG_FORWARD_PROC_SYMBOL(public_6617220);
CLANG_FORWARD_PROC_SYMBOL(public_6617260);
CLANG_FORWARD_PROC_SYMBOL(public_661b070);
CLANG_FORWARD_PROC_SYMBOL(public_661d0b0);
CLANG_FORWARD_PROC_SYMBOL(public_661d0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6628190);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_66152f0 _public_66152f0
#define public_66152fd _public_66152fd
#define public_6615300 _public_6615300
#define public_6615308 _public_6615308
#define public_6615316 _public_6615316
#define public_6615372 _public_6615372
#define public_661539c _public_661539c
#define public_66153a7 _public_66153a7
#define public_66153c5 _public_66153c5
#define public_66153e7 _public_66153e7
#define public_66153fd _public_66153fd
#define public_661540a _public_661540a
#define public_661545c _public_661545c
#define public_6615473 _public_6615473
#define public_6615479 _public_6615479
#define public_6615488 _public_6615488
#define public_661548e _public_661548e
#define public_66154a4 _public_66154a4
#define public_66154a7 _public_66154a7
#define public_66154c3 _public_66154c3
#define public_66154c6 _public_66154c6
#define public_66154d5 _public_66154d5
#define public_66154e1 _public_66154e1
#define public_66154e5 _public_66154e5
#define public_66154f6 _public_66154f6
#define public_661550d _public_661550d
#define public_6615523 _public_6615523
#define public_6615526 _public_6615526
#define public_661552a _public_661552a
#define public_6615578 _public_6615578
#define public_661559d _public_661559d
#define public_66155a4 _public_66155a4
#define public_66155ab _public_66155ab
#define public_66155b2 _public_66155b2
#define public_66155b9 _public_66155b9
#define public_66155c0 _public_66155c0
#define public_66155c2 _public_66155c2
#define public_6615608 _public_6615608
#define public_6615631 _public_6615631
#define public_661564a _public_661564a
#define public_6615651 _public_6615651
#define public_661565a _public_661565a
#define public_661565d _public_661565d
#define public_6615673 _public_6615673
#define public_6615679 _public_6615679
#define public_6615688 _public_6615688
#define public_661568e _public_661568e
#define public_661569e _public_661569e
#define public_66156a4 _public_66156a4

PROC_DECLARE(0x66152d0, internal_66152d0, public_66152d0);
extern "C" NAKED register_t __cdecl internal_66152d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x54C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x55C]
        xor ebx, ebx
        push esi
        push edi
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x10], ebx
        mov eax, ecx
        test eax, eax
        je public_6615308
        public_66152f0 : nop
        mov dword ptr ss : [esp+ebx*4+0x58], eax
        inc ebx
        test eax, eax
        jne public_66152fd
        mov eax, ecx
        jmp public_6615300
        public_66152fd : nop
        mov eax, dword ptr ds : [eax+0xC]
        public_6615300 : nop
        test eax, eax
        jne public_66152f0
        mov dword ptr ss : [esp+0x10], ebx
        public_6615308 : nop
        xor eax, eax
        test ebx, ebx
        mov dword ptr ss : [esp+0x14], eax
        jle public_66154f6
        public_6615316 : nop
        mov esi, dword ptr ss : [esp+eax*4+0x58]
        mov ecx, dword ptr ss : [esp+0x568]
        push ecx
        mov ecx, esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax]
        mov edx, 1
        cmp eax, edx
        jne public_66154e5
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        jne public_66153c5
        test byte ptr ds : [esi+0x20], 2
        je public_6615372
        mov edi, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [public_662acec]
        mov edx, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x560]
        mov edx, dword ptr ds : [edx+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x90]
        mov ecx, dword ptr ds : [edi+0x14]
        push eax
        call dword ptr ds : [ebx+0x20]
        mov ebx, dword ptr ss : [esp+0x10]
        public_6615372 : nop
        test byte ptr ds : [esi+0x20], 1
        je public_66153e7
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [edi+4]
        cmp eax, 1
        jne public_661539c
        push eax
        push edi
        mov ecx, ebp
        call public_66156f0
        push esi
        mov ecx, ebp
        call public_6617260
        jmp public_66154e5
        public_661539c : nop
        test eax, eax
        jne public_66153a7
        mov eax, dword ptr ds : [edi+0x14]
        or dword ptr ds : [eax+0x34], 2
        public_66153a7 : nop
        push edi
        mov ecx, ebp
        call public_6617220
        push edi
        call public_66281d0
        add esp, 4
        mov ecx, ebp
        push esi
        call public_6617260
        jmp public_66154e5
        public_66153c5 : nop
        test eax, eax
        jne public_66154e5
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_661540a
        mov edi, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp edi, edx
        je public_66153fd
        test ecx, ecx
        je public_66153e7
        cmp dword ptr ds : [ecx+4], edx
        je public_66153fd
        public_66153e7 : nop
        push esi
        mov ecx, ebp
        call public_6617220
        push esi
        call public_66281d0
        add esp, 4
        jmp public_66154e5
        public_66153fd : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call public_661b070
        jmp public_66154e5
        public_661540a : nop
        mov ebx, dword ptr ds : [esi+8]
        xor edi, edi
        cmp ebx, edi
        je public_66154d5
        push 0x48
        call public_66281dc
        add esp, 4
        cmp eax, edi
        je public_661545c
        fld dword ptr ss : [ebp+0xC]
        mov cl, byte ptr ds : [eax+0x20]
        mov dword ptr ds : [eax+0xC], edi
        fst dword ptr ds : [eax+0x18]
        fdivr qword ptr ds : [public_6629220]
        and cl, 0xFD
        mov dword ptr ds : [eax+8], edi
        or cl, 1
        mov dword ptr ds : [eax+0x14], edi
        mov byte ptr ds : [eax+0x10], 0
        mov dword ptr ds : [eax], offset public_6629210
        mov dword ptr ds : [eax+4], 1
        mov byte ptr ds : [eax+0x20], cl
        mov edi, eax
        fstp dword ptr ds : [eax+0x1C]
        public_661545c : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call public_661b070
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jne public_6615473
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp], edx
        jmp public_6615479
        public_6615473 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        public_6615479 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_6615488
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+4], edx
        jmp public_661548e
        public_6615488 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        public_661548e : nop
        mov edx, dword ptr ss : [ebp+8]
        dec edx
        mov dword ptr ss : [ebp+8], edx
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        mov dword ptr ds : [ebx+8], esi
        jne public_66154a4
        mov dword ptr ss : [ebp], esi
        jmp public_66154a7
        public_66154a4 : nop
        mov dword ptr ds : [eax+0xC], esi
        public_66154a7 : nop
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        inc edx
        mov dword ptr ss : [ebp+4], edi
        test eax, eax
        mov dword ptr ss : [ebp+8], edx
        jne public_66154c3
        mov dword ptr ss : [ebp], edi
        jmp public_66154c6
        public_66154c3 : nop
        mov dword ptr ds : [eax+0xC], edi
        public_66154c6 : nop
        mov dword ptr ds : [edi+0xC], 0
        mov dword ptr ds : [edi+8], eax
        inc dword ptr ss : [ebp+8]
        jmp public_66154e1
        public_66154d5 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call public_661b070
        mov byte ptr ds : [esi+0x10], 1
        public_66154e1 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        public_66154e5 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], eax
        jl public_6615316
        public_66154f6 : nop
        mov esi, dword ptr ss : [ebp]
        mov ecx, 0x101
        xor eax, eax
        lea edi, ss:[esp+0x158]
        test esi, esi
        rep stosd
        je public_661552a
        public_661550d : nop
        push esi
        lea ecx, ss:[esp+0x15C]
        call public_661d0b0
        test esi, esi
        jne public_6615523
        mov esi, dword ptr ss : [ebp]
        jmp public_6615526
        public_6615523 : nop
        mov esi, dword ptr ds : [esi+0xC]
        public_6615526 : nop
        test esi, esi
        jne public_661550d
        public_661552a : nop
        mov eax, dword ptr ss : [esp+0x558]
        test eax, eax
        je public_661564a
        mov esi, dword ptr ss : [esp+0x560]
        mov eax, dword ptr ds : [esi]
        sub eax, 0
        je public_6615578
        dec eax
        je public_66155b9
        dec eax
        je public_66155c0
        mov edx, dword ptr ds : [public_6629004]
/*FIXUP push offset public_662a254 @0x6615553*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a254
        push 0x3D0
        mov eax, 0x100000
/*FIXUP push offset public_662a208 @0x6615562*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a208
/*FIXUP push offset public_662a1e8 @0x6615567*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a1e8
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x14
        jmp public_66155c2
        public_6615578 : nop
        mov eax, dword ptr ds : [public_662acec]
        mov edx, dword ptr ds : [esi+0xC]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC4]
        test eax, eax
        je public_66155c0
        mov eax, dword ptr ds : [eax]
        dec eax
        cmp eax, 5
        ja public_66155c0
/*FIXUP jmp dword ptr ds : [eax*4+public_66156b4] @0x6615596*/
  JMPTB cmp eax, 0
  JMPTB je public_661559d
  JMPTB cmp eax, 1
  JMPTB je public_661559d
  JMPTB cmp eax, 2
  JMPTB je public_66155a4
  JMPTB cmp eax, 3
  JMPTB je public_66155b2
  JMPTB cmp eax, 4
  JMPTB je public_66155ab
  JMPTB cmp eax, 5
  JMPTB je public_66155b9
  JMPTB int 3
        public_661559d : nop
        mov eax, 1
        jmp public_66155c2
        public_66155a4 : nop
        mov eax, 2
        jmp public_66155c2
        public_66155ab : nop
        mov eax, 3
        jmp public_66155c2
        public_66155b2 : nop
        mov eax, 4
        jmp public_66155c2
        public_66155b9 : nop
        mov eax, 7
        jmp public_66155c2
        public_66155c0 : nop
        xor eax, eax
        public_66155c2 : nop
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x160]
        call public_661d0f0
        mov eax, dword ptr ds : [esi]
        sub eax, 0
        je public_6615631
        dec eax
        jne public_661564a
        mov eax, dword ptr ds : [public_662acec]
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x8C]
        mov eax, dword ptr ds : [public_662ace8]
        test eax, eax
        jne public_6615608
        call public_6628190
        mov dword ptr ds : [public_662ace8], eax
        public_6615608 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [public_662acec]
        lea edx, ss:[esp+0x34]
        push edx
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x94]
        jmp public_661564a
        public_6615631 : nop
        mov eax, dword ptr ds : [public_662acec]
        lea edx, ss:[esp+0x18]
        push edx
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xC8]
        public_661564a : nop
        mov eax, dword ptr ss : [ebp]
        test eax, eax
        je public_66156a4
        public_6615651 : nop
        test eax, eax
        jne public_661565a
        mov esi, dword ptr ss : [ebp]
        jmp public_661565d
        public_661565a : nop
        mov esi, dword ptr ds : [eax+0xC]
        public_661565d : nop
        mov cl, byte ptr ds : [eax+0x10]
        test cl, cl
        je public_661569e
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        jne public_6615673
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [ebp], ecx
        jmp public_6615679
        public_6615673 : nop
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        public_6615679 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jne public_6615688
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp+4], ecx
        jmp public_661568e
        public_6615688 : nop
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        public_661568e : nop
        mov edx, dword ptr ss : [ebp+8]
        push eax
        dec edx
        mov dword ptr ss : [ebp+8], edx
        call public_66281d0
        add esp, 4
        public_661569e : nop
        test esi, esi
        mov eax, esi
        jne public_6615651
        public_66156a4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54C
        ret 0xC
        UNREACHABLE_TRAP(0x66152d0)
        ASM_EXPORT_ENTRY_FIRST(0x661559d, public_661559d)
        ASM_EXPORT_ENTRY(0x66155a4, public_66155a4)
        ASM_EXPORT_ENTRY(0x66155ab, public_66155ab)
        ASM_EXPORT_ENTRY(0x66155b2, public_66155b2)
        ASM_EXPORT_ENTRY_LAST(0x66155b9, public_66155b9)
    }
}

#undef public_66152f0
#undef public_66152fd
#undef public_6615300
#undef public_6615308
#undef public_6615316
#undef public_6615372
#undef public_661539c
#undef public_66153a7
#undef public_66153c5
#undef public_66153e7
#undef public_66153fd
#undef public_661540a
#undef public_661545c
#undef public_6615473
#undef public_6615479
#undef public_6615488
#undef public_661548e
#undef public_66154a4
#undef public_66154a7
#undef public_66154c3
#undef public_66154c6
#undef public_66154d5
#undef public_66154e1
#undef public_66154e5
#undef public_66154f6
#undef public_661550d
#undef public_6615523
#undef public_6615526
#undef public_661552a
#undef public_6615578
#undef public_661559d
#undef public_66155a4
#undef public_66155ab
#undef public_66155b2
#undef public_66155b9
#undef public_66155c0
#undef public_66155c2
#undef public_6615608
#undef public_6615631
#undef public_661564a
#undef public_6615651
#undef public_661565a
#undef public_661565d
#undef public_6615673
#undef public_6615679
#undef public_6615688
#undef public_661568e
#undef public_661569e
#undef public_66156a4

#pragma init_seg(compiler)
extern "C" void const* const public_661559d = __AsmFindLabelExport(&internal_66152d0, 0x661559d);
extern "C" void const* const public_66155a4 = __AsmFindLabelExport(&internal_66152d0, 0x66155a4);
extern "C" void const* const public_66155ab = __AsmFindLabelExport(&internal_66152d0, 0x66155ab);
extern "C" void const* const public_66155b2 = __AsmFindLabelExport(&internal_66152d0, 0x66155b2);
extern "C" void const* const public_66155b9 = __AsmFindLabelExport(&internal_66152d0, 0x66155b9);
