#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40ea80);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);
CLANG_FORWARD_PROC_SYMBOL(public_418d86);
CLANG_FORWARD_PROC_SYMBOL(public_4190f8);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a2c8 _public_41a2c8
#define public_41a2d6 _public_41a2d6
#define public_41a2e4 _public_41a2e4
#define public_41a2f2 _public_41a2f2
#define public_41a300 _public_41a300

PROC_DECLARE(0x41a2c0, internal_41a2c0, public_41a2c0);
/* CHUNK of public_40e760 */
extern "C" NAKED register_t __cdecl internal_41a2c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_40ea80
        public_41a2c8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x80
        jmp public_418c24
        public_41a2d6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC0
        jmp public_418d86
        public_41a2e4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x100
        jmp public_4190f8
        public_41a2f2 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x140
        jmp public_418d86
        public_41a300 : nop
        mov eax, offset public_41f45c
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a2c0)
        ASM_EXPORT_ENTRY_FIRST(0x41a2c8, public_41a2c8)
        ASM_EXPORT_ENTRY(0x41a2d6, public_41a2d6)
        ASM_EXPORT_ENTRY(0x41a2e4, public_41a2e4)
        ASM_EXPORT_ENTRY(0x41a2f2, public_41a2f2)
        ASM_EXPORT_ENTRY_LAST(0x41a300, public_41a300)
    }
}

#undef public_41a2c8
#undef public_41a2d6
#undef public_41a2e4
#undef public_41a2f2
#undef public_41a300

#pragma init_seg(compiler)
extern "C" void const* const public_41a2c8 = __AsmFindLabelExport(&internal_41a2c0, 0x41a2c8);
extern "C" void const* const public_41a2d6 = __AsmFindLabelExport(&internal_41a2c0, 0x41a2d6);
extern "C" void const* const public_41a2e4 = __AsmFindLabelExport(&internal_41a2c0, 0x41a2e4);
extern "C" void const* const public_41a2f2 = __AsmFindLabelExport(&internal_41a2c0, 0x41a2f2);
extern "C" void const* const public_41a300 = __AsmFindLabelExport(&internal_41a2c0, 0x41a300);
