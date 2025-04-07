#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac40e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4160);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4390);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4550);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4f80);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8360);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8500);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8a90);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac94c0);
CLANG_FORWARD_PROC_SYMBOL(public_6aca470);
CLANG_FORWARD_PROC_SYMBOL(public_6acd2b0);

#define public_6aca4b6 _public_6aca4b6
#define public_6aca4bc _public_6aca4bc
#define public_6aca4ca _public_6aca4ca
#define public_6aca4df _public_6aca4df
#define public_6aca4fb _public_6aca4fb
#define public_6aca508 _public_6aca508
#define public_6aca52d _public_6aca52d
#define public_6aca543 _public_6aca543
#define public_6aca54d _public_6aca54d
#define public_6aca55f _public_6aca55f
#define public_6aca590 _public_6aca590
#define public_6aca59e _public_6aca59e
#define public_6aca5b9 _public_6aca5b9
#define public_6aca644 _public_6aca644
#define public_6aca677 _public_6aca677
#define public_6aca67d _public_6aca67d
#define public_6aca6e9 _public_6aca6e9
#define public_6aca6ff _public_6aca6ff
#define public_6aca71d _public_6aca71d
#define public_6aca744 _public_6aca744
#define public_6aca75a _public_6aca75a
#define public_6aca774 _public_6aca774
#define public_6aca78a _public_6aca78a
#define public_6aca792 _public_6aca792

PROC_DECLARE(0x6aca470, internal_6aca470, public_6aca470);
extern "C" NAKED register_t __cdecl internal_6aca470()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0x18
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0x10]
        push edi
        push 0x291C
        mov dword ptr ss : [ebp-8], 1
        mov edi, dword ptr ds : [esi+0x100]
        mov dword ptr ss : [ebp-0xC], 0
        mov dword ptr ss : [ebp-4], edi
        call public_6ac4f80
        mov ebx, eax
        test ebx, ebx
        mov dword ptr ss : [ebp-0x18], ebx
        jne public_6aca4b6
        mov ecx, edi
        mov edi, dword ptr ss : [ebp+0xC]
        rep stosd
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_6aca4b6 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov edx, dword ptr ss : [ebp+8]
        public_6aca4bc : nop
        test eax, eax
        je public_6aca4ca
        mov ecx, dword ptr ds : [edx+eax*4-4]
        dec eax
        test ecx, ecx
        je public_6aca4bc
        inc eax
        public_6aca4ca : nop
        test eax, eax
        je public_6aca4fb
        mov eax, dword ptr ds : [esi]
        and eax, 7
        cmp eax, 7
        ja public_6aca508
