#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63927ae _public_63927ae
#define public_63927bc _public_63927bc
#define public_63927ca _public_63927ca

PROC_DECLARE(0x63927a0, internal_63927a0, public_63927a0);
/* CHUNK of public_6270090 */
extern "C" NAKED register_t __cdecl internal_63927a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x94
        jmp public_62a68e0
        public_63927ae : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0xA0
        jmp public_62a68e0
        public_63927bc : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0xAC
        jmp public_62a68e0
        public_63927ca : nop
        mov eax, offset public_63ab57c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63927a0)
        ASM_EXPORT_ENTRY_FIRST(0x63927ae, public_63927ae)
        ASM_EXPORT_ENTRY(0x63927bc, public_63927bc)
        ASM_EXPORT_ENTRY_LAST(0x63927ca, public_63927ca)
    }
}

#undef public_63927ae
#undef public_63927bc
#undef public_63927ca

#pragma init_seg(compiler)
extern "C" void const* const public_63927ae = __AsmFindLabelExport(&internal_63927a0, 0x63927ae);
extern "C" void const* const public_63927bc = __AsmFindLabelExport(&internal_63927a0, 0x63927bc);
extern "C" void const* const public_63927ca = __AsmFindLabelExport(&internal_63927a0, 0x63927ca);
