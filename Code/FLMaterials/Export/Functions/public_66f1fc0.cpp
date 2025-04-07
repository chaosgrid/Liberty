#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1ac0);
CLANG_FORWARD_PROC_SYMBOL(public_66f1fc0);
CLANG_FORWARD_PROC_SYMBOL(public_66f2420);
CLANG_FORWARD_PROC_SYMBOL(public_66f2470);
CLANG_FORWARD_PROC_SYMBOL(public_66f30a0);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);
CLANG_FORWARD_PROC_SYMBOL(public_6700810);
CLANG_FORWARD_JUMP_SYMBOL(public_6700ac8);

#define public_66f2002 _public_66f2002
#define public_66f2017 _public_66f2017
#define public_66f206f _public_66f206f
#define public_66f2074 _public_66f2074
#define public_66f207b _public_66f207b
#define public_66f2089 _public_66f2089
#define public_66f2094 _public_66f2094
#define public_66f20e9 _public_66f20e9
#define public_66f20f0 _public_66f20f0
#define public_66f2108 _public_66f2108
#define public_66f210c _public_66f210c
#define public_66f215c _public_66f215c
#define public_66f2163 _public_66f2163
#define public_66f21b2 _public_66f21b2
#define public_66f21b4 _public_66f21b4
#define public_66f21bb _public_66f21bb
#define public_66f21ce _public_66f21ce
#define public_66f223e _public_66f223e
#define public_66f224f _public_66f224f
#define public_66f225c _public_66f225c
#define public_66f2260 _public_66f2260
#define public_66f229a _public_66f229a
#define public_66f22c0 _public_66f22c0
#define public_66f22ca _public_66f22ca
#define public_66f22dc _public_66f22dc
#define public_66f2331 _public_66f2331
#define public_66f2338 _public_66f2338
#define public_66f2353 _public_66f2353
#define public_66f2357 _public_66f2357
#define public_66f2371 _public_66f2371
#define public_66f2386 _public_66f2386
#define public_66f239d _public_66f239d
#define public_66f23ab _public_66f23ab
#define public_66f23af _public_66f23af
#define public_66f23d9 _public_66f23d9

PROC_DECLARE(0x66f1fc0, internal_66f1fc0, public_66f1fc0);
extern "C" NAKED register_t __cdecl internal_66f1fc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6700ac8 @0x66f1fc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700ac8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x54
        push ebx
        push ebp
        xor ebp, ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov ebx, dword ptr ss : [esp+0x78]
        mov esi, dword ptr ds : [ebx+0x10]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x6C], ebp
        je public_66f2002
        lea ecx, ss:[esp+0x1C]
        call public_66f1ac0
        public_66f2002 : nop
        mov dword ptr ss : [esp+0x1C], esi
        dec esi
        cmp esi, 8
        ja public_66f23af
/*FIXUP jmp dword ptr ds : [esi*4+public_66f23f0] @0x66f2010*/
  JMPTB cmp esi, 0
  JMPTB je public_66f2017
  JMPTB cmp esi, 1
  JMPTB je public_66f2094
  JMPTB cmp esi, 2
  JMPTB je public_66f210c
  JMPTB cmp esi, 3
  JMPTB je public_66f2163
  JMPTB cmp esi, 4
  JMPTB je public_66f21ce
  JMPTB cmp esi, 5
  JMPTB je public_66f23af
  JMPTB cmp esi, 6
  JMPTB je public_66f21ce
  JMPTB cmp esi, 7
  JMPTB je public_66f22dc
  JMPTB cmp esi, 8
  JMPTB je public_66f2357
  JMPTB int 3
        public_66f2017 : nop
        mov eax, dword ptr ds : [ebx+4]
