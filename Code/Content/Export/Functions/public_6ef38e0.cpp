#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef38e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ef38f5 _public_6ef38f5
#define public_6ef3900 _public_6ef3900
#define public_6ef390f _public_6ef390f
#define public_6ef3933 _public_6ef3933

PROC_DECLARE(0x6ef38e0, internal_6ef38e0, public_6ef38e0);
/* CHUNK of public_6ef3830 */
extern "C" NAKED register_t __cdecl internal_6ef38e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ecx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        push esi
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, eax
        mov dword ptr ss : [esp+8], eax
        je public_6ef3933
        push ebx
        push edi
        public_6ef38f5 : nop
        mov ebx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        cmp edi, ebx
        je public_6ef390f
        nop 
        public_6ef3900 : nop
        push edi
        mov ecx, esi
        call public_6ebf6f0
        add edi, 8
        cmp edi, ebx
        jne public_6ef3900
        public_6ef390f : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ss : [esp+0x14]
        add esi, 0x14
        add esp, 4
        cmp esi, eax
        jne public_6ef38f5
        pop edi
        pop ebx
        public_6ef3933 : nop
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        xor eax, eax
        pop esi
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        pop ebp
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef38e0)
        ASM_EXPORT_ENTRY_FIRST(0x6ef38f5, public_6ef38f5)
        ASM_EXPORT_ENTRY(0x6ef3900, public_6ef3900)
        ASM_EXPORT_ENTRY(0x6ef390f, public_6ef390f)
        ASM_EXPORT_ENTRY_LAST(0x6ef3933, public_6ef3933)
    }
}

#undef public_6ef38f5
#undef public_6ef3900
#undef public_6ef390f
#undef public_6ef3933

#pragma init_seg(compiler)
extern "C" void const* const public_6ef38f5 = __AsmFindLabelExport(&internal_6ef38e0, 0x6ef38f5);
extern "C" void const* const public_6ef3900 = __AsmFindLabelExport(&internal_6ef38e0, 0x6ef3900);
extern "C" void const* const public_6ef390f = __AsmFindLabelExport(&internal_6ef38e0, 0x6ef390f);
extern "C" void const* const public_6ef3933 = __AsmFindLabelExport(&internal_6ef38e0, 0x6ef3933);
