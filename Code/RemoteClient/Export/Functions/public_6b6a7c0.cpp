#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b40300);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a7c8 _public_6b6a7c8
#define public_6b6a7d3 _public_6b6a7d3
#define public_6b6a7de _public_6b6a7de
#define public_6b6a7ea _public_6b6a7ea

PROC_DECLARE(0x6b6a7c0, internal_6b6a7c0, public_6b6a7c0);
/* CHUNK of public_6b3f820 */
extern "C" NAKED register_t __cdecl internal_6b6a7c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6b4e730
        public_6b6a7c8 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x30
        jmp public_6b40300
        public_6b6a7d3 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x70
        jmp public_6b3a450
        public_6b6a7de : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x74
        jmp dword ptr ds : [public_6b6b008]
        public_6b6a7ea : nop
        mov eax, offset public_6b6eeb8
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a7c0)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a7c8, public_6b6a7c8)
        ASM_EXPORT_ENTRY(0x6b6a7d3, public_6b6a7d3)
        ASM_EXPORT_ENTRY(0x6b6a7de, public_6b6a7de)
        ASM_EXPORT_ENTRY_LAST(0x6b6a7ea, public_6b6a7ea)
    }
}

#undef public_6b6a7c8
#undef public_6b6a7d3
#undef public_6b6a7de
#undef public_6b6a7ea

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a7c8 = __AsmFindLabelExport(&internal_6b6a7c0, 0x6b6a7c8);
extern "C" void const* const public_6b6a7d3 = __AsmFindLabelExport(&internal_6b6a7c0, 0x6b6a7d3);
extern "C" void const* const public_6b6a7de = __AsmFindLabelExport(&internal_6b6a7c0, 0x6b6a7de);
extern "C" void const* const public_6b6a7ea = __AsmFindLabelExport(&internal_6b6a7c0, 0x6b6a7ea);
