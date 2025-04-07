#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639276e _public_639276e
#define public_639277c _public_639277c
#define public_639278a _public_639278a

PROC_DECLARE(0x6392760, internal_6392760, public_6392760);
/* CHUNK of public_626ff40 */
extern "C" NAKED register_t __cdecl internal_6392760()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x94
        jmp public_62a68e0
        public_639276e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xA0
        jmp public_62a68e0
        public_639277c : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xAC
        jmp public_62a68e0
        public_639278a : nop
        mov eax, offset public_63ab548
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392760)
        ASM_EXPORT_ENTRY_FIRST(0x639276e, public_639276e)
        ASM_EXPORT_ENTRY(0x639277c, public_639277c)
        ASM_EXPORT_ENTRY_LAST(0x639278a, public_639278a)
    }
}

#undef public_639276e
#undef public_639277c
#undef public_639278a

#pragma init_seg(compiler)
extern "C" void const* const public_639276e = __AsmFindLabelExport(&internal_6392760, 0x639276e);
extern "C" void const* const public_639277c = __AsmFindLabelExport(&internal_6392760, 0x639277c);
extern "C" void const* const public_639278a = __AsmFindLabelExport(&internal_6392760, 0x639278a);
