#include "FLMaterials-PCH.h"


#define public_66f1bf2 _public_66f1bf2
#define public_66f1c10 _public_66f1c10
#define public_66f1c17 _public_66f1c17
#define public_66f1c3c _public_66f1c3c
#define public_66f1c52 _public_66f1c52
#define public_66f1c60 _public_66f1c60
#define public_66f1c66 _public_66f1c66
#define public_66f1c72 _public_66f1c72
#define public_66f1c80 _public_66f1c80
#define public_66f1ca0 _public_66f1ca0
#define public_66f1cc5 _public_66f1cc5
#define public_66f1cd8 _public_66f1cd8
#define public_66f1cea _public_66f1cea
#define public_66f1cfd _public_66f1cfd
#define public_66f1d02 _public_66f1d02
#define public_66f1d0b _public_66f1d0b

PROC_DECLARE(0x66f1bb0, internal_66f1bb0, public_66f1bb0);
extern "C" NAKED register_t __cdecl internal_66f1bb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x6C]
        mov ebp, dword ptr ss : [esp+0x18]
        cmp eax, ebp
        jbe public_66f1d0b
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x1C]
        mov edx, ebp
        imul edx, 0x4C
        mov edi, dword ptr ds : [edx+eax+0x10]
        mov eax, dword ptr ds : [esi]
        cmp edi, eax
        je public_66f1c17
        sub eax, 5
        je public_66f1bf2
        dec eax
        je public_66f1c3c
        dec eax
        jne public_66f1c10
        public_66f1bf2 : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_66f1c10
        push eax
        push 0
        call dword ptr ds : [public_6701018]
        push eax
        call dword ptr ds : [public_6701014]
        mov dword ptr ds : [esi+4], 0
        public_66f1c10 : nop
        mov dword ptr ds : [esi+4], 0
        public_66f1c17 : nop
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ds : [ebx]
        push ebp
        mov ecx, ebx
        call dword ptr ds : [edx+0x70]
        test eax, eax
        je public_66f1d0b
        mov ecx, dword ptr ds : [esi]
        dec ecx
        cmp ecx, 9
        ja public_66f1d02
/*FIXUP jmp dword ptr ds : [ecx*4+public_66f1d18] @0x66f1c35*/
  JMPTB cmp ecx, 0
  JMPTB je public_66f1c72
  JMPTB cmp ecx, 1
  JMPTB je public_66f1c52
  JMPTB cmp ecx, 2
  JMPTB je public_66f1c66
  JMPTB cmp ecx, 3
  JMPTB je public_66f1c60
  JMPTB cmp ecx, 4
  JMPTB je public_66f1c80
  JMPTB cmp ecx, 5
  JMPTB je public_66f1cd8
  JMPTB cmp ecx, 6
  JMPTB je public_66f1c80
  JMPTB cmp ecx, 7
  JMPTB je public_66f1c72
  JMPTB cmp ecx, 8
  JMPTB je public_66f1c52
  JMPTB cmp ecx, 9
  JMPTB je public_66f1cfd
  JMPTB int 3
        public_66f1c3c : nop
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ds : [esi+4], 0
        je public_66f1c10
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_66f1c10
        public_66f1c52 : nop
        mov ecx, dword ptr ds : [eax]
        pop edi
        mov dword ptr ds : [esi+4], ecx
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_66f1c60 : nop
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [esi+0x10], edx
        public_66f1c66 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0xC], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+8], edx
        public_66f1c72 : nop
        mov eax, dword ptr ds : [eax]
        pop edi
        mov dword ptr ds : [esi+4], eax
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_66f1c80 : nop
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_66f1ca0
        push eax
        push 0
        call dword ptr ds : [public_6701018]
        push eax
        call dword ptr ds : [public_6701014]
        mov dword ptr ds : [esi+4], 0
        public_66f1ca0 : nop
        test ebp, ebp
        je public_66f1d02
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        push ecx
        push eax
        call dword ptr ds : [public_6701018]
        push eax
        call dword ptr ds : [public_670101c]
        mov dword ptr ds : [esi+4], eax
        mov ecx, ebp
        mov edx, eax
        public_66f1cc5 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_66f1cc5
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_66f1cd8 : nop
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+4], eax
        je public_66f1cea
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_66f1cea : nop
        test edi, edi
        je public_66f1d02
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_66f1cfd : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+4], edx
        public_66f1d02 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_66f1d0b : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66f1bb0)
        ASM_EXPORT_ENTRY_FIRST(0x66f1c52, public_66f1c52)
        ASM_EXPORT_ENTRY(0x66f1c60, public_66f1c60)
        ASM_EXPORT_ENTRY(0x66f1c66, public_66f1c66)
        ASM_EXPORT_ENTRY(0x66f1c72, public_66f1c72)
        ASM_EXPORT_ENTRY(0x66f1c80, public_66f1c80)
        ASM_EXPORT_ENTRY(0x66f1cd8, public_66f1cd8)
        ASM_EXPORT_ENTRY_LAST(0x66f1cfd, public_66f1cfd)
    }
}

#undef public_66f1bf2
#undef public_66f1c10
#undef public_66f1c17
#undef public_66f1c3c
#undef public_66f1c52
#undef public_66f1c60
#undef public_66f1c66
#undef public_66f1c72
#undef public_66f1c80
#undef public_66f1ca0
#undef public_66f1cc5
#undef public_66f1cd8
#undef public_66f1cea
#undef public_66f1cfd
#undef public_66f1d02
#undef public_66f1d0b

#pragma init_seg(compiler)
extern "C" void const* const public_66f1c52 = __AsmFindLabelExport(&internal_66f1bb0, 0x66f1c52);
extern "C" void const* const public_66f1c60 = __AsmFindLabelExport(&internal_66f1bb0, 0x66f1c60);
extern "C" void const* const public_66f1c66 = __AsmFindLabelExport(&internal_66f1bb0, 0x66f1c66);
extern "C" void const* const public_66f1c72 = __AsmFindLabelExport(&internal_66f1bb0, 0x66f1c72);
extern "C" void const* const public_66f1c80 = __AsmFindLabelExport(&internal_66f1bb0, 0x66f1c80);
extern "C" void const* const public_66f1cd8 = __AsmFindLabelExport(&internal_66f1bb0, 0x66f1cd8);
extern "C" void const* const public_66f1cfd = __AsmFindLabelExport(&internal_66f1bb0, 0x66f1cfd);
