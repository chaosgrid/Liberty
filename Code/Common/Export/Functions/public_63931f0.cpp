#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348710);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63931fe _public_63931fe
#define public_6393209 _public_6393209

PROC_DECLARE(0x63931f0, internal_63931f0, public_63931f0);
/* CHUNK of public_6289100 */
extern "C" NAKED register_t __cdecl internal_63931f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0xA8]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63931fe : nop
        lea ecx, ss:[ebp-0xA4]
        jmp public_6348710
        public_6393209 : nop
        mov eax, offset public_63ac2d0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63931f0)
        ASM_EXPORT_ENTRY_FIRST(0x63931fe, public_63931fe)
        ASM_EXPORT_ENTRY_LAST(0x6393209, public_6393209)
    }
}

#undef public_63931fe
#undef public_6393209

#pragma init_seg(compiler)
extern "C" void const* const public_63931fe = __AsmFindLabelExport(&internal_63931f0, 0x63931fe);
extern "C" void const* const public_6393209 = __AsmFindLabelExport(&internal_63931f0, 0x6393209);
