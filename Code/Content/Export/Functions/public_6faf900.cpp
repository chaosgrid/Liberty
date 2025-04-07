#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5bb20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf908 _public_6faf908
#define public_6faf913 _public_6faf913
#define public_6faf91b _public_6faf91b
#define public_6faf923 _public_6faf923

PROC_DECLARE(0x6faf900, internal_6faf900, public_6faf900);
/* CHUNK of public_6f5beb0 */
extern "C" NAKED register_t __cdecl internal_6faf900()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x78]
        jmp public_6eec8d0
        public_6faf908 : nop
        lea ecx, ss:[ebp-0x88]
        jmp public_6eec8d0
        public_6faf913 : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_6f5bb20
        public_6faf91b : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_6f5bb20
        public_6faf923 : nop
        mov eax, offset public_6fc4914
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf900)
        ASM_EXPORT_ENTRY_FIRST(0x6faf908, public_6faf908)
        ASM_EXPORT_ENTRY(0x6faf913, public_6faf913)
        ASM_EXPORT_ENTRY(0x6faf91b, public_6faf91b)
        ASM_EXPORT_ENTRY_LAST(0x6faf923, public_6faf923)
    }
}

#undef public_6faf908
#undef public_6faf913
#undef public_6faf91b
#undef public_6faf923

#pragma init_seg(compiler)
extern "C" void const* const public_6faf908 = __AsmFindLabelExport(&internal_6faf900, 0x6faf908);
extern "C" void const* const public_6faf913 = __AsmFindLabelExport(&internal_6faf900, 0x6faf913);
extern "C" void const* const public_6faf91b = __AsmFindLabelExport(&internal_6faf900, 0x6faf91b);
extern "C" void const* const public_6faf923 = __AsmFindLabelExport(&internal_6faf900, 0x6faf923);
