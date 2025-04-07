#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac4160);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4250);
CLANG_FORWARD_PROC_SYMBOL(public_6ac42e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4f80);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac9a30);
CLANG_FORWARD_PROC_SYMBOL(public_6acb290);

#define public_6ac9a61 _public_6ac9a61
#define public_6ac9a86 _public_6ac9a86
#define public_6ac9ad8 _public_6ac9ad8
#define public_6ac9ae3 _public_6ac9ae3
#define public_6ac9b24 _public_6ac9b24
#define public_6ac9b4d _public_6ac9b4d
#define public_6ac9b54 _public_6ac9b54
#define public_6ac9b85 _public_6ac9b85
#define public_6ac9b88 _public_6ac9b88
#define public_6ac9bad _public_6ac9bad
#define public_6ac9bc1 _public_6ac9bc1
#define public_6ac9bc9 _public_6ac9bc9
#define public_6ac9c12 _public_6ac9c12
#define public_6ac9c6f _public_6ac9c6f
#define public_6ac9c7d _public_6ac9c7d
#define public_6ac9cae _public_6ac9cae
#define public_6ac9cc3 _public_6ac9cc3
#define public_6ac9cf0 _public_6ac9cf0
#define public_6ac9cf3 _public_6ac9cf3
#define public_6ac9cfc _public_6ac9cfc

PROC_DECLARE(0x6ac9a30, internal_6ac9a30, public_6ac9a30);
extern "C" NAKED register_t __cdecl internal_6ac9a30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov edx, dword ptr ss : [ebp+0xC]
        push ebx
        xor ebx, ebx
        push esi
        cmp edx, 1
        push edi
        mov dword ptr ss : [ebp-4], ebx
        ja public_6ac9a86
        mov edi, dword ptr ss : [ebp+0x10]
        cmp edi, ebx
        je public_6ac9cfc
        mov eax, dword ptr ss : [ebp+0x14]
        cmp edx, ebx
        lea esi, ds:[eax+0x1144]
        je public_6ac9a61
        mov esi, dword ptr ss : [ebp+8]
        public_6ac9a61 : nop
        mov ecx, dword ptr ds : [eax+0x100]
        shl ecx, 2
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [ebp-4]
        and ecx, 3
        add eax, ebx
        rep movsb
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        public_6ac9a86 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        bsr eax, eax
        add eax, 1
        lea ecx, ds:[eax-2]
        push 0x2E94
        shr edx, cl
        mov dword ptr ss : [ebp-0xC], ecx
        xor ecx, ecx
        mov dword ptr ss : [ebp-8], ebx
        cmp edx, 3
        sete cl
        mov dword ptr ss : [ebp-0x10], ecx
        call public_6ac4f80
        mov edi, eax
        cmp edi, ebx
        jne public_6ac9ae3
        mov edi, dword ptr ss : [ebp+0x10]
        cmp edi, ebx
        je public_6ac9ad8
        mov edx, dword ptr ss : [ebp+0x14]
        xor eax, eax
        mov ecx, dword ptr ds : [edx+0x100]
        shl ecx, 2
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        public_6ac9ad8 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        public_6ac9ae3 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        cmp esi, ebx
        mov ebx, dword ptr ss : [ebp+0x14]
        je public_6ac9b24
        mov ecx, dword ptr ds : [ebx+0x108]
        mov edx, dword ptr ds : [ebx+0x100]
        lea eax, ds:[edi+0x514]
        push ecx
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push edi
        push edx
        push eax
        call public_6acb290
        lea eax, ds:[edi+0xB78]
        push eax
        push ebx
        lea eax, ds:[edi+0x514]
        push esi
        push eax
        push edi
        push eax
        push edi
        call public_6ac42e0
        public_6ac9b24 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp+0x10], 1
        test eax, eax
        je public_6ac9b54
        test esi, esi
        je public_6ac9b4d
        lea eax, ds:[edi+0xB78]
        lea ecx, ds:[edi+0x514]
        push eax
        push ebx
        push esi
        push ecx
        push edi
        push esi
        call public_6ac4250
        public_6ac9b4d : nop
        mov dword ptr ss : [ebp-4], 1
        public_6ac9b54 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        test eax, eax
        je public_6ac9cf3
        test esi, esi
        je public_6ac9b85
        mov edx, dword ptr ds : [ebx+0x108]
        lea eax, ds:[edi+0xA50]
        push edx
        mov edx, dword ptr ds : [ebx+0x100]
        lea ecx, ds:[edi+0x53C]
        push eax
        push ecx
        push edx
        push esi
        call public_6acb290
        public_6ac9b85 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        public_6ac9b88 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        dec ecx
        shr eax, cl
        mov dword ptr ss : [ebp-0xC], ecx
        mov ecx, dword ptr ss : [ebp-8]
        and eax, 1
        lea eax, ds:[eax+ecx*2]
        cmp eax, 3
        mov dword ptr ss : [ebp-8], eax
        ja public_6ac9cc3
