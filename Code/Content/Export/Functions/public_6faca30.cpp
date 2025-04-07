#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f00200);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faca3b _public_6faca3b
#define public_6faca49 _public_6faca49
#define public_6faca54 _public_6faca54
#define public_6faca5c _public_6faca5c
#define public_6faca67 _public_6faca67
#define public_6faca72 _public_6faca72
#define public_6faca7d _public_6faca7d
#define public_6faca88 _public_6faca88
#define public_6faca93 _public_6faca93

PROC_DECLARE(0x6faca30, internal_6faca30, public_6faca30);
/* CHUNK of public_6efec50 */
extern "C" NAKED register_t __cdecl internal_6faca30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x88]
        jmp public_6f00200
        public_6faca3b : nop
        mov eax, dword ptr ss : [ebp-0x13C]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6faca49 : nop
        lea ecx, ss:[ebp-0x88]
        jmp public_6f28e10
        public_6faca54 : nop
        lea ecx, ss:[ebp-0x38]
        jmp public_6eec8d0
        public_6faca5c : nop
        lea ecx, ss:[ebp-0x120]
        jmp public_6f15350
        public_6faca67 : nop
        lea ecx, ss:[ebp-0xD4]
        jmp public_6f15350
        public_6faca72 : nop
        lea ecx, ss:[ebp-0x108]
        jmp public_6eec8d0
        public_6faca7d : nop
        lea ecx, ss:[ebp-0x120]
        jmp public_6f15350
        public_6faca88 : nop
        lea ecx, ss:[ebp-0x108]
        jmp public_6f98760
        public_6faca93 : nop
        mov eax, offset public_6fc170c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faca30)
        ASM_EXPORT_ENTRY_FIRST(0x6faca3b, public_6faca3b)
        ASM_EXPORT_ENTRY(0x6faca49, public_6faca49)
        ASM_EXPORT_ENTRY(0x6faca54, public_6faca54)
        ASM_EXPORT_ENTRY(0x6faca5c, public_6faca5c)
        ASM_EXPORT_ENTRY(0x6faca67, public_6faca67)
        ASM_EXPORT_ENTRY(0x6faca72, public_6faca72)
        ASM_EXPORT_ENTRY(0x6faca7d, public_6faca7d)
        ASM_EXPORT_ENTRY(0x6faca88, public_6faca88)
        ASM_EXPORT_ENTRY_LAST(0x6faca93, public_6faca93)
    }
}

#undef public_6faca3b
#undef public_6faca49
#undef public_6faca54
#undef public_6faca5c
#undef public_6faca67
#undef public_6faca72
#undef public_6faca7d
#undef public_6faca88
#undef public_6faca93

#pragma init_seg(compiler)
extern "C" void const* const public_6faca3b = __AsmFindLabelExport(&internal_6faca30, 0x6faca3b);
extern "C" void const* const public_6faca49 = __AsmFindLabelExport(&internal_6faca30, 0x6faca49);
extern "C" void const* const public_6faca54 = __AsmFindLabelExport(&internal_6faca30, 0x6faca54);
extern "C" void const* const public_6faca5c = __AsmFindLabelExport(&internal_6faca30, 0x6faca5c);
extern "C" void const* const public_6faca67 = __AsmFindLabelExport(&internal_6faca30, 0x6faca67);
extern "C" void const* const public_6faca72 = __AsmFindLabelExport(&internal_6faca30, 0x6faca72);
extern "C" void const* const public_6faca7d = __AsmFindLabelExport(&internal_6faca30, 0x6faca7d);
extern "C" void const* const public_6faca88 = __AsmFindLabelExport(&internal_6faca30, 0x6faca88);
extern "C" void const* const public_6faca93 = __AsmFindLabelExport(&internal_6faca30, 0x6faca93);
