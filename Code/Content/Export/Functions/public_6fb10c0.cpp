#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7900);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f71920);
CLANG_FORWARD_PROC_SYMBOL(public_6f89cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb10c8 _public_6fb10c8
#define public_6fb10d0 _public_6fb10d0
#define public_6fb10db _public_6fb10db
#define public_6fb10e6 _public_6fb10e6
#define public_6fb10fe _public_6fb10fe
#define public_6fb1105 _public_6fb1105
#define public_6fb110d _public_6fb110d

PROC_DECLARE(0x6fb10c0, internal_6fb10c0, public_6fb10c0);
/* CHUNK of public_6f8a6d0 */
extern "C" NAKED register_t __cdecl internal_6fb10c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f89cc0
        public_6fb10c8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f71920
        public_6fb10d0 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x64
        jmp public_6eb7900
        public_6fb10db : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x78
        jmp public_6eec8d0
        public_6fb10e6 : nop
        cmp dword ptr ss : [ebp-0x18], 0
        je public_6fb10fe
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 4
        mov dword ptr ss : [ebp-0x60], eax
        jmp public_6fb1105
        public_6fb10fe : nop
        mov dword ptr ss : [ebp-0x60], 0
        public_6fb1105 : nop
        mov ecx, dword ptr ss : [ebp-0x60]
        jmp public_6f15350
        public_6fb110d : nop
        mov eax, offset public_6fc6620
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb10c0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb10c8, public_6fb10c8)
        ASM_EXPORT_ENTRY(0x6fb10d0, public_6fb10d0)
        ASM_EXPORT_ENTRY(0x6fb10db, public_6fb10db)
        ASM_EXPORT_ENTRY(0x6fb10e6, public_6fb10e6)
        ASM_EXPORT_ENTRY(0x6fb10fe, public_6fb10fe)
        ASM_EXPORT_ENTRY(0x6fb1105, public_6fb1105)
        ASM_EXPORT_ENTRY_LAST(0x6fb110d, public_6fb110d)
    }
}

#undef public_6fb10c8
#undef public_6fb10d0
#undef public_6fb10db
#undef public_6fb10e6
#undef public_6fb10fe
#undef public_6fb1105
#undef public_6fb110d

#pragma init_seg(compiler)
extern "C" void const* const public_6fb10c8 = __AsmFindLabelExport(&internal_6fb10c0, 0x6fb10c8);
extern "C" void const* const public_6fb10d0 = __AsmFindLabelExport(&internal_6fb10c0, 0x6fb10d0);
extern "C" void const* const public_6fb10db = __AsmFindLabelExport(&internal_6fb10c0, 0x6fb10db);
extern "C" void const* const public_6fb10e6 = __AsmFindLabelExport(&internal_6fb10c0, 0x6fb10e6);
extern "C" void const* const public_6fb10fe = __AsmFindLabelExport(&internal_6fb10c0, 0x6fb10fe);
extern "C" void const* const public_6fb1105 = __AsmFindLabelExport(&internal_6fb10c0, 0x6fb1105);
extern "C" void const* const public_6fb110d = __AsmFindLabelExport(&internal_6fb10c0, 0x6fb110d);
