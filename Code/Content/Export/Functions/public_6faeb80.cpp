#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7230);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f33d20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faeb88 _public_6faeb88
#define public_6faeb96 _public_6faeb96
#define public_6faeba4 _public_6faeba4
#define public_6faebac _public_6faebac
#define public_6faebba _public_6faebba
#define public_6faebc8 _public_6faebc8
#define public_6faebd6 _public_6faebd6
#define public_6faebde _public_6faebde

PROC_DECLARE(0x6faeb80, internal_6faeb80, public_6faeb80);
/* CHUNK of public_6f34680 */
extern "C" NAKED register_t __cdecl internal_6faeb80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6f33d20
        public_6faeb88 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x178
        jmp public_6f28e10
        public_6faeb96 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x17C
        jmp public_6f15350
        public_6faeba4 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6eb7230
        public_6faebac : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x128
        jmp public_6eec8d0
        public_6faebba : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x13C
        jmp public_6eec8d0
        public_6faebc8 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x158
        jmp public_6ecfa90
        public_6faebd6 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f15350
        public_6faebde : nop
        mov eax, offset public_6fc3b8c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faeb80)
        ASM_EXPORT_ENTRY_FIRST(0x6faeb88, public_6faeb88)
        ASM_EXPORT_ENTRY(0x6faeb96, public_6faeb96)
        ASM_EXPORT_ENTRY(0x6faeba4, public_6faeba4)
        ASM_EXPORT_ENTRY(0x6faebac, public_6faebac)
        ASM_EXPORT_ENTRY(0x6faebba, public_6faebba)
        ASM_EXPORT_ENTRY(0x6faebc8, public_6faebc8)
        ASM_EXPORT_ENTRY(0x6faebd6, public_6faebd6)
        ASM_EXPORT_ENTRY_LAST(0x6faebde, public_6faebde)
    }
}

#undef public_6faeb88
#undef public_6faeb96
#undef public_6faeba4
#undef public_6faebac
#undef public_6faebba
#undef public_6faebc8
#undef public_6faebd6
#undef public_6faebde

#pragma init_seg(compiler)
extern "C" void const* const public_6faeb88 = __AsmFindLabelExport(&internal_6faeb80, 0x6faeb88);
extern "C" void const* const public_6faeb96 = __AsmFindLabelExport(&internal_6faeb80, 0x6faeb96);
extern "C" void const* const public_6faeba4 = __AsmFindLabelExport(&internal_6faeb80, 0x6faeba4);
extern "C" void const* const public_6faebac = __AsmFindLabelExport(&internal_6faeb80, 0x6faebac);
extern "C" void const* const public_6faebba = __AsmFindLabelExport(&internal_6faeb80, 0x6faebba);
extern "C" void const* const public_6faebc8 = __AsmFindLabelExport(&internal_6faeb80, 0x6faebc8);
extern "C" void const* const public_6faebd6 = __AsmFindLabelExport(&internal_6faeb80, 0x6faebd6);
extern "C" void const* const public_6faebde = __AsmFindLabelExport(&internal_6faeb80, 0x6faebde);
