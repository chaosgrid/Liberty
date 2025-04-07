#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1660);
CLANG_FORWARD_PROC_SYMBOL(public_6eb16c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb19d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1d40);

#define public_6eb1bc7 _public_6eb1bc7
#define public_6eb1bdc _public_6eb1bdc
#define public_6eb1be4 _public_6eb1be4
#define public_6eb1bea _public_6eb1bea
#define public_6eb1bf6 _public_6eb1bf6
#define public_6eb1bfe _public_6eb1bfe
#define public_6eb1c1f _public_6eb1c1f
#define public_6eb1c44 _public_6eb1c44
#define public_6eb1c4e _public_6eb1c4e
#define public_6eb1c52 _public_6eb1c52
#define public_6eb1c66 _public_6eb1c66
#define public_6eb1c77 _public_6eb1c77
#define public_6eb1c84 _public_6eb1c84
#define public_6eb1c8c _public_6eb1c8c
#define public_6eb1c92 _public_6eb1c92
#define public_6eb1c9e _public_6eb1c9e
#define public_6eb1ca6 _public_6eb1ca6
#define public_6eb1cb3 _public_6eb1cb3
#define public_6eb1cc0 _public_6eb1cc0
#define public_6eb1cc8 _public_6eb1cc8
#define public_6eb1cce _public_6eb1cce
#define public_6eb1ce3 _public_6eb1ce3

PROC_DECLARE(0x6eb1b70, internal_6eb1b70, public_6eb1b70);
extern "C" NAKED register_t __cdecl internal_6eb1b70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push esi
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+0x6C]
        mov esi, dword ptr ss : [esp+0xC]
        cmp eax, esi
        jbe public_6eb1ce3
        mov ecx, dword ptr ss : [esp+8]
        imul esi, 0x4C
        mov eax, dword ptr ds : [esi+ecx]
        add esi, ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [ebp+4], ecx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], edx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], eax
        mov eax, dword ptr ss : [ebp+0x10]
        lea ebx, ss:[ebp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, eax
        je public_6eb1bc7
        mov ecx, ebx
        call public_6eb1660
        public_6eb1bc7 : nop
        lea eax, ds:[edi-1]
        cmp eax, 9
        mov dword ptr ds : [ebx], edi
        ja public_6eb1c52
/*FIXUP jmp dword ptr ds : [eax*4+public_6eb1cec] @0x6eb1bd5*/
  JMPTB cmp eax, 0
  JMPTB je public_6eb1bdc
  JMPTB cmp eax, 1
  JMPTB je public_6eb1c84
  JMPTB cmp eax, 2
  JMPTB je public_6eb1bea
  JMPTB cmp eax, 3
  JMPTB je public_6eb1be4
  JMPTB cmp eax, 4
  JMPTB je public_6eb1bfe
  JMPTB cmp eax, 5
  JMPTB je public_6eb1c77
  JMPTB cmp eax, 6
  JMPTB je public_6eb1bfe
  JMPTB cmp eax, 7
  JMPTB je public_6eb1c84
  JMPTB cmp eax, 8
  JMPTB je public_6eb1bf6
  JMPTB cmp eax, 9
  JMPTB je public_6eb1bdc
  JMPTB int 3
        public_6eb1bdc : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ebx+4], ecx
        jmp public_6eb1c52
        public_6eb1be4 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [ebx+0x10], eax
        public_6eb1bea : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [ebx+0xC], ecx
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [ebx+8], edx
        public_6eb1bf6 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ebx+4], eax
        jmp public_6eb1c52
        public_6eb1bfe : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        mov ebp, dword ptr ds : [esi+0x14]
        je public_6eb1c1f
        push eax
        push 0
        call dword ptr ds : [public_6ed1020]
        push eax
        call dword ptr ds : [public_6ed101c]
        mov dword ptr ds : [ebx+4], 0
        public_6eb1c1f : nop
        test ebp, ebp
        je public_6eb1c4e
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        push ecx
        push eax
        call dword ptr ds : [public_6ed1020]
        push eax
        call dword ptr ds : [public_6ed1018]
        mov dword ptr ds : [ebx+4], eax
        mov ecx, ebp
        mov edx, eax
        public_6eb1c44 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6eb1c44
        public_6eb1c4e : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6eb1c52 : nop
        mov ebx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ss : [ebp+0x24]
        cmp ebx, eax
        lea edi, ss:[ebp+0x24]
        je public_6eb1c66
        mov ecx, edi
        call public_6eb1660
        public_6eb1c66 : nop
        lea eax, ds:[ebx-1]
        cmp eax, 9
        mov dword ptr ds : [edi], ebx
        ja public_6eb1cce
