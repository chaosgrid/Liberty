#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403bd0);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418c24);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a8c8 _public_41a8c8
#define public_41a8d3 _public_41a8d3
#define public_41a8de _public_41a8de
#define public_41a8ec _public_41a8ec

PROC_DECLARE(0x41a8c0, internal_41a8c0, public_41a8c0);
/* CHUNK of public_413df0 */
extern "C" NAKED register_t __cdecl internal_41a8c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_41a8c8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x60
        jmp public_403bd0
        public_41a8d3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp public_418c24
        public_41a8de : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xB0
        jmp public_418c24
        public_41a8ec : nop
        mov eax, offset public_41fa18
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a8c0)
        ASM_EXPORT_ENTRY_FIRST(0x41a8c8, public_41a8c8)
        ASM_EXPORT_ENTRY(0x41a8d3, public_41a8d3)
        ASM_EXPORT_ENTRY(0x41a8de, public_41a8de)
        ASM_EXPORT_ENTRY_LAST(0x41a8ec, public_41a8ec)
    }
}

#undef public_41a8c8
#undef public_41a8d3
#undef public_41a8de
#undef public_41a8ec

#pragma init_seg(compiler)
extern "C" void const* const public_41a8c8 = __AsmFindLabelExport(&internal_41a8c0, 0x41a8c8);
extern "C" void const* const public_41a8d3 = __AsmFindLabelExport(&internal_41a8c0, 0x41a8d3);
extern "C" void const* const public_41a8de = __AsmFindLabelExport(&internal_41a8c0, 0x41a8de);
extern "C" void const* const public_41a8ec = __AsmFindLabelExport(&internal_41a8c0, 0x41a8ec);
