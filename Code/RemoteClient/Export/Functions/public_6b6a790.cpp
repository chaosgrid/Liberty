#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3ede0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a798 _public_6b6a798
#define public_6b6a7a3 _public_6b6a7a3
#define public_6b6a7ae _public_6b6a7ae

PROC_DECLARE(0x6b6a790, internal_6b6a790, public_6b6a790);
/* CHUNK of public_6b3ed00 */
extern "C" NAKED register_t __cdecl internal_6b6a790()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6b4e730
        public_6b6a798 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x20
        jmp public_6b3ede0
        public_6b6a7a3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_6b3ede0
        public_6b6a7ae : nop
        mov eax, offset public_6b6ee7c
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a790)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a798, public_6b6a798)
        ASM_EXPORT_ENTRY(0x6b6a7a3, public_6b6a7a3)
        ASM_EXPORT_ENTRY_LAST(0x6b6a7ae, public_6b6a7ae)
    }
}

#undef public_6b6a798
#undef public_6b6a7a3
#undef public_6b6a7ae

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a798 = __AsmFindLabelExport(&internal_6b6a790, 0x6b6a798);
extern "C" void const* const public_6b6a7a3 = __AsmFindLabelExport(&internal_6b6a790, 0x6b6a7a3);
extern "C" void const* const public_6b6a7ae = __AsmFindLabelExport(&internal_6b6a790, 0x6b6a7ae);
