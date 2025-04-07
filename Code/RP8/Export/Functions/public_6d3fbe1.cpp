#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3fbe1);

#define public_6d3fbfb _public_6d3fbfb
#define public_6d3fc10 _public_6d3fc10
#define public_6d3fc1d _public_6d3fc1d

PROC_DECLARE(0x6d3fbe1, internal_6d3fbe1, public_6d3fbe1);
/* CHUNK of public_6d3fc22 */
extern "C" NAKED register_t __cdecl internal_6d3fbe1()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        push edi
        je public_6d3fbfb
        push eax
        call dword ptr ds : [public_6d5e03c]
        and dword ptr ds : [esi+8], 0
        and dword ptr ds : [esi+0xC], 0
        public_6d3fbfb : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0xFFFFFFFF
        mov edi, dword ptr ds : [public_6d5e048]
        je public_6d3fc10
        push eax
        call edi
        or dword ptr ds : [esi+4], 0xFFFFFFFF
        public_6d3fc10 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, 0xFFFFFFFF
        je public_6d3fc1d
        push eax
        call edi
        or dword ptr ds : [esi], 0xFFFFFFFF
        public_6d3fc1d : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d3fbe1)
        ASM_EXPORT_ENTRY_FIRST(0x6d3fbfb, public_6d3fbfb)
        ASM_EXPORT_ENTRY(0x6d3fc10, public_6d3fc10)
        ASM_EXPORT_ENTRY_LAST(0x6d3fc1d, public_6d3fc1d)
    }
}

#undef public_6d3fbfb
#undef public_6d3fc10
#undef public_6d3fc1d

#pragma init_seg(compiler)
extern "C" void const* const public_6d3fbfb = __AsmFindLabelExport(&internal_6d3fbe1, 0x6d3fbfb);
extern "C" void const* const public_6d3fc10 = __AsmFindLabelExport(&internal_6d3fbe1, 0x6d3fc10);
extern "C" void const* const public_6d3fc1d = __AsmFindLabelExport(&internal_6d3fbe1, 0x6d3fc1d);
