#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5d061 _public_6d5d061
#define public_6d5d06b _public_6d5d06b
#define public_6d5d075 _public_6d5d075

PROC_DECLARE(0x6d5d057, internal_6d5d057, public_6d5d057);
/* CHUNK of public_6d355ad */
extern "C" NAKED register_t __cdecl internal_6d5d057()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push dword ptr ss : [ebp-0x14]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d061 : nop
        push dword ptr ss : [ebp-0x14]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d06b : nop
        push dword ptr ss : [ebp-0x14]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d075 : nop
        mov eax, offset public_6d62a48
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5d057)
        ASM_EXPORT_ENTRY_FIRST(0x6d5d061, public_6d5d061)
        ASM_EXPORT_ENTRY(0x6d5d06b, public_6d5d06b)
        ASM_EXPORT_ENTRY_LAST(0x6d5d075, public_6d5d075)
    }
}

#undef public_6d5d061
#undef public_6d5d06b
#undef public_6d5d075

#pragma init_seg(compiler)
extern "C" void const* const public_6d5d061 = __AsmFindLabelExport(&internal_6d5d057, 0x6d5d061);
extern "C" void const* const public_6d5d06b = __AsmFindLabelExport(&internal_6d5d057, 0x6d5d06b);
extern "C" void const* const public_6d5d075 = __AsmFindLabelExport(&internal_6d5d057, 0x6d5d075);
