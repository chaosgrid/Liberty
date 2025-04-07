#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fad1c8 _public_6fad1c8
#define public_6fad1d3 _public_6fad1d3
#define public_6fad1de _public_6fad1de
#define public_6fad1e9 _public_6fad1e9
#define public_6fad1f4 _public_6fad1f4

PROC_DECLARE(0x6fad1c0, internal_6fad1c0, public_6fad1c0);
/* CHUNK of public_6f0aa40 */
extern "C" NAKED register_t __cdecl internal_6fad1c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6ea8cc0
        public_6fad1c8 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fad1d3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6ecfa90
        public_6fad1de : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_6eec8d0
        public_6fad1e9 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x40
        jmp public_6eec8d0
        public_6fad1f4 : nop
        mov eax, offset public_6fc2018
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fad1c0)
        ASM_EXPORT_ENTRY_FIRST(0x6fad1c8, public_6fad1c8)
        ASM_EXPORT_ENTRY(0x6fad1d3, public_6fad1d3)
        ASM_EXPORT_ENTRY(0x6fad1de, public_6fad1de)
        ASM_EXPORT_ENTRY(0x6fad1e9, public_6fad1e9)
        ASM_EXPORT_ENTRY_LAST(0x6fad1f4, public_6fad1f4)
    }
}

#undef public_6fad1c8
#undef public_6fad1d3
#undef public_6fad1de
#undef public_6fad1e9
#undef public_6fad1f4

#pragma init_seg(compiler)
extern "C" void const* const public_6fad1c8 = __AsmFindLabelExport(&internal_6fad1c0, 0x6fad1c8);
extern "C" void const* const public_6fad1d3 = __AsmFindLabelExport(&internal_6fad1c0, 0x6fad1d3);
extern "C" void const* const public_6fad1de = __AsmFindLabelExport(&internal_6fad1c0, 0x6fad1de);
extern "C" void const* const public_6fad1e9 = __AsmFindLabelExport(&internal_6fad1c0, 0x6fad1e9);
extern "C" void const* const public_6fad1f4 = __AsmFindLabelExport(&internal_6fad1c0, 0x6fad1f4);
