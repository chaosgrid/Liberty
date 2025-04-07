#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_63221f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6396e4b _public_6396e4b
#define public_6396e56 _public_6396e56
#define public_6396e61 _public_6396e61
#define public_6396e6c _public_6396e6c
#define public_6396e7a _public_6396e7a
#define public_6396e88 _public_6396e88
#define public_6396e96 _public_6396e96
#define public_6396ea1 _public_6396ea1

PROC_DECLARE(0x6396e40, internal_6396e40, public_6396e40);
/* CHUNK of public_63241c0 */
extern "C" NAKED register_t __cdecl internal_6396e40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x9C]
        jmp public_63221f0
        public_6396e4b : nop
        mov ecx, dword ptr ss : [ebp-0x138]
        jmp public_63221f0
        public_6396e56 : nop
        mov ecx, dword ptr ss : [ebp-0x130]
        jmp public_63221f0
        public_6396e61 : nop
        lea ecx, ss:[ebp-0x9C]
        jmp public_63221f0
        public_6396e6c : nop
        mov ecx, dword ptr ss : [ebp-0x134]
        add ecx, 0x10
        jmp public_630e210
        public_6396e7a : nop
        mov ecx, dword ptr ss : [ebp-0x134]
        add ecx, 0x28
        jmp public_630e210
        public_6396e88 : nop
        mov ecx, dword ptr ss : [ebp-0x134]
        add ecx, 0x78
        jmp public_6269110
        public_6396e96 : nop
        lea ecx, ss:[ebp-0x12C]
        jmp public_63221f0
        public_6396ea1 : nop
        mov eax, offset public_63b0ea4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6396e40)
        ASM_EXPORT_ENTRY_FIRST(0x6396e4b, public_6396e4b)
        ASM_EXPORT_ENTRY(0x6396e56, public_6396e56)
        ASM_EXPORT_ENTRY(0x6396e61, public_6396e61)
        ASM_EXPORT_ENTRY(0x6396e6c, public_6396e6c)
        ASM_EXPORT_ENTRY(0x6396e7a, public_6396e7a)
        ASM_EXPORT_ENTRY(0x6396e88, public_6396e88)
        ASM_EXPORT_ENTRY(0x6396e96, public_6396e96)
        ASM_EXPORT_ENTRY_LAST(0x6396ea1, public_6396ea1)
    }
}

#undef public_6396e4b
#undef public_6396e56
#undef public_6396e61
#undef public_6396e6c
#undef public_6396e7a
#undef public_6396e88
#undef public_6396e96
#undef public_6396ea1

#pragma init_seg(compiler)
extern "C" void const* const public_6396e4b = __AsmFindLabelExport(&internal_6396e40, 0x6396e4b);
extern "C" void const* const public_6396e56 = __AsmFindLabelExport(&internal_6396e40, 0x6396e56);
extern "C" void const* const public_6396e61 = __AsmFindLabelExport(&internal_6396e40, 0x6396e61);
extern "C" void const* const public_6396e6c = __AsmFindLabelExport(&internal_6396e40, 0x6396e6c);
extern "C" void const* const public_6396e7a = __AsmFindLabelExport(&internal_6396e40, 0x6396e7a);
extern "C" void const* const public_6396e88 = __AsmFindLabelExport(&internal_6396e40, 0x6396e88);
extern "C" void const* const public_6396e96 = __AsmFindLabelExport(&internal_6396e40, 0x6396e96);
extern "C" void const* const public_6396ea1 = __AsmFindLabelExport(&internal_6396e40, 0x6396ea1);
