#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6333110);
CLANG_FORWARD_PROC_SYMBOL(public_6333220);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63975f8 _public_63975f8
#define public_6397603 _public_6397603
#define public_639760e _public_639760e
#define public_6397616 _public_6397616

PROC_DECLARE(0x63975f0, internal_63975f0, public_63975f0);
/* CHUNK of public_6333610 */
extern "C" NAKED register_t __cdecl internal_63975f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6333110
        public_63975f8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x1C
        jmp public_62a68e0
        public_6397603 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_62a68e0
        public_639760e : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6333220
        public_6397616 : nop
        mov eax, offset public_63b17e4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63975f0)
        ASM_EXPORT_ENTRY_FIRST(0x63975f8, public_63975f8)
        ASM_EXPORT_ENTRY(0x6397603, public_6397603)
        ASM_EXPORT_ENTRY(0x639760e, public_639760e)
        ASM_EXPORT_ENTRY_LAST(0x6397616, public_6397616)
    }
}

#undef public_63975f8
#undef public_6397603
#undef public_639760e
#undef public_6397616

#pragma init_seg(compiler)
extern "C" void const* const public_63975f8 = __AsmFindLabelExport(&internal_63975f0, 0x63975f8);
extern "C" void const* const public_6397603 = __AsmFindLabelExport(&internal_63975f0, 0x6397603);
extern "C" void const* const public_639760e = __AsmFindLabelExport(&internal_63975f0, 0x639760e);
extern "C" void const* const public_6397616 = __AsmFindLabelExport(&internal_63975f0, 0x6397616);
