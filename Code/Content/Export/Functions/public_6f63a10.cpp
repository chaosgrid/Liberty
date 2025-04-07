#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f63a10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f63a25 _public_6f63a25
#define public_6f63a30 _public_6f63a30
#define public_6f63a3f _public_6f63a3f
#define public_6f63a63 _public_6f63a63

PROC_DECLARE(0x6f63a10, internal_6f63a10, public_6f63a10);
/* CHUNK of public_6f62f50 */
extern "C" NAKED register_t __cdecl internal_6f63a10()
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
        je public_6f63a63
        push ebx
        push edi
        public_6f63a25 : nop
        mov ebx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        cmp edi, ebx
        je public_6f63a3f
        nop 
        public_6f63a30 : nop
        push edi
        mov ecx, esi
        call public_6ebf6f0
        add edi, 0x44
        cmp edi, ebx
        jne public_6f63a30
        public_6f63a3f : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ss : [esp+0x14]
        add esi, 0x10
        add esp, 4
        cmp esi, eax
        jne public_6f63a25
        pop edi
        pop ebx
        public_6f63a63 : nop
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
        UNREACHABLE_TRAP(0x6f63a10)
        ASM_EXPORT_ENTRY_FIRST(0x6f63a25, public_6f63a25)
        ASM_EXPORT_ENTRY(0x6f63a30, public_6f63a30)
        ASM_EXPORT_ENTRY(0x6f63a3f, public_6f63a3f)
        ASM_EXPORT_ENTRY_LAST(0x6f63a63, public_6f63a63)
    }
}

#undef public_6f63a25
#undef public_6f63a30
#undef public_6f63a3f
#undef public_6f63a63

#pragma init_seg(compiler)
extern "C" void const* const public_6f63a25 = __AsmFindLabelExport(&internal_6f63a10, 0x6f63a25);
extern "C" void const* const public_6f63a30 = __AsmFindLabelExport(&internal_6f63a10, 0x6f63a30);
extern "C" void const* const public_6f63a3f = __AsmFindLabelExport(&internal_6f63a10, 0x6f63a3f);
extern "C" void const* const public_6f63a63 = __AsmFindLabelExport(&internal_6f63a10, 0x6f63a63);
