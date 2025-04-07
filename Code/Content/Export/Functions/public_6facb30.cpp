#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eacae0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facb39 _public_6facb39
#define public_6facb42 _public_6facb42
#define public_6facb4d _public_6facb4d

PROC_DECLARE(0x6facb30, internal_6facb30, public_6facb30);
/* CHUNK of public_6f00b90 */
extern "C" NAKED register_t __cdecl internal_6facb30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x44]
        jmp dword ptr ds : [public_6fb3034]
        public_6facb39 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_6fb3034]
        public_6facb42 : nop
        lea ecx, ss:[ebp-0x26C]
        jmp public_6eacae0
        public_6facb4d : nop
        mov eax, offset public_6fc17e8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facb30)
        ASM_EXPORT_ENTRY_FIRST(0x6facb39, public_6facb39)
        ASM_EXPORT_ENTRY(0x6facb42, public_6facb42)
        ASM_EXPORT_ENTRY_LAST(0x6facb4d, public_6facb4d)
    }
}

#undef public_6facb39
#undef public_6facb42
#undef public_6facb4d

#pragma init_seg(compiler)
extern "C" void const* const public_6facb39 = __AsmFindLabelExport(&internal_6facb30, 0x6facb39);
extern "C" void const* const public_6facb42 = __AsmFindLabelExport(&internal_6facb30, 0x6facb42);
extern "C" void const* const public_6facb4d = __AsmFindLabelExport(&internal_6facb30, 0x6facb4d);
