#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62487b8 _public_62487b8
#define public_62487c3 _public_62487c3
#define public_62487ce _public_62487ce
#define public_62487d9 _public_62487d9
#define public_62487e4 _public_62487e4
#define public_62487ef _public_62487ef
#define public_62487fa _public_62487fa
#define public_6248805 _public_6248805

PROC_DECLARE(0x62487b0, internal_62487b0, public_62487b0);
/* CHUNK of public_623c740 */
extern "C" NAKED register_t __cdecl internal_62487b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620b260
        public_62487b8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C
        jmp public_62084b0
        public_62487c3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x50
        jmp public_62084b0
        public_62487ce : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x54
        jmp public_62084b0
        public_62487d9 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x58
        jmp public_62084b0
        public_62487e4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x5C
        jmp public_62084b0
        public_62487ef : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x60
        jmp public_62084b0
        public_62487fa : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_620b300
        public_6248805 : nop
        mov eax, offset public_62516bc
        jmp public_6246126
        UNREACHABLE_TRAP(0x62487b0)
        ASM_EXPORT_ENTRY_FIRST(0x62487b8, public_62487b8)
        ASM_EXPORT_ENTRY(0x62487c3, public_62487c3)
        ASM_EXPORT_ENTRY(0x62487ce, public_62487ce)
        ASM_EXPORT_ENTRY(0x62487d9, public_62487d9)
        ASM_EXPORT_ENTRY(0x62487e4, public_62487e4)
        ASM_EXPORT_ENTRY(0x62487ef, public_62487ef)
        ASM_EXPORT_ENTRY(0x62487fa, public_62487fa)
        ASM_EXPORT_ENTRY_LAST(0x6248805, public_6248805)
    }
}

#undef public_62487b8
#undef public_62487c3
#undef public_62487ce
#undef public_62487d9
#undef public_62487e4
#undef public_62487ef
#undef public_62487fa
#undef public_6248805

#pragma init_seg(compiler)
extern "C" void const* const public_62487b8 = __AsmFindLabelExport(&internal_62487b0, 0x62487b8);
extern "C" void const* const public_62487c3 = __AsmFindLabelExport(&internal_62487b0, 0x62487c3);
extern "C" void const* const public_62487ce = __AsmFindLabelExport(&internal_62487b0, 0x62487ce);
extern "C" void const* const public_62487d9 = __AsmFindLabelExport(&internal_62487b0, 0x62487d9);
extern "C" void const* const public_62487e4 = __AsmFindLabelExport(&internal_62487b0, 0x62487e4);
extern "C" void const* const public_62487ef = __AsmFindLabelExport(&internal_62487b0, 0x62487ef);
extern "C" void const* const public_62487fa = __AsmFindLabelExport(&internal_62487b0, 0x62487fa);
extern "C" void const* const public_6248805 = __AsmFindLabelExport(&internal_62487b0, 0x6248805);
