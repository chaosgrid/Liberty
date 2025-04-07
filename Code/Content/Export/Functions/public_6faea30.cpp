#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faea39 _public_6faea39
#define public_6faea42 _public_6faea42

PROC_DECLARE(0x6faea30, internal_6faea30, public_6faea30);
/* CHUNK of public_6f32190 */
extern "C" NAKED register_t __cdecl internal_6faea30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6fb3034]
        public_6faea39 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp dword ptr ds : [public_6fb3034]
        public_6faea42 : nop
        mov eax, offset public_6fc3a0c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faea30)
        ASM_EXPORT_ENTRY_FIRST(0x6faea39, public_6faea39)
        ASM_EXPORT_ENTRY_LAST(0x6faea42, public_6faea42)
    }
}

#undef public_6faea39
#undef public_6faea42

#pragma init_seg(compiler)
extern "C" void const* const public_6faea39 = __AsmFindLabelExport(&internal_6faea30, 0x6faea39);
extern "C" void const* const public_6faea42 = __AsmFindLabelExport(&internal_6faea30, 0x6faea42);