/*FIXUP jmp dword ptr ds : [eax*4+public_6aca7ac] @0x6aca4d8*/
  JMPTB cmp eax, 0
  JMPTB je public_6aca4df
  JMPTB cmp eax, 1
  JMPTB je public_6aca644
  JMPTB cmp eax, 2
  JMPTB je public_6aca4df
  JMPTB cmp eax, 3
  JMPTB je public_6aca55f
  JMPTB cmp eax, 4
  JMPTB je public_6aca4df
  JMPTB cmp eax, 5
  JMPTB je public_6aca5b9
  JMPTB cmp eax, 6
  JMPTB je public_6aca4df
  JMPTB cmp eax, 7
  JMPTB je public_6aca55f
  JMPTB int 3
        public_6aca4df : nop
        lea eax, ss:[ebp-0xC]
        push 1
        push eax
        push edi
        push esi
        mov dword ptr ss : [ebp-0xC], 2
        call public_6ac8a90
        test eax, eax
        jne public_6aca792
        public_6aca4fb : nop
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, edi
        mov edi, dword ptr ss : [ebp+0xC]
        rep movsd
        mov esi, dword ptr ss : [ebp+0x10]
        public_6aca508 : nop
        lea eax, ds:[ebx+0x600]
        lea edi, ds:[ebx+0x100]
        push eax
        mov eax, dword ptr ss : [ebp+0xC]
        push esi
        push edi
        push eax
        push eax
        call public_6ac4160
        mov dword ptr ss : [ebp+0x10], edi
        mov eax, dword ptr ss : [ebp-4]
        mov esi, dword ptr ss : [ebp+0x10]
        mov edi, dword ptr ss : [ebp+8]
        public_6aca52d : nop
        test eax, eax
        je public_6aca543
        mov ecx, dword ptr ds : [esi+eax*4-4]
        mov edx, dword ptr ds : [edi+eax*4-4]
        dec eax
        cmp ecx, edx
        je public_6aca52d
        sbb eax, eax
        or eax, 1
        public_6aca543 : nop
        xor edx, edx
        test eax, eax
        sete dl
        mov dword ptr ss : [ebp-8], edx
        public_6aca54d : nop
        push ebx
        call public_6ac4fb0
        mov eax, dword ptr ss : [ebp-8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        public_6aca55f : nop
        lea eax, ds:[ebx+0x500]
        push edi
        push eax
        push 0xFFFFFFFE
        push esi
        call public_6ac8bd0
        test edi, edi
        mov dword ptr ss : [ebp+0x10], 1
        je public_6aca59e
        lea eax, ds:[ebx+0x500]
        cmp eax, eax
        jne public_6aca590
        mov ecx, dword ptr ds : [eax]
        cmp ecx, 0xFFFFFFFE
        ja public_6aca590
        inc ecx
        mov dword ptr ds : [eax], ecx
        jmp public_6aca59e
        public_6aca590 : nop
        push eax
        lea ecx, ss:[ebp+0x10]
        push 1
        push ecx
        push edi
        push eax
        call public_6ac8500
        public_6aca59e : nop
        mov edx, dword ptr ss : [ebp+0xC]
        push esi
        push edx
        lea eax, ds:[ebx+0x500]
        push edi
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6ac94c0
        jmp public_6aca508
        public_6aca5b9 : nop
        lea eax, ds:[ebx+0x500]
        push edi
        push eax
        push 0xFFFFFFFD
        push esi
        call public_6ac8bd0
        lea eax, ds:[ebx+0x100]
        push esi
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push eax
        push eax
        call public_6ac40e0
        push esi
        push ebx
        push edi
        lea eax, ds:[ebx+0x500]
        lea edi, ds:[ebx+0x100]
        push eax
        push edi
        call public_6ac94c0
        mov ecx, dword ptr ss : [ebp+8]
        lea eax, ds:[ebx+0x600]
        push eax
        push esi
        push edi
        push ebx
        push ecx
        call public_6ac4160
        lea eax, ds:[ebx+0x600]
        push eax
        push esi
        push ebx
        push ebx
        push edi
        call public_6ac4160
        push esi
        push ebx
        push ebx
        push ebx
        call public_6ac40e0
        push esi
        lea edx, ds:[esi+0x1144]
        push ebx
        push edx
        push ebx
        call public_6ac4550
        lea eax, ds:[ebx+0x600]
        push eax
        mov eax, dword ptr ss : [ebp+0xC]
        push esi
        push eax
        push ebx
        push edi
        call public_6ac4160
        jmp public_6aca508
        public_6aca644 : nop
        mov ecx, dword ptr ss : [ebp+8]
        lea eax, ds:[ebx+0x200]
        push esi
        push eax
        push 0xFFFFFFFE
        push ecx
        call public_6ac4390
        lea eax, ds:[ebx+0x500]
        push edi
        push eax
        push 0xFFFFFFFF
        push esi
        call public_6ac8bd0
        mov eax, dword ptr ds : [ebx+0x500]
        or al, 1
        mov dword ptr ds : [ebx+0x500], eax
        jmp public_6aca67d
        public_6aca677 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        mov edi, dword ptr ss : [ebp-4]
        public_6aca67d : nop
        mov eax, dword ptr ss : [ebp-0xC]
        test eax, eax
        jne public_6aca54d
        push edi
        push ebx
        push esi
        call public_6ac8360
        lea eax, ds:[ebx+0x400]
        lea ecx, ds:[ebx+0x300]
        push esi
        push eax
        push ecx
        lea eax, ds:[ebx+0x500]
        push edi
        push eax
        lea eax, ds:[ebx+0x200]
        push eax
        push ebx
        call public_6acd2b0
        lea eax, ds:[ebx+0x600]
        lea edi, ds:[ebx+0x100]
        push eax
        push esi
        lea eax, ds:[ebx+0x400]
        push edi
        push eax
        push eax
        call public_6ac4160
        mov eax, dword ptr ds : [public_6ae097c]
        test eax, eax
        jne public_6aca792
        mov dword ptr ss : [ebp-0x10], edi
        mov eax, dword ptr ss : [ebp-4]
        mov esi, dword ptr ss : [ebp-0x10]
        mov edi, dword ptr ss : [ebp+8]
        public_6aca6e9 : nop
        test eax, eax
        je public_6aca6ff
        mov ecx, dword ptr ds : [esi+eax*4-4]
        mov edx, dword ptr ds : [edi+eax*4-4]
        dec eax
        cmp ecx, edx
        je public_6aca6e9
        sbb eax, eax
        or eax, 1
        public_6aca6ff : nop
        test eax, eax
        jne public_6aca71d
        mov ecx, dword ptr ss : [ebp-4]
        mov edi, dword ptr ss : [ebp+0xC]
        lea esi, ds:[ebx+0x400]
        mov dword ptr ss : [ebp-0xC], 1
        rep movsd
        jmp public_6aca677
        public_6aca71d : nop
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        push ebx
        lea esi, ds:[eax+0x1144]
        push esi
        push eax
        call public_6ac4550
        lea eax, ds:[ebx+0x300]
        mov dword ptr ss : [ebp-0x10], esi
        mov dword ptr ss : [ebp-0x14], eax
        mov eax, dword ptr ss : [ebp-4]
        mov esi, dword ptr ss : [ebp-0x14]
        mov edi, dword ptr ss : [ebp-0x10]
        public_6aca744 : nop
        test eax, eax
        je public_6aca75a
        mov ecx, dword ptr ds : [esi+eax*4-4]
        mov edx, dword ptr ds : [edi+eax*4-4]
        dec eax
        cmp ecx, edx
        je public_6aca744
        sbb eax, eax
        or eax, 1
        public_6aca75a : nop
        test eax, eax
        je public_6aca677
        lea eax, ds:[ebx+0x300]
        mov dword ptr ss : [ebp-0x14], eax
        mov eax, dword ptr ss : [ebp-4]
        mov esi, dword ptr ss : [ebp-0x14]
        mov edi, dword ptr ss : [ebp-0x18]
        public_6aca774 : nop
        test eax, eax
        je public_6aca78a
        mov ecx, dword ptr ds : [esi+eax*4-4]
        mov edx, dword ptr ds : [edi+eax*4-4]
        dec eax
        cmp ecx, edx
        je public_6aca774
        sbb eax, eax
        or eax, 1
        public_6aca78a : nop
        test eax, eax
        je public_6aca677
        public_6aca792 : nop
        push ebx
        mov dword ptr ss : [ebp-8], 0
        call public_6ac4fb0
        mov eax, dword ptr ss : [ebp-8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6aca470)
        ASM_EXPORT_ENTRY_FIRST(0x6aca4df, public_6aca4df)
        ASM_EXPORT_ENTRY(0x6aca55f, public_6aca55f)
        ASM_EXPORT_ENTRY(0x6aca5b9, public_6aca5b9)
        ASM_EXPORT_ENTRY_LAST(0x6aca644, public_6aca644)
    }
}

#undef public_6aca4b6
#undef public_6aca4bc
#undef public_6aca4ca
#undef public_6aca4df
#undef public_6aca4fb
#undef public_6aca508
#undef public_6aca52d
#undef public_6aca543
#undef public_6aca54d
#undef public_6aca55f
#undef public_6aca590
#undef public_6aca59e
#undef public_6aca5b9
#undef public_6aca644
#undef public_6aca677
#undef public_6aca67d
#undef public_6aca6e9
#undef public_6aca6ff
#undef public_6aca71d
#undef public_6aca744
#undef public_6aca75a
#undef public_6aca774
#undef public_6aca78a
#undef public_6aca792

#pragma init_seg(compiler)
extern "C" void const* const public_6aca4df = __AsmFindLabelExport(&internal_6aca470, 0x6aca4df);
extern "C" void const* const public_6aca55f = __AsmFindLabelExport(&internal_6aca470, 0x6aca55f);
extern "C" void const* const public_6aca5b9 = __AsmFindLabelExport(&internal_6aca470, 0x6aca5b9);
extern "C" void const* const public_6aca644 = __AsmFindLabelExport(&internal_6aca470, 0x6aca644);
