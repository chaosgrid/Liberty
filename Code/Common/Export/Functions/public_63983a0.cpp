#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63522f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63983a8 _public_63983a8

PROC_DECLARE(0x63983a0, internal_63983a0, public_63983a0);
/* CHUNK of public_63614a0 */
extern "C" NAKED register_t __cdecl internal_63983a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_63522f0
        public_63983a8 : nop
        mov eax, offset public_63b28a0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63983a0)
        ASM_EXPORT_ENTRY_SINGLE(0x63983a8, public_63983a8)
    }
}

#undef public_63983a8

#pragma init_seg(compiler)
extern "C" void const* const public_63983a8 = __AsmFindLabelExport(&internal_63983a0, 0x63983a8);
