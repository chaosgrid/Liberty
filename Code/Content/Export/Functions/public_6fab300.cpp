#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab30b _public_6fab30b
#define public_6fab316 _public_6fab316
#define public_6fab321 _public_6fab321

PROC_DECLARE(0x6fab300, internal_6fab300, public_6fab300);
/* CHUNK of public_6edae70 */
extern "C" NAKED register_t __cdecl internal_6fab300()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x164]
        jmp public_6ed61d0
        public_6fab30b : nop
        lea ecx, ss:[ebp-0x178]
        jmp public_6eec8d0
        public_6fab316 : nop
        lea ecx, ss:[ebp-0x178]
        jmp public_6eec8d0
        public_6fab321 : nop
        mov eax, offset public_6fbfa6c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab300)
        ASM_EXPORT_ENTRY_FIRST(0x6fab30b, public_6fab30b)
        ASM_EXPORT_ENTRY(0x6fab316, public_6fab316)
        ASM_EXPORT_ENTRY_LAST(0x6fab321, public_6fab321)
    }
}

#undef public_6fab30b
#undef public_6fab316
#undef public_6fab321

#pragma init_seg(compiler)
extern "C" void const* const public_6fab30b = __AsmFindLabelExport(&internal_6fab300, 0x6fab30b);
extern "C" void const* const public_6fab316 = __AsmFindLabelExport(&internal_6fab300, 0x6fab316);
extern "C" void const* const public_6fab321 = __AsmFindLabelExport(&internal_6fab300, 0x6fab321);
