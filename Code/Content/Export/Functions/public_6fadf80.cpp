#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2c20);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fadf8b _public_6fadf8b
#define public_6fadf96 _public_6fadf96
#define public_6fadfa1 _public_6fadfa1
#define public_6fadfa9 _public_6fadfa9
#define public_6fadfb1 _public_6fadfb1
#define public_6fadfb9 _public_6fadfb9
#define public_6fadfc1 _public_6fadfc1

PROC_DECLARE(0x6fadf80, internal_6fadf80, public_6fadf80);
/* CHUNK of public_6f23150 */
extern "C" NAKED register_t __cdecl internal_6fadf80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x98]
        jmp public_6ed2c20
        public_6fadf8b : nop
        mov ecx, dword ptr ss : [ebp-0xA0]
        jmp public_6ed2c20
        public_6fadf96 : nop
        lea ecx, ss:[ebp-0x94]
        jmp public_6ed2c20
        public_6fadfa1 : nop
        lea ecx, ss:[ebp-0x58]
        jmp public_6f15350
        public_6fadfa9 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_6ecfa90
        public_6fadfb1 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_6f28e10
        public_6fadfb9 : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_6eec8d0
        public_6fadfc1 : nop
        mov eax, offset public_6fc2f4c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fadf80)
        ASM_EXPORT_ENTRY_FIRST(0x6fadf8b, public_6fadf8b)
        ASM_EXPORT_ENTRY(0x6fadf96, public_6fadf96)
        ASM_EXPORT_ENTRY(0x6fadfa1, public_6fadfa1)
        ASM_EXPORT_ENTRY(0x6fadfa9, public_6fadfa9)
        ASM_EXPORT_ENTRY(0x6fadfb1, public_6fadfb1)
        ASM_EXPORT_ENTRY(0x6fadfb9, public_6fadfb9)
        ASM_EXPORT_ENTRY_LAST(0x6fadfc1, public_6fadfc1)
    }
}

#undef public_6fadf8b
#undef public_6fadf96
#undef public_6fadfa1
#undef public_6fadfa9
#undef public_6fadfb1
#undef public_6fadfb9
#undef public_6fadfc1

#pragma init_seg(compiler)
extern "C" void const* const public_6fadf8b = __AsmFindLabelExport(&internal_6fadf80, 0x6fadf8b);
extern "C" void const* const public_6fadf96 = __AsmFindLabelExport(&internal_6fadf80, 0x6fadf96);
extern "C" void const* const public_6fadfa1 = __AsmFindLabelExport(&internal_6fadf80, 0x6fadfa1);
extern "C" void const* const public_6fadfa9 = __AsmFindLabelExport(&internal_6fadf80, 0x6fadfa9);
extern "C" void const* const public_6fadfb1 = __AsmFindLabelExport(&internal_6fadf80, 0x6fadfb1);
extern "C" void const* const public_6fadfb9 = __AsmFindLabelExport(&internal_6fadf80, 0x6fadfb9);
extern "C" void const* const public_6fadfc1 = __AsmFindLabelExport(&internal_6fadf80, 0x6fadfc1);
