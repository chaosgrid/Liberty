#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46d20);
CLANG_FORWARD_PROC_SYMBOL(public_6d572e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d6322b _public_6d6322b
#define public_6d63236 _public_6d63236
#define public_6d63242 _public_6d63242

PROC_DECLARE(0x6d63220, internal_6d63220, public_6d63220);
/* CHUNK of public_6d4a200 */
extern "C" NAKED register_t __cdecl internal_6d63220()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x93C]
        jmp public_6d46d20
        public_6d6322b : nop
        lea ecx, ss:[ebp-0x5A4]
        jmp public_6d572e0
        public_6d63236 : nop
        lea ecx, ss:[ebp-0x958]
        jmp dword ptr ds : [public_6d643f0]
        public_6d63242 : nop
        mov eax, offset public_6d755c8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63220)
        ASM_EXPORT_ENTRY_FIRST(0x6d6322b, public_6d6322b)
        ASM_EXPORT_ENTRY(0x6d63236, public_6d63236)
        ASM_EXPORT_ENTRY_LAST(0x6d63242, public_6d63242)
    }
}

#undef public_6d6322b
#undef public_6d63236
#undef public_6d63242

#pragma init_seg(compiler)
extern "C" void const* const public_6d6322b = __AsmFindLabelExport(&internal_6d63220, 0x6d6322b);
extern "C" void const* const public_6d63236 = __AsmFindLabelExport(&internal_6d63220, 0x6d63236);
extern "C" void const* const public_6d63242 = __AsmFindLabelExport(&internal_6d63220, 0x6d63242);
