#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a890);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a910);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a930);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59198 _public_6f59198
#define public_6f591a6 _public_6f591a6
#define public_6f591b4 _public_6f591b4
#define public_6f591c2 _public_6f591c2
#define public_6f591d0 _public_6f591d0
#define public_6f591de _public_6f591de

PROC_DECLARE(0x6f59190, internal_6f59190, public_6f59190);
/* CHUNK of public_6f42d70 */
extern "C" NAKED register_t __cdecl internal_6f59190()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f405e0
        public_6f59198 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x104
        jmp public_6f4a890
        public_6f591a6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x108
        jmp public_6f4a8f0
        public_6f591b4 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10C
        jmp public_6f4a910
        public_6f591c2 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x110
        jmp public_6f4a930
        public_6f591d0 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x114
        jmp public_6f4a7e0
        public_6f591de : nop
        mov eax, offset public_6f5c390
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59190)
        ASM_EXPORT_ENTRY_FIRST(0x6f59198, public_6f59198)
        ASM_EXPORT_ENTRY(0x6f591a6, public_6f591a6)
        ASM_EXPORT_ENTRY(0x6f591b4, public_6f591b4)
        ASM_EXPORT_ENTRY(0x6f591c2, public_6f591c2)
        ASM_EXPORT_ENTRY(0x6f591d0, public_6f591d0)
        ASM_EXPORT_ENTRY_LAST(0x6f591de, public_6f591de)
    }
}

#undef public_6f59198
#undef public_6f591a6
#undef public_6f591b4
#undef public_6f591c2
#undef public_6f591d0
#undef public_6f591de

#pragma init_seg(compiler)
extern "C" void const* const public_6f59198 = __AsmFindLabelExport(&internal_6f59190, 0x6f59198);
extern "C" void const* const public_6f591a6 = __AsmFindLabelExport(&internal_6f59190, 0x6f591a6);
extern "C" void const* const public_6f591b4 = __AsmFindLabelExport(&internal_6f59190, 0x6f591b4);
extern "C" void const* const public_6f591c2 = __AsmFindLabelExport(&internal_6f59190, 0x6f591c2);
extern "C" void const* const public_6f591d0 = __AsmFindLabelExport(&internal_6f59190, 0x6f591d0);
extern "C" void const* const public_6f591de = __AsmFindLabelExport(&internal_6f59190, 0x6f591de);
