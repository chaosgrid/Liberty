#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1960);

#define public_66f1983 _public_66f1983
#define public_66f19a0 _public_66f19a0
#define public_66f19a7 _public_66f19a7
#define public_66f19bc _public_66f19bc
#define public_66f19d2 _public_66f19d2
#define public_66f19d8 _public_66f19d8
#define public_66f19e4 _public_66f19e4
#define public_66f19f3 _public_66f19f3
#define public_66f1a10 _public_66f1a10
#define public_66f1a31 _public_66f1a31
#define public_66f1a44 _public_66f1a44
#define public_66f1a57 _public_66f1a57
#define public_66f1a6b _public_66f1a6b
#define public_66f1a7a _public_66f1a7a
#define public_66f1a80 _public_66f1a80

PROC_DECLARE(0x66f1960, internal_66f1960, public_66f1960);
extern "C" NAKED register_t __cdecl internal_66f1960()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ds : [public_6701018]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [edi]
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        cmp ebp, eax
        je public_66f19a7
        sub eax, 5
        je public_66f1983
        dec eax
        je public_66f19bc
        dec eax
        jne public_66f19a0
        public_66f1983 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_66f19a0
        push eax
        push 0
        call ebx
        push eax
        call dword ptr ds : [public_6701014]
        mov dword ptr ds : [esi+4], 0
        lea ecx, ds:[ecx]
        public_66f19a0 : nop
        mov dword ptr ds : [esi+4], 0
        public_66f19a7 : nop
        lea eax, ss:[ebp-1]
        cmp eax, 9
        mov dword ptr ds : [esi], ebp
        ja public_66f1a80
/*FIXUP jmp dword ptr ds : [eax*4+public_66f1a8c] @0x66f19b5*/
  JMPTB cmp eax, 0
  JMPTB je public_66f1a6b
  JMPTB cmp eax, 1
  JMPTB je public_66f1a7a
  JMPTB cmp eax, 2
  JMPTB je public_66f19d8
  JMPTB cmp eax, 3
  JMPTB je public_66f19d2
  JMPTB cmp eax, 4
  JMPTB je public_66f19f3
  JMPTB cmp eax, 5
  JMPTB je public_66f1a44
  JMPTB cmp eax, 6
  JMPTB je public_66f19f3
  JMPTB cmp eax, 7
  JMPTB je public_66f19e4
  JMPTB cmp eax, 8
  JMPTB je public_66f1a6b
  JMPTB cmp eax, 9
  JMPTB je public_66f1a7a
  JMPTB int 3
        public_66f19bc : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ds : [esi+4], 0
        je public_66f19a0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_66f19a0
        public_66f19d2 : nop
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], ecx
        public_66f19d8 : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        public_66f19e4 : nop
        mov ecx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+4], ecx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_66f19f3 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov ebp, dword ptr ds : [edi+4]
        je public_66f1a10
        push eax
        push 0
        call ebx
        push eax
        call dword ptr ds : [public_6701014]
        mov dword ptr ds : [esi+4], 0
        public_66f1a10 : nop
        test ebp, ebp
        je public_66f1a80
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        push ecx
        push eax
        call ebx
        push eax
        call dword ptr ds : [public_670101c]
        mov dword ptr ds : [esi+4], eax
        mov ecx, ebp
        mov edx, eax
        public_66f1a31 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_66f1a31
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_66f1a44 : nop
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], edi
        je public_66f1a57
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_66f1a57 : nop
        test ebp, ebp
        je public_66f1a80
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+8]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_66f1a6b : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_66f1a7a : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        public_66f1a80 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x66f1960)
        ASM_EXPORT_ENTRY_FIRST(0x66f19d2, public_66f19d2)
        ASM_EXPORT_ENTRY(0x66f19d8, public_66f19d8)
        ASM_EXPORT_ENTRY(0x66f19e4, public_66f19e4)
        ASM_EXPORT_ENTRY(0x66f19f3, public_66f19f3)
        ASM_EXPORT_ENTRY(0x66f1a44, public_66f1a44)
        ASM_EXPORT_ENTRY(0x66f1a6b, public_66f1a6b)
        ASM_EXPORT_ENTRY_LAST(0x66f1a7a, public_66f1a7a)
    }
}

#undef public_66f1983
#undef public_66f19a0
#undef public_66f19a7
#undef public_66f19bc
#undef public_66f19d2
#undef public_66f19d8
#undef public_66f19e4
#undef public_66f19f3
#undef public_66f1a10
#undef public_66f1a31
#undef public_66f1a44
#undef public_66f1a57
#undef public_66f1a6b
#undef public_66f1a7a
#undef public_66f1a80

#pragma init_seg(compiler)
extern "C" void const* const public_66f19d2 = __AsmFindLabelExport(&internal_66f1960, 0x66f19d2);
extern "C" void const* const public_66f19d8 = __AsmFindLabelExport(&internal_66f1960, 0x66f19d8);
extern "C" void const* const public_66f19e4 = __AsmFindLabelExport(&internal_66f1960, 0x66f19e4);
extern "C" void const* const public_66f19f3 = __AsmFindLabelExport(&internal_66f1960, 0x66f19f3);
extern "C" void const* const public_66f1a44 = __AsmFindLabelExport(&internal_66f1960, 0x66f1a44);
extern "C" void const* const public_66f1a6b = __AsmFindLabelExport(&internal_66f1960, 0x66f1a6b);
extern "C" void const* const public_66f1a7a = __AsmFindLabelExport(&internal_66f1960, 0x66f1a7a);
