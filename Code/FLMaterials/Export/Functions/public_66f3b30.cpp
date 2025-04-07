#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f3b30);

#define public_66f3b57 _public_66f3b57
#define public_66f3b70 _public_66f3b70
#define public_66f3b77 _public_66f3b77
#define public_66f3b90 _public_66f3b90
#define public_66f3ba6 _public_66f3ba6
#define public_66f3bb6 _public_66f3bb6
#define public_66f3bbc _public_66f3bbc
#define public_66f3bd4 _public_66f3bd4
#define public_66f3bea _public_66f3bea
#define public_66f3c10 _public_66f3c10
#define public_66f3c21 _public_66f3c21
#define public_66f3c35 _public_66f3c35
#define public_66f3c46 _public_66f3c46
#define public_66f3c54 _public_66f3c54
#define public_66f3c62 _public_66f3c62
#define public_66f3c69 _public_66f3c69

PROC_DECLARE(0x66f3b30, internal_66f3b30, public_66f3b30);
extern "C" NAKED register_t __cdecl internal_66f3b30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ds : [public_6701018]
        push ebp
        mov ebp, dword ptr ds : [public_6701014]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp edi, eax
        je public_66f3b77
        sub eax, 5
        je public_66f3b57
        dec eax
        je public_66f3b90
        dec eax
        jne public_66f3b70
        public_66f3b57 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_66f3b70
        push eax
        push 0
        call ebx
        push eax
        call ebp
        mov dword ptr ds : [esi+4], 0
        lea ecx, ds:[ecx]
        public_66f3b70 : nop
        mov dword ptr ds : [esi+4], 0
        public_66f3b77 : nop
        lea ecx, ds:[edi-1]
        cmp ecx, 9
        mov dword ptr ds : [esi], edi
        ja public_66f3c69
        mov eax, dword ptr ss : [esp+0x18]
/*FIXUP jmp dword ptr ds : [ecx*4+public_66f3c70] @0x66f3b89*/
  JMPTB cmp ecx, 0
  JMPTB je public_66f3c62
  JMPTB cmp ecx, 1
  JMPTB je public_66f3ba6
  JMPTB cmp ecx, 2
  JMPTB je public_66f3bbc
  JMPTB cmp ecx, 3
  JMPTB je public_66f3bb6
  JMPTB cmp ecx, 4
  JMPTB je public_66f3bd4
  JMPTB cmp ecx, 5
  JMPTB je public_66f3c21
  JMPTB cmp ecx, 6
  JMPTB je public_66f3bd4
  JMPTB cmp ecx, 7
  JMPTB je public_66f3c46
  JMPTB cmp ecx, 8
  JMPTB je public_66f3c54
  JMPTB cmp ecx, 9
  JMPTB je public_66f3c62
  JMPTB int 3
        public_66f3b90 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ds : [esi+4], 0
        je public_66f3b70
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_66f3b70
        public_66f3ba6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        pop edi
        mov dword ptr ds : [esi+4], ecx
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_66f3bb6 : nop
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi+0x10], edx
        public_66f3bbc : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0xC], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [eax]
        pop edi
        mov dword ptr ds : [esi+4], eax
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_66f3bd4 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_66f3bea
        push eax
        push 0
        call ebx
        push eax
        call ebp
        mov dword ptr ds : [esi+4], 0
        public_66f3bea : nop
        mov ebp, dword ptr ss : [esp+0x18]
        test ebp, ebp
        je public_66f3c69
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
        nop 
        public_66f3c10 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_66f3c10
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_66f3c21 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        je public_66f3c35
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_66f3c35 : nop
        test edi, edi
        je public_66f3c69
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_66f3c46 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [esi+4], eax
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_66f3c54 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [esi+4], ecx
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_66f3c62 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+4], edx
        public_66f3c69 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x66f3b30)
        ASM_EXPORT_ENTRY_FIRST(0x66f3ba6, public_66f3ba6)
        ASM_EXPORT_ENTRY(0x66f3bb6, public_66f3bb6)
        ASM_EXPORT_ENTRY(0x66f3bbc, public_66f3bbc)
        ASM_EXPORT_ENTRY(0x66f3bd4, public_66f3bd4)
        ASM_EXPORT_ENTRY(0x66f3c21, public_66f3c21)
        ASM_EXPORT_ENTRY(0x66f3c46, public_66f3c46)
        ASM_EXPORT_ENTRY(0x66f3c54, public_66f3c54)
        ASM_EXPORT_ENTRY_LAST(0x66f3c62, public_66f3c62)
    }
}

#undef public_66f3b57
#undef public_66f3b70
#undef public_66f3b77
#undef public_66f3b90
#undef public_66f3ba6
#undef public_66f3bb6
#undef public_66f3bbc
#undef public_66f3bd4
#undef public_66f3bea
#undef public_66f3c10
#undef public_66f3c21
#undef public_66f3c35
#undef public_66f3c46
#undef public_66f3c54
#undef public_66f3c62
#undef public_66f3c69

#pragma init_seg(compiler)
extern "C" void const* const public_66f3ba6 = __AsmFindLabelExport(&internal_66f3b30, 0x66f3ba6);
extern "C" void const* const public_66f3bb6 = __AsmFindLabelExport(&internal_66f3b30, 0x66f3bb6);
extern "C" void const* const public_66f3bbc = __AsmFindLabelExport(&internal_66f3b30, 0x66f3bbc);
extern "C" void const* const public_66f3bd4 = __AsmFindLabelExport(&internal_66f3b30, 0x66f3bd4);
extern "C" void const* const public_66f3c21 = __AsmFindLabelExport(&internal_66f3b30, 0x66f3c21);
extern "C" void const* const public_66f3c46 = __AsmFindLabelExport(&internal_66f3b30, 0x66f3c46);
extern "C" void const* const public_66f3c54 = __AsmFindLabelExport(&internal_66f3b30, 0x66f3c54);
extern "C" void const* const public_66f3c62 = __AsmFindLabelExport(&internal_66f3b30, 0x66f3c62);
