#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d20a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d241f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62858 _public_6d62858
#define public_6d62863 _public_6d62863
#define public_6d6286b _public_6d6286b
#define public_6d62873 _public_6d62873
#define public_6d6287b _public_6d6287b

PROC_DECLARE(0x6d62850, internal_6d62850, public_6d62850);
/* CHUNK of public_6d220d0 */
extern "C" NAKED register_t __cdecl internal_6d62850()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6d241f0
        public_6d62858 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x24
        jmp public_6d209f0
        public_6d62863 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6d20a40
        public_6d6286b : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6d209f0
        public_6d62873 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6d20a40
        public_6d6287b : nop
        mov eax, offset public_6d735dc
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62850)
        ASM_EXPORT_ENTRY_FIRST(0x6d62858, public_6d62858)
        ASM_EXPORT_ENTRY(0x6d62863, public_6d62863)
        ASM_EXPORT_ENTRY(0x6d6286b, public_6d6286b)
        ASM_EXPORT_ENTRY(0x6d62873, public_6d62873)
        ASM_EXPORT_ENTRY_LAST(0x6d6287b, public_6d6287b)
    }
}

#undef public_6d62858
#undef public_6d62863
#undef public_6d6286b
#undef public_6d62873
#undef public_6d6287b

#pragma init_seg(compiler)
extern "C" void const* const public_6d62858 = __AsmFindLabelExport(&internal_6d62850, 0x6d62858);
extern "C" void const* const public_6d62863 = __AsmFindLabelExport(&internal_6d62850, 0x6d62863);
extern "C" void const* const public_6d6286b = __AsmFindLabelExport(&internal_6d62850, 0x6d6286b);
extern "C" void const* const public_6d62873 = __AsmFindLabelExport(&internal_6d62850, 0x6d62873);
extern "C" void const* const public_6d6287b = __AsmFindLabelExport(&internal_6d62850, 0x6d6287b);
