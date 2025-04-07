#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1d40);

#define public_6eb1d63 _public_6eb1d63
#define public_6eb1d80 _public_6eb1d80
#define public_6eb1d87 _public_6eb1d87
#define public_6eb1d9c _public_6eb1d9c
#define public_6eb1db2 _public_6eb1db2
#define public_6eb1db8 _public_6eb1db8
#define public_6eb1dc4 _public_6eb1dc4
#define public_6eb1dd3 _public_6eb1dd3
#define public_6eb1df0 _public_6eb1df0
#define public_6eb1e11 _public_6eb1e11
#define public_6eb1e24 _public_6eb1e24
#define public_6eb1e37 _public_6eb1e37
#define public_6eb1e4b _public_6eb1e4b
#define public_6eb1e5a _public_6eb1e5a
#define public_6eb1e60 _public_6eb1e60

PROC_DECLARE(0x6eb1d40, internal_6eb1d40, public_6eb1d40);
extern "C" NAKED register_t __cdecl internal_6eb1d40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ds : [public_6ed1020]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [edi]
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        cmp ebp, eax
        je public_6eb1d87
        sub eax, 5
        je public_6eb1d63
        dec eax
        je public_6eb1d9c
        dec eax
        jne public_6eb1d80
        public_6eb1d63 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_6eb1d80
        push eax
        push 0
        call ebx
        push eax
        call dword ptr ds : [public_6ed101c]
        mov dword ptr ds : [esi+4], 0
        lea ecx, ds:[ecx]
        public_6eb1d80 : nop
        mov dword ptr ds : [esi+4], 0
        public_6eb1d87 : nop
        lea eax, ss:[ebp-1]
        cmp eax, 9
        mov dword ptr ds : [esi], ebp
        ja public_6eb1e60
/*FIXUP jmp dword ptr ds : [eax*4+public_6eb1e6c] @0x6eb1d95*/
  JMPTB cmp eax, 0
  JMPTB je public_6eb1e4b
  JMPTB cmp eax, 1
  JMPTB je public_6eb1e5a
  JMPTB cmp eax, 2
  JMPTB je public_6eb1db8
  JMPTB cmp eax, 3
  JMPTB je public_6eb1db2
  JMPTB cmp eax, 4
  JMPTB je public_6eb1dd3
  JMPTB cmp eax, 5
  JMPTB je public_6eb1e24
  JMPTB cmp eax, 6
  JMPTB je public_6eb1dd3
  JMPTB cmp eax, 7
  JMPTB je public_6eb1dc4
  JMPTB cmp eax, 8
  JMPTB je public_6eb1e4b
  JMPTB cmp eax, 9
  JMPTB je public_6eb1e5a
  JMPTB int 3
        public_6eb1d9c : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ds : [esi+4], 0
        je public_6eb1d80
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_6eb1d80
        public_6eb1db2 : nop
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], ecx
        public_6eb1db8 : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        public_6eb1dc4 : nop
        mov ecx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+4], ecx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6eb1dd3 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov ebp, dword ptr ds : [edi+4]
        je public_6eb1df0
        push eax
        push 0
        call ebx
        push eax
        call dword ptr ds : [public_6ed101c]
        mov dword ptr ds : [esi+4], 0
        public_6eb1df0 : nop
        test ebp, ebp
        je public_6eb1e60
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        push ecx
        push eax
        call ebx
        push eax
        call dword ptr ds : [public_6ed1018]
        mov dword ptr ds : [esi+4], eax
        mov ecx, ebp
        mov edx, eax
        public_6eb1e11 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6eb1e11
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6eb1e24 : nop
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], edi
        je public_6eb1e37
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_6eb1e37 : nop
        test ebp, ebp
        je public_6eb1e60
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+8]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6eb1e4b : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6eb1e5a : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        public_6eb1e60 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eb1d40)
        ASM_EXPORT_ENTRY_FIRST(0x6eb1db2, public_6eb1db2)
        ASM_EXPORT_ENTRY(0x6eb1db8, public_6eb1db8)
        ASM_EXPORT_ENTRY(0x6eb1dc4, public_6eb1dc4)
        ASM_EXPORT_ENTRY(0x6eb1dd3, public_6eb1dd3)
        ASM_EXPORT_ENTRY(0x6eb1e24, public_6eb1e24)
        ASM_EXPORT_ENTRY(0x6eb1e4b, public_6eb1e4b)
        ASM_EXPORT_ENTRY_LAST(0x6eb1e5a, public_6eb1e5a)
    }
}

#undef public_6eb1d63
#undef public_6eb1d80
#undef public_6eb1d87
#undef public_6eb1d9c
#undef public_6eb1db2
#undef public_6eb1db8
#undef public_6eb1dc4
#undef public_6eb1dd3
#undef public_6eb1df0
#undef public_6eb1e11
#undef public_6eb1e24
#undef public_6eb1e37
#undef public_6eb1e4b
#undef public_6eb1e5a
#undef public_6eb1e60

#pragma init_seg(compiler)
extern "C" void const* const public_6eb1db2 = __AsmFindLabelExport(&internal_6eb1d40, 0x6eb1db2);
extern "C" void const* const public_6eb1db8 = __AsmFindLabelExport(&internal_6eb1d40, 0x6eb1db8);
extern "C" void const* const public_6eb1dc4 = __AsmFindLabelExport(&internal_6eb1d40, 0x6eb1dc4);
extern "C" void const* const public_6eb1dd3 = __AsmFindLabelExport(&internal_6eb1d40, 0x6eb1dd3);
extern "C" void const* const public_6eb1e24 = __AsmFindLabelExport(&internal_6eb1d40, 0x6eb1e24);
extern "C" void const* const public_6eb1e4b = __AsmFindLabelExport(&internal_6eb1d40, 0x6eb1e4b);
extern "C" void const* const public_6eb1e5a = __AsmFindLabelExport(&internal_6eb1d40, 0x6eb1e5a);
