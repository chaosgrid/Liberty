#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea6fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef0570);
CLANG_FORWARD_PROC_SYMBOL(public_6ef05d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1f50);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabfa8 _public_6fabfa8
#define public_6fabfb3 _public_6fabfb3
#define public_6fabfbe _public_6fabfbe
#define public_6fabfc6 _public_6fabfc6
#define public_6fabfce _public_6fabfce
#define public_6fabfe6 _public_6fabfe6
#define public_6fabfed _public_6fabfed
#define public_6fabff5 _public_6fabff5

PROC_DECLARE(0x6fabfa0, internal_6fabfa0, public_6fabfa0);
/* CHUNK of public_6ef06d0 */
extern "C" NAKED register_t __cdecl internal_6fabfa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6ef0570
        public_6fabfa8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x68
        jmp public_6ef05d0
        public_6fabfb3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x7C
        jmp public_6ef1f50
        public_6fabfbe : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f15350
        public_6fabfc6 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6ea6fe0
        public_6fabfce : nop
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6fabfe6
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 4
        mov dword ptr ss : [ebp-0x50], eax
        jmp public_6fabfed
        public_6fabfe6 : nop
        mov dword ptr ss : [ebp-0x50], 0
        public_6fabfed : nop
        mov ecx, dword ptr ss : [ebp-0x50]
        jmp public_6ea8cc0
        public_6fabff5 : nop
        mov eax, offset public_6fc0bdc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabfa0)
        ASM_EXPORT_ENTRY_FIRST(0x6fabfa8, public_6fabfa8)
        ASM_EXPORT_ENTRY(0x6fabfb3, public_6fabfb3)
        ASM_EXPORT_ENTRY(0x6fabfbe, public_6fabfbe)
        ASM_EXPORT_ENTRY(0x6fabfc6, public_6fabfc6)
        ASM_EXPORT_ENTRY(0x6fabfce, public_6fabfce)
        ASM_EXPORT_ENTRY(0x6fabfe6, public_6fabfe6)
        ASM_EXPORT_ENTRY(0x6fabfed, public_6fabfed)
        ASM_EXPORT_ENTRY_LAST(0x6fabff5, public_6fabff5)
    }
}

#undef public_6fabfa8
#undef public_6fabfb3
#undef public_6fabfbe
#undef public_6fabfc6
#undef public_6fabfce
#undef public_6fabfe6
#undef public_6fabfed
#undef public_6fabff5

#pragma init_seg(compiler)
extern "C" void const* const public_6fabfa8 = __AsmFindLabelExport(&internal_6fabfa0, 0x6fabfa8);
extern "C" void const* const public_6fabfb3 = __AsmFindLabelExport(&internal_6fabfa0, 0x6fabfb3);
extern "C" void const* const public_6fabfbe = __AsmFindLabelExport(&internal_6fabfa0, 0x6fabfbe);
extern "C" void const* const public_6fabfc6 = __AsmFindLabelExport(&internal_6fabfa0, 0x6fabfc6);
extern "C" void const* const public_6fabfce = __AsmFindLabelExport(&internal_6fabfa0, 0x6fabfce);
extern "C" void const* const public_6fabfe6 = __AsmFindLabelExport(&internal_6fabfa0, 0x6fabfe6);
extern "C" void const* const public_6fabfed = __AsmFindLabelExport(&internal_6fabfa0, 0x6fabfed);
extern "C" void const* const public_6fabff5 = __AsmFindLabelExport(&internal_6fabfa0, 0x6fabff5);
