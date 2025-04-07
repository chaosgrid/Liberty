#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facffb _public_6facffb
#define public_6fad003 _public_6fad003
#define public_6fad011 _public_6fad011
#define public_6fad01f _public_6fad01f

PROC_DECLARE(0x6facff0, internal_6facff0, public_6facff0);
/* CHUNK of public_6f08140 */
extern "C" NAKED register_t __cdecl internal_6facff0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6facffb : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6ea8cc0
        public_6fad003 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x170
        jmp public_6f28e10
        public_6fad011 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x180
        jmp public_6f15350
        public_6fad01f : nop
        mov eax, offset public_6fc1e1c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facff0)
        ASM_EXPORT_ENTRY_FIRST(0x6facffb, public_6facffb)
        ASM_EXPORT_ENTRY(0x6fad003, public_6fad003)
        ASM_EXPORT_ENTRY(0x6fad011, public_6fad011)
        ASM_EXPORT_ENTRY_LAST(0x6fad01f, public_6fad01f)
    }
}

#undef public_6facffb
#undef public_6fad003
#undef public_6fad011
#undef public_6fad01f

#pragma init_seg(compiler)
extern "C" void const* const public_6facffb = __AsmFindLabelExport(&internal_6facff0, 0x6facffb);
extern "C" void const* const public_6fad003 = __AsmFindLabelExport(&internal_6facff0, 0x6fad003);
extern "C" void const* const public_6fad011 = __AsmFindLabelExport(&internal_6facff0, 0x6fad011);
extern "C" void const* const public_6fad01f = __AsmFindLabelExport(&internal_6facff0, 0x6fad01f);
