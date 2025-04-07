#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad208 _public_6fad208
#define public_6fad210 _public_6fad210
#define public_6fad218 _public_6fad218
#define public_6fad220 _public_6fad220
#define public_6fad228 _public_6fad228

PROC_DECLARE(0x6fad200, internal_6fad200, public_6fad200);
/* CHUNK of public_6f0af40 */
extern "C" NAKED register_t __cdecl internal_6fad200()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp public_6ecfa90
        public_6fad208 : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_6f15350
        public_6fad210 : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_6ecfa90
        public_6fad218 : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_6f15350
        public_6fad220 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6fad228 : nop
        mov eax, offset public_6fc20ac
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad200)
        ASM_EXPORT_ENTRY_FIRST(0x6fad208, public_6fad208)
        ASM_EXPORT_ENTRY(0x6fad210, public_6fad210)
        ASM_EXPORT_ENTRY(0x6fad218, public_6fad218)
        ASM_EXPORT_ENTRY(0x6fad220, public_6fad220)
        ASM_EXPORT_ENTRY_LAST(0x6fad228, public_6fad228)
    }
}

#undef public_6fad208
#undef public_6fad210
#undef public_6fad218
#undef public_6fad220
#undef public_6fad228

#pragma init_seg(compiler)
extern "C" void const* const public_6fad208 = __AsmFindLabelExport(&internal_6fad200, 0x6fad208);
extern "C" void const* const public_6fad210 = __AsmFindLabelExport(&internal_6fad200, 0x6fad210);
extern "C" void const* const public_6fad218 = __AsmFindLabelExport(&internal_6fad200, 0x6fad218);
extern "C" void const* const public_6fad220 = __AsmFindLabelExport(&internal_6fad200, 0x6fad220);
extern "C" void const* const public_6fad228 = __AsmFindLabelExport(&internal_6fad200, 0x6fad228);
