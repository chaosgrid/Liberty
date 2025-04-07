#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6cee610);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60749 _public_6d60749
#define public_6d60754 _public_6d60754
#define public_6d6075f _public_6d6075f
#define public_6d6076b _public_6d6076b
#define public_6d60776 _public_6d60776

PROC_DECLARE(0x6d60740, internal_6d60740, public_6d60740);
/* CHUNK of public_6cee4a0 */
extern "C" NAKED register_t __cdecl internal_6d60740()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp dword ptr ds : [public_6d64348]
        public_6d60749 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 8
        jmp public_6cecb50
        public_6d60754 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x20
        jmp public_6cecb50
        public_6d6075f : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x38
        jmp dword ptr ds : [public_6d641e4]
        public_6d6076b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        sub ecx, 0xC
        jmp public_6cee610
        public_6d60776 : nop
        mov eax, offset public_6d71058
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60740)
        ASM_EXPORT_ENTRY_FIRST(0x6d60749, public_6d60749)
        ASM_EXPORT_ENTRY(0x6d60754, public_6d60754)
        ASM_EXPORT_ENTRY(0x6d6075f, public_6d6075f)
        ASM_EXPORT_ENTRY(0x6d6076b, public_6d6076b)
        ASM_EXPORT_ENTRY_LAST(0x6d60776, public_6d60776)
    }
}

#undef public_6d60749
#undef public_6d60754
#undef public_6d6075f
#undef public_6d6076b
#undef public_6d60776

#pragma init_seg(compiler)
extern "C" void const* const public_6d60749 = __AsmFindLabelExport(&internal_6d60740, 0x6d60749);
extern "C" void const* const public_6d60754 = __AsmFindLabelExport(&internal_6d60740, 0x6d60754);
extern "C" void const* const public_6d6075f = __AsmFindLabelExport(&internal_6d60740, 0x6d6075f);
extern "C" void const* const public_6d6076b = __AsmFindLabelExport(&internal_6d60740, 0x6d6076b);
extern "C" void const* const public_6d60776 = __AsmFindLabelExport(&internal_6d60740, 0x6d60776);
