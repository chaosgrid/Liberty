#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30690);
CLANG_FORWARD_PROC_SYMBOL(public_6f377f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faed38 _public_6faed38
#define public_6faed43 _public_6faed43
#define public_6faed4e _public_6faed4e
#define public_6faed56 _public_6faed56
#define public_6faed5e _public_6faed5e
#define public_6faed66 _public_6faed66

PROC_DECLARE(0x6faed30, internal_6faed30, public_6faed30);
/* CHUNK of public_6f37110 */
extern "C" NAKED register_t __cdecl internal_6faed30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f30690
        public_6faed38 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_6eec8d0
        public_6faed43 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_6f377f0
        public_6faed4e : nop
        lea ecx, ss:[ebp-0x68]
        jmp public_6eec8d0
        public_6faed56 : nop
        lea ecx, ss:[ebp-0x4C]
        jmp public_6eec8d0
        public_6faed5e : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_6f98760
        public_6faed66 : nop
        mov eax, offset public_6fc3cf8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faed30)
        ASM_EXPORT_ENTRY_FIRST(0x6faed38, public_6faed38)
        ASM_EXPORT_ENTRY(0x6faed43, public_6faed43)
        ASM_EXPORT_ENTRY(0x6faed4e, public_6faed4e)
        ASM_EXPORT_ENTRY(0x6faed56, public_6faed56)
        ASM_EXPORT_ENTRY(0x6faed5e, public_6faed5e)
        ASM_EXPORT_ENTRY_LAST(0x6faed66, public_6faed66)
    }
}

#undef public_6faed38
#undef public_6faed43
#undef public_6faed4e
#undef public_6faed56
#undef public_6faed5e
#undef public_6faed66

#pragma init_seg(compiler)
extern "C" void const* const public_6faed38 = __AsmFindLabelExport(&internal_6faed30, 0x6faed38);
extern "C" void const* const public_6faed43 = __AsmFindLabelExport(&internal_6faed30, 0x6faed43);
extern "C" void const* const public_6faed4e = __AsmFindLabelExport(&internal_6faed30, 0x6faed4e);
extern "C" void const* const public_6faed56 = __AsmFindLabelExport(&internal_6faed30, 0x6faed56);
extern "C" void const* const public_6faed5e = __AsmFindLabelExport(&internal_6faed30, 0x6faed5e);
extern "C" void const* const public_6faed66 = __AsmFindLabelExport(&internal_6faed30, 0x6faed66);