/*FIXUP push offset public_67013dc @0x66f201a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013dc
        push eax
        lea ecx, ss:[esp+0x38]
        call public_66f2420
        mov esi, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x30]
        push ecx
        push esi
        call dword ptr ds : [eax+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_66f207b
        mov edx, dword ptr ds : [esi]
        push 0
        lea eax, ss:[esp+0x7C]
        push eax
        push 4
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edi
        push esi
        call dword ptr ds : [edx+0x14]
        test eax, eax
        je public_66f215c
        cmp dword ptr ss : [esp+0x78], 4
        jne public_66f215c
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x20], edx
        public_66f206f : nop
        mov ebp, 1
        public_66f2074 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        public_66f207b : nop
        xor ecx, ecx
        test ebp, ebp
        setne cl
        dec ecx
        test ecx, 0x80004005
        public_66f2089 : nop
        jge public_66f23af
        jmp public_66f2371
        public_66f2094 : nop
        mov eax, dword ptr ds : [ebx+4]
/*FIXUP push offset public_67013dc @0x66f2097*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013dc
        push eax
        lea ecx, ss:[esp+0x38]
        call public_66f2420
        mov esi, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x30]
        push eax
        push esi
        call dword ptr ds : [edx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_66f20f0
        mov ecx, dword ptr ds : [esi]
        push 0
        lea edx, ss:[esp+0x7C]
        push edx
        push 4
        lea eax, ss:[esp+0x1C]
        push eax
        push edi
        push esi
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_66f2108
        cmp dword ptr ss : [esp+0x78], 4
        jne public_66f2108
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, 1
        mov dword ptr ss : [esp+0x20], ecx
        public_66f20e9 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x10]
        public_66f20f0 : nop
        xor eax, eax
        test ebp, ebp
        setne al
        dec eax
        test eax, 0x80004005
        jge public_66f23af
        jmp public_66f2371
        public_66f2108 : nop
        xor ebp, ebp
        jmp public_66f20e9
        public_66f210c : nop
        mov eax, dword ptr ds : [ebx+4]
/*FIXUP push offset public_67013dc @0x66f210f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013dc
        push eax
        lea ecx, ss:[esp+0x38]
        call public_66f2420
        mov esi, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x30]
        push edx
        push esi
        call dword ptr ds : [ecx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_66f207b
        mov eax, dword ptr ds : [esi]
        push 0
        lea ecx, ss:[esp+0x7C]
        push ecx
        push 0xC
        lea edx, ss:[esp+0x2C]
        push edx
        push edi
        push esi
        call dword ptr ds : [eax+0x14]
        test eax, eax
        je public_66f215c
        cmp dword ptr ss : [esp+0x78], 0xC
        je public_66f206f
        public_66f215c : nop
        xor ebp, ebp
        jmp public_66f2074
        public_66f2163 : nop
        mov eax, dword ptr ds : [ebx+4]
/*FIXUP push offset public_67013dc @0x66f2166*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013dc
        push eax
        lea ecx, ss:[esp+0x38]
        call public_66f2420
        mov esi, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x30]
        push eax
        push esi
        call dword ptr ds : [edx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_66f21bb
        mov ecx, dword ptr ds : [esi]
        push 0
        lea edx, ss:[esp+0x7C]
        push edx
        push 0x10
        lea eax, ss:[esp+0x2C]
        push eax
        push edi
        push esi
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_66f21b2
        cmp dword ptr ss : [esp+0x78], 0x10
        jne public_66f21b2
        mov ebp, 1
        jmp public_66f21b4
        public_66f21b2 : nop
        xor ebp, ebp
        public_66f21b4 : nop
        mov ecx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [ecx+0x10]
        public_66f21bb : nop
        xor edx, edx
        test ebp, ebp
        setne dl
        dec edx
        test edx, 0x80004005
        jmp public_66f2089
        public_66f21ce : nop
        mov eax, dword ptr ds : [ebx+4]
/*FIXUP push offset public_67013dc @0x66f21d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013dc
        push eax
        lea ecx, ss:[esp+0x38]
        call public_66f2420
        mov esi, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x30]
        push ecx
        push esi
        mov dword ptr ss : [esp+0x18], ebp
        call dword ptr ds : [eax+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_66f225c
        mov edx, dword ptr ds : [esi]
        push ebp
        push edi
        push esi
        call dword ptr ds : [edx+0x28]
        mov ebp, eax
        push ebp
        call public_6700810
        add esp, 4
        test eax, eax
        je public_66f224f
        mov ecx, dword ptr ds : [esi]
        push 0
        lea edx, ss:[esp+0x18]
        push edx
        push ebp
        push eax
        push edi
        push esi
        mov ebx, eax
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_66f223e
        cmp dword ptr ss : [esp+0x14], ebp
        jne public_66f223e
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        mov dword ptr ss : [esp+0x18], 1
        call dword ptr ds : [eax+0x10]
        jmp public_66f2260
        public_66f223e : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push esi
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [eax+0x10]
        jmp public_66f2260
        public_66f224f : nop
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ss : [esp+0x74]
        push edi
        push esi
        call dword ptr ds : [eax+0x10]
        jmp public_66f2260
        public_66f225c : nop
        mov ebx, dword ptr ss : [esp+0x74]
        public_66f2260 : nop
        mov esi, dword ptr ss : [esp+0x10]
        xor ecx, ecx
        test esi, esi
        setne cl
        dec ecx
        test ecx, 0x80004005
        jl public_66f2371
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        mov esi, dword ptr ds : [public_6701018]
        je public_66f229a
        push eax
        push 0
        call esi
        push eax
        call dword ptr ds : [public_6701014]
        mov dword ptr ss : [esp+0x20], 0
        public_66f229a : nop
        test ebx, ebx
        je public_66f22ca
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        push ecx
        push eax
        call esi
        push eax
        call dword ptr ds : [public_670101c]
        mov dword ptr ss : [esp+0x20], eax
        mov ecx, ebx
        mov edx, eax
        lea esp, ss:[esp]
        public_66f22c0 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_66f22c0
        public_66f22ca : nop
        push ebx
        call public_6700710
        mov ebx, dword ptr ss : [esp+0x7C]
        add esp, 4
        jmp public_66f23af
        public_66f22dc : nop
        mov eax, dword ptr ds : [ebx+4]
/*FIXUP push offset public_67013dc @0x66f22df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67013dc
        push eax
        lea ecx, ss:[esp+0x38]
        call public_66f2420
        mov esi, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x30]
        push eax
        push esi
        call dword ptr ds : [edx+0x7C]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        je public_66f2338
        mov ecx, dword ptr ds : [esi]
        push 0
        lea edx, ss:[esp+0x7C]
        push edx
        push 4
        lea eax, ss:[esp+0x20]
        push eax
        push edi
        push esi
        call dword ptr ds : [ecx+0x14]
        test eax, eax
        je public_66f2353
        cmp dword ptr ss : [esp+0x78], 4
        jne public_66f2353
        mov ecx, dword ptr ss : [esp+0x14]
        mov ebp, 1
        mov dword ptr ss : [esp+0x74], ecx
        public_66f2331 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        push esi
        call dword ptr ds : [edx+0x10]
        public_66f2338 : nop
        xor eax, eax
        test ebp, ebp
        setne al
        dec eax
        test eax, 0x80004005
        jl public_66f2371
        mov eax, dword ptr ss : [esp+0x74]
        shr eax, 4
        and eax, 0xF
        jmp public_66f23ab
        public_66f2353 : nop
        xor ebp, ebp
        jmp public_66f2331
        public_66f2357 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ss : [esp+0x74]
        lea ecx, ss:[esp+0x74]
        push ecx
        push edx
        push eax
        call public_66f30a0
        add esp, 0xC
        test eax, eax
        jge public_66f2386
        public_66f2371 : nop
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x6C], 0xFFFFFFFF
        call public_66f1ac0
        xor al, al
        jmp public_66f23d9
        public_66f2386 : nop
        mov eax, dword ptr ds : [ebx]
        xor ecx, ecx
        test eax, 0x20000
        jne public_66f239d
        test eax, 0x40000
        je public_66f239d
        mov ecx, 1
        public_66f239d : nop
        push ecx
        mov ecx, dword ptr ss : [esp+0x78]
        push ecx
        call public_66f2470
        add esp, 8
        public_66f23ab : nop
        mov dword ptr ss : [esp+0x20], eax
        public_66f23af : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x1C]
        push eax
        mov eax, dword ptr ss : [esp+0x80]
        push ebx
        push eax
        call dword ptr ds : [edx+0x68]
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x6C], 0xFFFFFFFF
        call public_66f1ac0
        mov al, 1
        public_66f23d9 : nop
        mov ecx, dword ptr ss : [esp+0x64]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x60
        ret 0xC
        UNREACHABLE_TRAP(0x66f1fc0)
        ASM_EXPORT_ENTRY_FIRST(0x66f2017, public_66f2017)
        ASM_EXPORT_ENTRY(0x66f2094, public_66f2094)
        ASM_EXPORT_ENTRY(0x66f210c, public_66f210c)
        ASM_EXPORT_ENTRY(0x66f2163, public_66f2163)
        ASM_EXPORT_ENTRY(0x66f21ce, public_66f21ce)
        ASM_EXPORT_ENTRY(0x66f22dc, public_66f22dc)
        ASM_EXPORT_ENTRY(0x66f2357, public_66f2357)
        ASM_EXPORT_ENTRY_LAST(0x66f23af, public_66f23af)
    }
}

#undef public_66f2002
#undef public_66f2017
#undef public_66f206f
#undef public_66f2074
#undef public_66f207b
#undef public_66f2089
#undef public_66f2094
#undef public_66f20e9
#undef public_66f20f0
#undef public_66f2108
#undef public_66f210c
#undef public_66f215c
#undef public_66f2163
#undef public_66f21b2
#undef public_66f21b4
#undef public_66f21bb
#undef public_66f21ce
#undef public_66f223e
#undef public_66f224f
#undef public_66f225c
#undef public_66f2260
#undef public_66f229a
#undef public_66f22c0
#undef public_66f22ca
#undef public_66f22dc
#undef public_66f2331
#undef public_66f2338
#undef public_66f2353
#undef public_66f2357
#undef public_66f2371
#undef public_66f2386
#undef public_66f239d
#undef public_66f23ab
#undef public_66f23af
#undef public_66f23d9

#pragma init_seg(compiler)
extern "C" void const* const public_66f2017 = __AsmFindLabelExport(&internal_66f1fc0, 0x66f2017);
extern "C" void const* const public_66f2094 = __AsmFindLabelExport(&internal_66f1fc0, 0x66f2094);
extern "C" void const* const public_66f210c = __AsmFindLabelExport(&internal_66f1fc0, 0x66f210c);
extern "C" void const* const public_66f2163 = __AsmFindLabelExport(&internal_66f1fc0, 0x66f2163);
extern "C" void const* const public_66f21ce = __AsmFindLabelExport(&internal_66f1fc0, 0x66f21ce);
extern "C" void const* const public_66f22dc = __AsmFindLabelExport(&internal_66f1fc0, 0x66f22dc);
extern "C" void const* const public_66f2357 = __AsmFindLabelExport(&internal_66f1fc0, 0x66f2357);
extern "C" void const* const public_66f23af = __AsmFindLabelExport(&internal_66f1fc0, 0x66f23af);
