#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfb030);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60c39);

#define public_6cfb08f _public_6cfb08f
#define public_6cfb098 _public_6cfb098
#define public_6cfb0ce _public_6cfb0ce
#define public_6cfb0d0 _public_6cfb0d0
#define public_6cfb0f9 _public_6cfb0f9
#define public_6cfb102 _public_6cfb102
#define public_6cfb10b _public_6cfb10b
#define public_6cfb122 _public_6cfb122
#define public_6cfb13f _public_6cfb13f
#define public_6cfb148 _public_6cfb148

PROC_DECLARE(0x6cfb030, internal_6cfb030, public_6cfb030);
/* CHUNK of public_6cfad60 */
extern "C" NAKED register_t __cdecl internal_6cfb030()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6d60c39 @0x6cfb032*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60c39
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov ebx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [public_6d64b80]
        mov ebp, dword ptr ds : [eax]
        xor edi, edi
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_6cfb08f
        mov al, byte ptr ds : [ebx-1]
        test al, al
        je public_6cfb08f
        cmp al, 0xFF
        je public_6cfb08f
        push 1
        call dword ptr ds : [public_6d64b74]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6d64b08]
        xor edi, edi
        public_6cfb08f : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        jae public_6cfb098
        mov ebp, eax
        public_6cfb098 : nop
        cmp ebp, edi
        jbe public_6cfb0d0
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[ecx+ebp]
        push edx
        push ecx
        call dword ptr ds : [public_6d64c90]
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6cfb0ce
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [edi+eax], 0
        public_6cfb0ce : nop
        xor edi, edi
        public_6cfb0d0 : nop
        mov eax, dword ptr ds : [esi+0x10]
        or ebp, 0xFFFFFFFF
        cmp eax, ebp
        je public_6cfb10b
        cmp dword ptr ds : [esi+0x14], edi
        mov ebx, dword ptr ds : [public_6d64a70]
        je public_6cfb102
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, edi
        je public_6cfb0f9
        push eax
        call dword ptr ds : [public_6d64a68]
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        public_6cfb0f9 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        public_6cfb102 : nop
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        call ebx
        mov dword ptr ds : [esi+0x10], ebp
        public_6cfb10b : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, edi
        je public_6cfb122
        push eax
        call dword ptr ds : [public_6d64c94]
        add esp, 4
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        public_6cfb122 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        mov dword ptr ds : [esi+0x20], edi
        je public_6cfb148
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6cfb13f
        cmp cl, 0xFF
        je public_6cfb13f
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6cfb148
        public_6cfb13f : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6cfb148 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6cfb030)
        ASM_EXPORT_ENTRY_FIRST(0x6cfb08f, public_6cfb08f)
        ASM_EXPORT_ENTRY(0x6cfb098, public_6cfb098)
        ASM_EXPORT_ENTRY(0x6cfb0ce, public_6cfb0ce)
        ASM_EXPORT_ENTRY(0x6cfb0d0, public_6cfb0d0)
        ASM_EXPORT_ENTRY(0x6cfb0f9, public_6cfb0f9)
        ASM_EXPORT_ENTRY(0x6cfb102, public_6cfb102)
        ASM_EXPORT_ENTRY(0x6cfb10b, public_6cfb10b)
        ASM_EXPORT_ENTRY(0x6cfb122, public_6cfb122)
        ASM_EXPORT_ENTRY(0x6cfb13f, public_6cfb13f)
        ASM_EXPORT_ENTRY_LAST(0x6cfb148, public_6cfb148)
    }
}

#undef public_6cfb08f
#undef public_6cfb098
#undef public_6cfb0ce
#undef public_6cfb0d0
#undef public_6cfb0f9
#undef public_6cfb102
#undef public_6cfb10b
#undef public_6cfb122
#undef public_6cfb13f
#undef public_6cfb148

#pragma init_seg(compiler)
extern "C" void const* const public_6cfb08f = __AsmFindLabelExport(&internal_6cfb030, 0x6cfb08f);
extern "C" void const* const public_6cfb098 = __AsmFindLabelExport(&internal_6cfb030, 0x6cfb098);
extern "C" void const* const public_6cfb0ce = __AsmFindLabelExport(&internal_6cfb030, 0x6cfb0ce);
extern "C" void const* const public_6cfb0d0 = __AsmFindLabelExport(&internal_6cfb030, 0x6cfb0d0);
extern "C" void const* const public_6cfb0f9 = __AsmFindLabelExport(&internal_6cfb030, 0x6cfb0f9);
extern "C" void const* const public_6cfb102 = __AsmFindLabelExport(&internal_6cfb030, 0x6cfb102);
extern "C" void const* const public_6cfb10b = __AsmFindLabelExport(&internal_6cfb030, 0x6cfb10b);
extern "C" void const* const public_6cfb122 = __AsmFindLabelExport(&internal_6cfb030, 0x6cfb122);
extern "C" void const* const public_6cfb13f = __AsmFindLabelExport(&internal_6cfb030, 0x6cfb13f);
extern "C" void const* const public_6cfb148 = __AsmFindLabelExport(&internal_6cfb030, 0x6cfb148);
