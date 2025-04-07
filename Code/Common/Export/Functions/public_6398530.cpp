#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634dd60);
CLANG_FORWARD_PROC_SYMBOL(public_635d3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6360dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6398538 _public_6398538
#define public_6398552 _public_6398552
#define public_6398559 _public_6398559
#define public_6398561 _public_6398561
#define public_639856f _public_639856f

PROC_DECLARE(0x6398530, internal_6398530, public_6398530);
/* CHUNK of public_6362b50 */
extern "C" NAKED register_t __cdecl internal_6398530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_634dd60
        public_6398538 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_6398552
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x80
        mov dword ptr ss : [ebp-8], eax
        jmp public_6398559
        public_6398552 : nop
        mov dword ptr ss : [ebp-8], 0
        public_6398559 : nop
        mov ecx, dword ptr ss : [ebp-8]
        jmp public_6360dc0
        public_6398561 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x88
        jmp public_635d3b0
        public_639856f : nop
        mov eax, offset public_63b2b80
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398530)
        ASM_EXPORT_ENTRY_FIRST(0x6398538, public_6398538)
        ASM_EXPORT_ENTRY(0x6398552, public_6398552)
        ASM_EXPORT_ENTRY(0x6398559, public_6398559)
        ASM_EXPORT_ENTRY(0x6398561, public_6398561)
        ASM_EXPORT_ENTRY_LAST(0x639856f, public_639856f)
    }
}

#undef public_6398538
#undef public_6398552
#undef public_6398559
#undef public_6398561
#undef public_639856f

#pragma init_seg(compiler)
extern "C" void const* const public_6398538 = __AsmFindLabelExport(&internal_6398530, 0x6398538);
extern "C" void const* const public_6398552 = __AsmFindLabelExport(&internal_6398530, 0x6398552);
extern "C" void const* const public_6398559 = __AsmFindLabelExport(&internal_6398530, 0x6398559);
extern "C" void const* const public_6398561 = __AsmFindLabelExport(&internal_6398530, 0x6398561);
extern "C" void const* const public_639856f = __AsmFindLabelExport(&internal_6398530, 0x639856f);
