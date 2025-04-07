#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea76e0);
CLANG_FORWARD_PROC_SYMBOL(public_6efd070);
CLANG_FORWARD_PROC_SYMBOL(public_6efd910);
CLANG_FORWARD_PROC_SYMBOL(public_6efdcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6efdf80);
CLANG_FORWARD_PROC_SYMBOL(public_6efe0e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6efd083 _public_6efd083
#define public_6efd090 _public_6efd090
#define public_6efd0a5 _public_6efd0a5
#define public_6efd0bd _public_6efd0bd
#define public_6efd0c5 _public_6efd0c5
#define public_6efd0cf _public_6efd0cf
#define public_6efd0d6 _public_6efd0d6
#define public_6efd0e2 _public_6efd0e2
#define public_6efd110 _public_6efd110
#define public_6efd144 _public_6efd144
#define public_6efd166 _public_6efd166
#define public_6efd170 _public_6efd170
#define public_6efd193 _public_6efd193

PROC_DECLARE(0x6efd070, internal_6efd070, public_6efd070);
/* CHUNK of public_6efe870 */
extern "C" NAKED register_t __cdecl internal_6efd070()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ds : [public_6fcf390]
        mov eax, dword ptr ds : [ecx]
        sub esp, 8
        cmp eax, ecx
        push esi
        push edi
        je public_6efd0e2
        push ebx
        push ebp
        public_6efd083 : nop
        mov ebp, dword ptr ds : [eax+0x4C]
        mov ebx, dword ptr ds : [eax+0x48]
        mov edx, ebp
        cmp edx, ebp
        je public_6efd0a5
        nop 
        public_6efd090 : nop
        mov esi, edx
        mov edi, ebx
        add edx, 0x34
        mov ecx, 0xD
        add ebx, 0x34
        cmp edx, ebp
        rep movsd
        jne public_6efd090
        public_6efd0a5 : nop
        mov dword ptr ds : [eax+0x4C], ebx
        mov ecx, dword ptr ds : [eax+8]
        mov dl, byte ptr ds : [ecx+0x55]
        test dl, dl
        jne public_6efd0bd
        push ecx
        call public_6efdf80
        add esp, 4
        jmp public_6efd0d6
        public_6efd0bd : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6efd0cf
        public_6efd0c5 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6efd0c5
        public_6efd0cf : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6efd0d6
        mov eax, ecx
        public_6efd0d6 : nop
        mov ecx, dword ptr ds : [public_6fcf390]
        cmp eax, ecx
        jne public_6efd083
        pop ebp
        pop ebx
        public_6efd0e2 : nop
        mov edx, dword ptr ds : [public_6fcf39c]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_6efd166
        mov edx, eax
        cmp eax, edx
        jne public_6efd166
        cmp edi, ecx
        jne public_6efd166
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_6fcf394]
        cmp edi, eax
        mov esi, edi
        je public_6efd144
        lea esp, ss:[esp]
        public_6efd110 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_6fcf38c
        call public_6efdcf0
        mov esi, dword ptr ds : [esi]
        push 0
        lea ecx, ds:[edi+0xC]
        call public_6efe0e0
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [public_6fcf394]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6efd110
        mov ecx, dword ptr ds : [public_6fcf390]
        public_6efd144 : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_6fcf390]
        mov dword ptr ds : [public_6fcf39c], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_6fcf390]
        pop edi
        mov dword ptr ds : [eax+8], eax
        pop esi
        add esp, 8
        ret 
        public_6efd166 : nop
        cmp eax, edi
        je public_6efd193
        lea ebx, ds:[ebx]
        public_6efd170 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_6ea76e0
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6fcf38c
        call public_6efd910
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_6efd170
        public_6efd193 : nop
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6efd070)
        ASM_EXPORT_ENTRY_FIRST(0x6efd083, public_6efd083)
        ASM_EXPORT_ENTRY(0x6efd090, public_6efd090)
        ASM_EXPORT_ENTRY(0x6efd0a5, public_6efd0a5)
        ASM_EXPORT_ENTRY(0x6efd0bd, public_6efd0bd)
        ASM_EXPORT_ENTRY(0x6efd0c5, public_6efd0c5)
        ASM_EXPORT_ENTRY(0x6efd0cf, public_6efd0cf)
        ASM_EXPORT_ENTRY(0x6efd0d6, public_6efd0d6)
        ASM_EXPORT_ENTRY(0x6efd0e2, public_6efd0e2)
        ASM_EXPORT_ENTRY(0x6efd110, public_6efd110)
        ASM_EXPORT_ENTRY(0x6efd144, public_6efd144)
        ASM_EXPORT_ENTRY(0x6efd166, public_6efd166)
        ASM_EXPORT_ENTRY(0x6efd170, public_6efd170)
        ASM_EXPORT_ENTRY_LAST(0x6efd193, public_6efd193)
    }
}

#undef public_6efd083
#undef public_6efd090
#undef public_6efd0a5
#undef public_6efd0bd
#undef public_6efd0c5
#undef public_6efd0cf
#undef public_6efd0d6
#undef public_6efd0e2
#undef public_6efd110
#undef public_6efd144
#undef public_6efd166
#undef public_6efd170
#undef public_6efd193

#pragma init_seg(compiler)
extern "C" void const* const public_6efd083 = __AsmFindLabelExport(&internal_6efd070, 0x6efd083);
extern "C" void const* const public_6efd090 = __AsmFindLabelExport(&internal_6efd070, 0x6efd090);
extern "C" void const* const public_6efd0a5 = __AsmFindLabelExport(&internal_6efd070, 0x6efd0a5);
extern "C" void const* const public_6efd0bd = __AsmFindLabelExport(&internal_6efd070, 0x6efd0bd);
extern "C" void const* const public_6efd0c5 = __AsmFindLabelExport(&internal_6efd070, 0x6efd0c5);
extern "C" void const* const public_6efd0cf = __AsmFindLabelExport(&internal_6efd070, 0x6efd0cf);
extern "C" void const* const public_6efd0d6 = __AsmFindLabelExport(&internal_6efd070, 0x6efd0d6);
extern "C" void const* const public_6efd0e2 = __AsmFindLabelExport(&internal_6efd070, 0x6efd0e2);
extern "C" void const* const public_6efd110 = __AsmFindLabelExport(&internal_6efd070, 0x6efd110);
extern "C" void const* const public_6efd144 = __AsmFindLabelExport(&internal_6efd070, 0x6efd144);
extern "C" void const* const public_6efd166 = __AsmFindLabelExport(&internal_6efd070, 0x6efd166);
extern "C" void const* const public_6efd170 = __AsmFindLabelExport(&internal_6efd070, 0x6efd170);
extern "C" void const* const public_6efd193 = __AsmFindLabelExport(&internal_6efd070, 0x6efd193);
