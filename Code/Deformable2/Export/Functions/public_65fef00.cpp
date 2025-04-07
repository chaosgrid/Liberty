#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fef00);

#define public_65fef23 _public_65fef23
#define public_65fef40 _public_65fef40
#define public_65fef47 _public_65fef47
#define public_65fef5c _public_65fef5c
#define public_65fef72 _public_65fef72
#define public_65fef78 _public_65fef78
#define public_65fef84 _public_65fef84
#define public_65fef93 _public_65fef93
#define public_65fefb0 _public_65fefb0
#define public_65fefd1 _public_65fefd1
#define public_65fefe4 _public_65fefe4
#define public_65feff7 _public_65feff7
#define public_65ff00b _public_65ff00b
#define public_65ff01a _public_65ff01a
#define public_65ff020 _public_65ff020

PROC_DECLARE(0x65fef00, internal_65fef00, public_65fef00);
extern "C" NAKED register_t __cdecl internal_65fef00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ds : [public_6601020]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ds : [edi]
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        cmp ebp, eax
        je public_65fef47
        sub eax, 5
        je public_65fef23
        dec eax
        je public_65fef5c
        dec eax
        jne public_65fef40
        public_65fef23 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_65fef40
        push eax
        push 0
        call ebx
        push eax
        call dword ptr ds : [public_6601018]
        mov dword ptr ds : [esi+4], 0
        lea ecx, ds:[ecx]
        public_65fef40 : nop
        mov dword ptr ds : [esi+4], 0
        public_65fef47 : nop
        lea eax, ss:[ebp-1]
        cmp eax, 9
        mov dword ptr ds : [esi], ebp
        ja public_65ff020
/*FIXUP jmp dword ptr ds : [eax*4+public_65ff02c] @0x65fef55*/
  JMPTB cmp eax, 0
  JMPTB je public_65ff00b
  JMPTB cmp eax, 1
  JMPTB je public_65ff01a
  JMPTB cmp eax, 2
  JMPTB je public_65fef78
  JMPTB cmp eax, 3
  JMPTB je public_65fef72
  JMPTB cmp eax, 4
  JMPTB je public_65fef93
  JMPTB cmp eax, 5
  JMPTB je public_65fefe4
  JMPTB cmp eax, 6
  JMPTB je public_65fef93
  JMPTB cmp eax, 7
  JMPTB je public_65fef84
  JMPTB cmp eax, 8
  JMPTB je public_65ff00b
  JMPTB cmp eax, 9
  JMPTB je public_65ff01a
  JMPTB int 3
        public_65fef5c : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ds : [esi+4], 0
        je public_65fef40
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_65fef40
        public_65fef72 : nop
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], ecx
        public_65fef78 : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        public_65fef84 : nop
        mov ecx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+4], ecx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_65fef93 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov ebp, dword ptr ds : [edi+4]
        je public_65fefb0
        push eax
        push 0
        call ebx
        push eax
        call dword ptr ds : [public_6601018]
        mov dword ptr ds : [esi+4], 0
        public_65fefb0 : nop
        test ebp, ebp
        je public_65ff020
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        push ecx
        push eax
        call ebx
        push eax
        call dword ptr ds : [public_6601014]
        mov dword ptr ds : [esi+4], eax
        mov ecx, ebp
        mov edx, eax
        public_65fefd1 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_65fefd1
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_65fefe4 : nop
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], edi
        je public_65feff7
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_65feff7 : nop
        test ebp, ebp
        je public_65ff020
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+8]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_65ff00b : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_65ff01a : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], eax
        public_65ff020 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65fef00)
        ASM_EXPORT_ENTRY_FIRST(0x65fef72, public_65fef72)
        ASM_EXPORT_ENTRY(0x65fef78, public_65fef78)
        ASM_EXPORT_ENTRY(0x65fef84, public_65fef84)
        ASM_EXPORT_ENTRY(0x65fef93, public_65fef93)
        ASM_EXPORT_ENTRY(0x65fefe4, public_65fefe4)
        ASM_EXPORT_ENTRY(0x65ff00b, public_65ff00b)
        ASM_EXPORT_ENTRY_LAST(0x65ff01a, public_65ff01a)
    }
}

#undef public_65fef23
#undef public_65fef40
#undef public_65fef47
#undef public_65fef5c
#undef public_65fef72
#undef public_65fef78
#undef public_65fef84
#undef public_65fef93
#undef public_65fefb0
#undef public_65fefd1
#undef public_65fefe4
#undef public_65feff7
#undef public_65ff00b
#undef public_65ff01a
#undef public_65ff020

#pragma init_seg(compiler)
extern "C" void const* const public_65fef72 = __AsmFindLabelExport(&internal_65fef00, 0x65fef72);
extern "C" void const* const public_65fef78 = __AsmFindLabelExport(&internal_65fef00, 0x65fef78);
extern "C" void const* const public_65fef84 = __AsmFindLabelExport(&internal_65fef00, 0x65fef84);
extern "C" void const* const public_65fef93 = __AsmFindLabelExport(&internal_65fef00, 0x65fef93);
extern "C" void const* const public_65fefe4 = __AsmFindLabelExport(&internal_65fef00, 0x65fefe4);
extern "C" void const* const public_65ff00b = __AsmFindLabelExport(&internal_65fef00, 0x65ff00b);
extern "C" void const* const public_65ff01a = __AsmFindLabelExport(&internal_65fef00, 0x65ff01a);
