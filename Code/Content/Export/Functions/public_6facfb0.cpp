#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facfb8 _public_6facfb8
#define public_6facfc6 _public_6facfc6
#define public_6facfd4 _public_6facfd4
#define public_6facfe2 _public_6facfe2

PROC_DECLARE(0x6facfb0, internal_6facfb0, public_6facfb0);
/* CHUNK of public_6f07ef0 */
extern "C" NAKED register_t __cdecl internal_6facfb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6ea8cc0
        public_6facfb8 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x170
        jmp public_6f28e10
        public_6facfc6 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x180
        jmp public_6f15350
        public_6facfd4 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x1A0
        jmp public_6f15350
        public_6facfe2 : nop
        mov eax, offset public_6fc1de0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facfb0)
        ASM_EXPORT_ENTRY_FIRST(0x6facfb8, public_6facfb8)
        ASM_EXPORT_ENTRY(0x6facfc6, public_6facfc6)
        ASM_EXPORT_ENTRY(0x6facfd4, public_6facfd4)
        ASM_EXPORT_ENTRY_LAST(0x6facfe2, public_6facfe2)
    }
}

#undef public_6facfb8
#undef public_6facfc6
#undef public_6facfd4
#undef public_6facfe2

#pragma init_seg(compiler)
extern "C" void const* const public_6facfb8 = __AsmFindLabelExport(&internal_6facfb0, 0x6facfb8);
extern "C" void const* const public_6facfc6 = __AsmFindLabelExport(&internal_6facfb0, 0x6facfc6);
extern "C" void const* const public_6facfd4 = __AsmFindLabelExport(&internal_6facfb0, 0x6facfd4);
extern "C" void const* const public_6facfe2 = __AsmFindLabelExport(&internal_6facfb0, 0x6facfe2);
