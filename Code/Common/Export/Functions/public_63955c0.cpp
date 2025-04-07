#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62f0120);
CLANG_FORWARD_PROC_SYMBOL(public_62f02b0);
CLANG_FORWARD_PROC_SYMBOL(public_62fb1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63955c8 _public_63955c8
#define public_63955d3 _public_63955d3
#define public_63955de _public_63955de
#define public_63955ec _public_63955ec
#define public_63955f7 _public_63955f7
#define public_6395602 _public_6395602
#define public_639560d _public_639560d

PROC_DECLARE(0x63955c0, internal_63955c0, public_63955c0);
/* CHUNK of public_62f1670 */
extern "C" NAKED register_t __cdecl internal_63955c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_62f02b0
        public_63955c8 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x64
        jmp public_62fb1a0
        public_63955d3 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x74
        jmp public_62a68e0
        public_63955de : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x84
        jmp public_6269110
        public_63955ec : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x40
        jmp public_62a68e0
        public_63955f7 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x4C
        jmp public_62a68e0
        public_6395602 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x48
        jmp public_62f0120
        public_639560d : nop
        mov eax, offset public_63af0d0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63955c0)
        ASM_EXPORT_ENTRY_FIRST(0x63955c8, public_63955c8)
        ASM_EXPORT_ENTRY(0x63955d3, public_63955d3)
        ASM_EXPORT_ENTRY(0x63955de, public_63955de)
        ASM_EXPORT_ENTRY(0x63955ec, public_63955ec)
        ASM_EXPORT_ENTRY(0x63955f7, public_63955f7)
        ASM_EXPORT_ENTRY(0x6395602, public_6395602)
        ASM_EXPORT_ENTRY_LAST(0x639560d, public_639560d)
    }
}

#undef public_63955c8
#undef public_63955d3
#undef public_63955de
#undef public_63955ec
#undef public_63955f7
#undef public_6395602
#undef public_639560d

#pragma init_seg(compiler)
extern "C" void const* const public_63955c8 = __AsmFindLabelExport(&internal_63955c0, 0x63955c8);
extern "C" void const* const public_63955d3 = __AsmFindLabelExport(&internal_63955c0, 0x63955d3);
extern "C" void const* const public_63955de = __AsmFindLabelExport(&internal_63955c0, 0x63955de);
extern "C" void const* const public_63955ec = __AsmFindLabelExport(&internal_63955c0, 0x63955ec);
extern "C" void const* const public_63955f7 = __AsmFindLabelExport(&internal_63955c0, 0x63955f7);
extern "C" void const* const public_6395602 = __AsmFindLabelExport(&internal_63955c0, 0x6395602);
extern "C" void const* const public_639560d = __AsmFindLabelExport(&internal_63955c0, 0x639560d);
