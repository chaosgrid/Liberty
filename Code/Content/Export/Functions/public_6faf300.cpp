#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faf30b _public_6faf30b
#define public_6faf316 _public_6faf316
#define public_6faf321 _public_6faf321
#define public_6faf32f _public_6faf32f

PROC_DECLARE(0x6faf300, internal_6faf300, public_6faf300);
/* CHUNK of public_6f4f060 */
extern "C" NAKED register_t __cdecl internal_6faf300()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x48
        jmp public_6eec8d0
        public_6faf30b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x5C
        jmp public_6eec8d0
        public_6faf316 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74
        jmp public_6eec8d0
        public_6faf321 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x84
        jmp public_6eec8d0
        public_6faf32f : nop
        mov eax, offset public_6fc433c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faf300)
        ASM_EXPORT_ENTRY_FIRST(0x6faf30b, public_6faf30b)
        ASM_EXPORT_ENTRY(0x6faf316, public_6faf316)
        ASM_EXPORT_ENTRY(0x6faf321, public_6faf321)
        ASM_EXPORT_ENTRY_LAST(0x6faf32f, public_6faf32f)
    }
}

#undef public_6faf30b
#undef public_6faf316
#undef public_6faf321
#undef public_6faf32f

#pragma init_seg(compiler)
extern "C" void const* const public_6faf30b = __AsmFindLabelExport(&internal_6faf300, 0x6faf30b);
extern "C" void const* const public_6faf316 = __AsmFindLabelExport(&internal_6faf300, 0x6faf316);
extern "C" void const* const public_6faf321 = __AsmFindLabelExport(&internal_6faf300, 0x6faf321);
extern "C" void const* const public_6faf32f = __AsmFindLabelExport(&internal_6faf300, 0x6faf32f);
