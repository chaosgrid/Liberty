#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_6212ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249ef8 _public_6249ef8
#define public_6249f03 _public_6249f03
#define public_6249f0e _public_6249f0e
#define public_6249f19 _public_6249f19
#define public_6249f24 _public_6249f24

PROC_DECLARE(0x6249ef0, internal_6249ef0, public_6249ef0);
/* CHUNK of public_62373c0 */
extern "C" NAKED register_t __cdecl internal_6249ef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6212ec0
        public_6249ef8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C
        jmp public_62084b0
        public_6249f03 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x50
        jmp public_62084b0
        public_6249f0e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x54
        jmp public_62084b0
        public_6249f19 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_620b300
        public_6249f24 : nop
        mov eax, offset public_6252f6c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249ef0)
        ASM_EXPORT_ENTRY_FIRST(0x6249ef8, public_6249ef8)
        ASM_EXPORT_ENTRY(0x6249f03, public_6249f03)
        ASM_EXPORT_ENTRY(0x6249f0e, public_6249f0e)
        ASM_EXPORT_ENTRY(0x6249f19, public_6249f19)
        ASM_EXPORT_ENTRY_LAST(0x6249f24, public_6249f24)
    }
}

#undef public_6249ef8
#undef public_6249f03
#undef public_6249f0e
#undef public_6249f19
#undef public_6249f24

#pragma init_seg(compiler)
extern "C" void const* const public_6249ef8 = __AsmFindLabelExport(&internal_6249ef0, 0x6249ef8);
extern "C" void const* const public_6249f03 = __AsmFindLabelExport(&internal_6249ef0, 0x6249f03);
extern "C" void const* const public_6249f0e = __AsmFindLabelExport(&internal_6249ef0, 0x6249f0e);
extern "C" void const* const public_6249f19 = __AsmFindLabelExport(&internal_6249ef0, 0x6249f19);
extern "C" void const* const public_6249f24 = __AsmFindLabelExport(&internal_6249ef0, 0x6249f24);
