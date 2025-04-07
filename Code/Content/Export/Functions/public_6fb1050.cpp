#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7900);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f71920);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1058 _public_6fb1058
#define public_6fb1063 _public_6fb1063
#define public_6fb106e _public_6fb106e
#define public_6fb1086 _public_6fb1086
#define public_6fb108d _public_6fb108d
#define public_6fb1095 _public_6fb1095

PROC_DECLARE(0x6fb1050, internal_6fb1050, public_6fb1050);
/* CHUNK of public_6f89cc0 */
extern "C" NAKED register_t __cdecl internal_6fb1050()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f71920
        public_6fb1058 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x64
        jmp public_6eb7900
        public_6fb1063 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x78
        jmp public_6eec8d0
        public_6fb106e : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_6fb1086
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 4
        mov dword ptr ss : [ebp-0x5C], eax
        jmp public_6fb108d
        public_6fb1086 : nop
        mov dword ptr ss : [ebp-0x5C], 0
        public_6fb108d : nop
        mov ecx, dword ptr ss : [ebp-0x5C]
        jmp public_6f15350
        public_6fb1095 : nop
        mov eax, offset public_6fc65b8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1050)
        ASM_EXPORT_ENTRY_FIRST(0x6fb1058, public_6fb1058)
        ASM_EXPORT_ENTRY(0x6fb1063, public_6fb1063)
        ASM_EXPORT_ENTRY(0x6fb106e, public_6fb106e)
        ASM_EXPORT_ENTRY(0x6fb1086, public_6fb1086)
        ASM_EXPORT_ENTRY(0x6fb108d, public_6fb108d)
        ASM_EXPORT_ENTRY_LAST(0x6fb1095, public_6fb1095)
    }
}

#undef public_6fb1058
#undef public_6fb1063
#undef public_6fb106e
#undef public_6fb1086
#undef public_6fb108d
#undef public_6fb1095

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1058 = __AsmFindLabelExport(&internal_6fb1050, 0x6fb1058);
extern "C" void const* const public_6fb1063 = __AsmFindLabelExport(&internal_6fb1050, 0x6fb1063);
extern "C" void const* const public_6fb106e = __AsmFindLabelExport(&internal_6fb1050, 0x6fb106e);
extern "C" void const* const public_6fb1086 = __AsmFindLabelExport(&internal_6fb1050, 0x6fb1086);
extern "C" void const* const public_6fb108d = __AsmFindLabelExport(&internal_6fb1050, 0x6fb108d);
extern "C" void const* const public_6fb1095 = __AsmFindLabelExport(&internal_6fb1050, 0x6fb1095);
