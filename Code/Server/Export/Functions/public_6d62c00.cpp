#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d20a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d241f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62c08 _public_6d62c08
#define public_6d62c13 _public_6d62c13
#define public_6d62c1b _public_6d62c1b
#define public_6d62c23 _public_6d62c23

PROC_DECLARE(0x6d62c00, internal_6d62c00, public_6d62c00);
/* CHUNK of public_6d314d0 */
extern "C" NAKED register_t __cdecl internal_6d62c00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6d241f0
        public_6d62c08 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x24
        jmp public_6d209f0
        public_6d62c13 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6d20a40
        public_6d62c1b : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6d20a40
        public_6d62c23 : nop
        mov eax, offset public_6d73f64
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62c00)
        ASM_EXPORT_ENTRY_FIRST(0x6d62c08, public_6d62c08)
        ASM_EXPORT_ENTRY(0x6d62c13, public_6d62c13)
        ASM_EXPORT_ENTRY(0x6d62c1b, public_6d62c1b)
        ASM_EXPORT_ENTRY_LAST(0x6d62c23, public_6d62c23)
    }
}

#undef public_6d62c08
#undef public_6d62c13
#undef public_6d62c1b
#undef public_6d62c23

#pragma init_seg(compiler)
extern "C" void const* const public_6d62c08 = __AsmFindLabelExport(&internal_6d62c00, 0x6d62c08);
extern "C" void const* const public_6d62c13 = __AsmFindLabelExport(&internal_6d62c00, 0x6d62c13);
extern "C" void const* const public_6d62c1b = __AsmFindLabelExport(&internal_6d62c00, 0x6d62c1b);
extern "C" void const* const public_6d62c23 = __AsmFindLabelExport(&internal_6d62c00, 0x6d62c23);