/*FIXUP jmp dword ptr ds : [eax*4+public_6eb1d14] @0x6eb1c70*/
  JMPTB cmp eax, 0
  JMPTB je public_6eb1cc0
  JMPTB cmp eax, 1
  JMPTB je public_6eb1cc8
  JMPTB cmp eax, 2
  JMPTB je public_6eb1c92
  JMPTB cmp eax, 3
  JMPTB je public_6eb1c8c
  JMPTB cmp eax, 4
  JMPTB je public_6eb1ca6
  JMPTB cmp eax, 5
  JMPTB je public_6eb1cb3
  JMPTB cmp eax, 6
  JMPTB je public_6eb1ca6
  JMPTB cmp eax, 7
  JMPTB je public_6eb1c9e
  JMPTB cmp eax, 8
  JMPTB je public_6eb1cc0
  JMPTB cmp eax, 9
  JMPTB je public_6eb1cc8
  JMPTB int 3
        public_6eb1c77 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        mov ecx, ebx
        call public_6eb19d0
        jmp public_6eb1c52
        public_6eb1c84 : nop
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [ebx+4], edx
        jmp public_6eb1c52
        public_6eb1c8c : nop
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [edi+0x10], ecx
        public_6eb1c92 : nop
        mov edx, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [edi+0xC], edx
        mov eax, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [edi+8], eax
        public_6eb1c9e : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+4], ecx
        jmp public_6eb1cce
        public_6eb1ca6 : nop
        mov edx, dword ptr ds : [esi+0x28]
        push edx
        mov ecx, edi
        call public_6eb16c0
        jmp public_6eb1cce
        public_6eb1cb3 : nop
        mov eax, dword ptr ds : [esi+0x28]
        push eax
        mov ecx, edi
        call public_6eb19d0
        jmp public_6eb1cce
        public_6eb1cc0 : nop
        mov edx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+4], edx
        jmp public_6eb1cce
        public_6eb1cc8 : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [edi+4], eax
        public_6eb1cce : nop
        add esi, 0x38
        push esi
        lea ecx, ss:[ebp+0x38]
        call public_6eb1d40
        pop edi
        pop ebp
        pop ebx
        xor eax, eax
        pop esi
        ret 0xC
        public_6eb1ce3 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6eb1b70)
        ASM_EXPORT_ENTRY_FIRST(0x6eb1bdc, public_6eb1bdc)
        ASM_EXPORT_ENTRY(0x6eb1be4, public_6eb1be4)
        ASM_EXPORT_ENTRY(0x6eb1bea, public_6eb1bea)
        ASM_EXPORT_ENTRY(0x6eb1bf6, public_6eb1bf6)
        ASM_EXPORT_ENTRY(0x6eb1bfe, public_6eb1bfe)
        ASM_EXPORT_ENTRY(0x6eb1c77, public_6eb1c77)
        ASM_EXPORT_ENTRY(0x6eb1c84, public_6eb1c84)
        ASM_EXPORT_ENTRY(0x6eb1c8c, public_6eb1c8c)
        ASM_EXPORT_ENTRY(0x6eb1c92, public_6eb1c92)
        ASM_EXPORT_ENTRY(0x6eb1c9e, public_6eb1c9e)
        ASM_EXPORT_ENTRY(0x6eb1ca6, public_6eb1ca6)
        ASM_EXPORT_ENTRY(0x6eb1cb3, public_6eb1cb3)
        ASM_EXPORT_ENTRY(0x6eb1cc0, public_6eb1cc0)
        ASM_EXPORT_ENTRY_LAST(0x6eb1cc8, public_6eb1cc8)
    }
}

#undef public_6eb1bc7
#undef public_6eb1bdc
#undef public_6eb1be4
#undef public_6eb1bea
#undef public_6eb1bf6
#undef public_6eb1bfe
#undef public_6eb1c1f
#undef public_6eb1c44
#undef public_6eb1c4e
#undef public_6eb1c52
#undef public_6eb1c66
#undef public_6eb1c77
#undef public_6eb1c84
#undef public_6eb1c8c
#undef public_6eb1c92
#undef public_6eb1c9e
#undef public_6eb1ca6
#undef public_6eb1cb3
#undef public_6eb1cc0
#undef public_6eb1cc8
#undef public_6eb1cce
#undef public_6eb1ce3

#pragma init_seg(compiler)
extern "C" void const* const public_6eb1bdc = __AsmFindLabelExport(&internal_6eb1b70, 0x6eb1bdc);
extern "C" void const* const public_6eb1be4 = __AsmFindLabelExport(&internal_6eb1b70, 0x6eb1be4);
extern "C" void const* const public_6eb1bea = __AsmFindLabelExport(&internal_6eb1b70, 0x6eb1bea);
extern "C" void const* const public_6eb1bf6 = __AsmFindLabelExport(&internal_6eb1b70, 0x6eb1bf6);
extern "C" void const* const public_6eb1bfe = __AsmFindLabelExport(&internal_6eb1b70, 0x6eb1bfe);
extern "C" void const* const public_6eb1c77 = __AsmFindLabelExport(&internal_6eb1b70, 0x6eb1c77);
extern "C" void const* const public_6eb1c84 = __AsmFindLabelExport(&internal_6eb1b70, 0x6eb1c84);
extern "C" void const* const public_6eb1c8c = __AsmFindLabelExport(&internal_6eb1b70, 0x6eb1c8c);
extern "C" void const* const public_6eb1c92 = __AsmFindLabelExport(&internal_6eb1b70, 0x6eb1c92);
extern "C" void const* const public_6eb1c9e = __AsmFindLabelExport(&internal_6eb1b70, 0x6eb1c9e);
extern "C" void const* const public_6eb1ca6 = __AsmFindLabelExport(&internal_6eb1b70, 0x6eb1ca6);
extern "C" void const* const public_6eb1cb3 = __AsmFindLabelExport(&internal_6eb1b70, 0x6eb1cb3);
extern "C" void const* const public_6eb1cc0 = __AsmFindLabelExport(&internal_6eb1b70, 0x6eb1cc0);
extern "C" void const* const public_6eb1cc8 = __AsmFindLabelExport(&internal_6eb1b70, 0x6eb1cc8);
