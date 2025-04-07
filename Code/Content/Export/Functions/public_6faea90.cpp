#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faea98 _public_6faea98
#define public_6faeaa3 _public_6faeaa3
#define public_6faeaab _public_6faeaab
#define public_6faeab9 _public_6faeab9
#define public_6faeac7 _public_6faeac7
#define public_6faead5 _public_6faead5

PROC_DECLARE(0x6faea90, internal_6faea90, public_6faea90);
/* CHUNK of public_6f33500 */
extern "C" NAKED register_t __cdecl internal_6faea90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f28e10
        public_6faea98 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x50
        jmp public_6eec8d0
        public_6faeaa3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ef4ab0
        public_6faeaab : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x80
        jmp public_6eec8d0
        public_6faeab9 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xFC
        jmp public_6f28e10
        public_6faeac7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x118
        jmp public_6f15350
        public_6faead5 : nop
        mov eax, offset public_6fc3aa8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faea90)
        ASM_EXPORT_ENTRY_FIRST(0x6faea98, public_6faea98)
        ASM_EXPORT_ENTRY(0x6faeaa3, public_6faeaa3)
        ASM_EXPORT_ENTRY(0x6faeaab, public_6faeaab)
        ASM_EXPORT_ENTRY(0x6faeab9, public_6faeab9)
        ASM_EXPORT_ENTRY(0x6faeac7, public_6faeac7)
        ASM_EXPORT_ENTRY_LAST(0x6faead5, public_6faead5)
    }
}

#undef public_6faea98
#undef public_6faeaa3
#undef public_6faeaab
#undef public_6faeab9
#undef public_6faeac7
#undef public_6faead5

#pragma init_seg(compiler)
extern "C" void const* const public_6faea98 = __AsmFindLabelExport(&internal_6faea90, 0x6faea98);
extern "C" void const* const public_6faeaa3 = __AsmFindLabelExport(&internal_6faea90, 0x6faeaa3);
extern "C" void const* const public_6faeaab = __AsmFindLabelExport(&internal_6faea90, 0x6faeaab);
extern "C" void const* const public_6faeab9 = __AsmFindLabelExport(&internal_6faea90, 0x6faeab9);
extern "C" void const* const public_6faeac7 = __AsmFindLabelExport(&internal_6faea90, 0x6faeac7);
extern "C" void const* const public_6faead5 = __AsmFindLabelExport(&internal_6faea90, 0x6faead5);
