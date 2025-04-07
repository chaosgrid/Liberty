#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b210);
CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_620c070);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248ff8 _public_6248ff8
#define public_6249003 _public_6249003
#define public_624900b _public_624900b
#define public_6249016 _public_6249016
#define public_6249021 _public_6249021

PROC_DECLARE(0x6248ff0, internal_6248ff0, public_6248ff0);
/* CHUNK of public_62263c0 */
extern "C" NAKED register_t __cdecl internal_6248ff0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620c070
        public_6248ff8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x60
        jmp public_620b300
        public_6249003 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620b260
        public_624900b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_620b210
        public_6249016 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_620b300
        public_6249021 : nop
        mov eax, offset public_6251f74
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248ff0)
        ASM_EXPORT_ENTRY_FIRST(0x6248ff8, public_6248ff8)
        ASM_EXPORT_ENTRY(0x6249003, public_6249003)
        ASM_EXPORT_ENTRY(0x624900b, public_624900b)
        ASM_EXPORT_ENTRY(0x6249016, public_6249016)
        ASM_EXPORT_ENTRY_LAST(0x6249021, public_6249021)
    }
}

#undef public_6248ff8
#undef public_6249003
#undef public_624900b
#undef public_6249016
#undef public_6249021

#pragma init_seg(compiler)
extern "C" void const* const public_6248ff8 = __AsmFindLabelExport(&internal_6248ff0, 0x6248ff8);
extern "C" void const* const public_6249003 = __AsmFindLabelExport(&internal_6248ff0, 0x6249003);
extern "C" void const* const public_624900b = __AsmFindLabelExport(&internal_6248ff0, 0x624900b);
extern "C" void const* const public_6249016 = __AsmFindLabelExport(&internal_6248ff0, 0x6249016);
extern "C" void const* const public_6249021 = __AsmFindLabelExport(&internal_6248ff0, 0x6249021);