/*FIXUP jmp dword ptr ds : [eax*4+public_6ac9d0c] @0x6ac9ba6*/
  JMPTB cmp eax, 0
  JMPTB je public_6ac9bad
  JMPTB cmp eax, 1
  JMPTB je public_6ac9bad
  JMPTB cmp eax, 2
  JMPTB je public_6ac9bc9
  JMPTB cmp eax, 3
  JMPTB je public_6ac9c12
  JMPTB int 3
        public_6ac9bad : nop
        test esi, esi
        je public_6ac9bc1
        lea eax, ds:[edi+0xB78]
        push eax
        push ebx
        push esi
        push esi
        push esi
        call public_6ac4160
        public_6ac9bc1 : nop
        inc dword ptr ss : [ebp+0x10]
        jmp public_6ac9cc3
        public_6ac9bc9 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc edx
        inc ecx
        test esi, esi
        mov dword ptr ss : [ebp-8], 0
        mov dword ptr ss : [ebp-4], edx
        mov dword ptr ss : [ebp+0x10], ecx
        je public_6ac9cc3
        lea eax, ds:[edi+0xB78]
        lea edx, ds:[edi+0x514]
        push eax
        push ebx
        push esi
        push edx
        push edi
        push esi
        call public_6ac4250
        lea eax, ds:[edi+0xB78]
        push eax
        push ebx
        push esi
        push esi
        push esi
        call public_6ac4160
        jmp public_6ac9cc3
        public_6ac9c12 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        test eax, eax
        jne public_6ac9c7d
        test esi, esi
        je public_6ac9c6f
        lea edx, ds:[edi+0xB78]
        lea eax, ds:[edi+0xA78]
        push edx
        push ebx
        push eax
        lea eax, ds:[edi+0x514]
        lea ecx, ds:[edi+0xA50]
        push eax
        push edi
        lea eax, ds:[edi+0x53C]
        push ecx
        push eax
        call public_6ac42e0
        mov ecx, dword ptr ds : [ebx+0x108]
        mov edx, dword ptr ds : [ebx+0x100]
        lea eax, ds:[edi+0xA50]
        push ecx
        push eax
        lea eax, ds:[edi+0x53C]
        push eax
        lea eax, ds:[edi+0xA78]
        push edx
        push eax
        call public_6acb290
        public_6ac9c6f : nop
        mov eax, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x10], 1
        inc eax
        mov dword ptr ss : [ebp-4], eax
        public_6ac9c7d : nop
        test esi, esi
        je public_6ac9cae
        lea eax, ds:[edi+0xB78]
        push eax
        push ebx
        push esi
        push esi
        push esi
        call public_6ac4160
        lea eax, ds:[edi+0xB78]
        lea ecx, ds:[edi+0x53C]
        push eax
        push ebx
        lea eax, ds:[edi+0xA50]
        push esi
        push eax
        push ecx
        push esi
        call public_6ac4250
        public_6ac9cae : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+0x10]
        inc ecx
        inc eax
        mov dword ptr ss : [ebp-4], ecx
        mov dword ptr ss : [ebp+0x10], eax
        mov dword ptr ss : [ebp-8], 0
        public_6ac9cc3 : nop
        mov ecx, dword ptr ss : [ebp-0xC]
        test ecx, ecx
        jne public_6ac9b88
        mov eax, dword ptr ss : [ebp-8]
        test eax, eax
        je public_6ac9cf3
        test esi, esi
        je public_6ac9cf0
        lea eax, ds:[edi+0xB78]
        lea edx, ds:[edi+0x514]
        push eax
        push ebx
        push esi
        push edx
        push edi
        push esi
        call public_6ac4250
        public_6ac9cf0 : nop
        inc dword ptr ss : [ebp-4]
        public_6ac9cf3 : nop
        push edi
        call public_6ac4fb0
        mov ebx, dword ptr ss : [ebp+0x10]
        public_6ac9cfc : nop
        mov eax, dword ptr ss : [ebp-4]
        pop edi
        add eax, ebx
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6ac9a30)
        ASM_EXPORT_ENTRY_FIRST(0x6ac9bad, public_6ac9bad)
        ASM_EXPORT_ENTRY(0x6ac9bc9, public_6ac9bc9)
        ASM_EXPORT_ENTRY_LAST(0x6ac9c12, public_6ac9c12)
    }
}

#undef public_6ac9a61
#undef public_6ac9a86
#undef public_6ac9ad8
#undef public_6ac9ae3
#undef public_6ac9b24
#undef public_6ac9b4d
#undef public_6ac9b54
#undef public_6ac9b85
#undef public_6ac9b88
#undef public_6ac9bad
#undef public_6ac9bc1
#undef public_6ac9bc9
#undef public_6ac9c12
#undef public_6ac9c6f
#undef public_6ac9c7d
#undef public_6ac9cae
#undef public_6ac9cc3
#undef public_6ac9cf0
#undef public_6ac9cf3
#undef public_6ac9cfc

#pragma init_seg(compiler)
extern "C" void const* const public_6ac9bad = __AsmFindLabelExport(&internal_6ac9a30, 0x6ac9bad);
extern "C" void const* const public_6ac9bc9 = __AsmFindLabelExport(&internal_6ac9a30, 0x6ac9bc9);
extern "C" void const* const public_6ac9c12 = __AsmFindLabelExport(&internal_6ac9a30, 0x6ac9c12);
