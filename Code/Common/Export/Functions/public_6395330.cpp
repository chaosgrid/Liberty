#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395338 _public_6395338

PROC_DECLARE(0x6395330, internal_6395330, public_6395330);
/* CHUNK of public_62de190 */
extern "C" NAKED register_t __cdecl internal_6395330()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62881d0
        public_6395338 : nop
        mov eax, offset public_63aede8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395330)
        ASM_EXPORT_ENTRY_SINGLE(0x6395338, public_6395338)
    }
}

#undef public_6395338

#pragma init_seg(compiler)
extern "C" void const* const public_6395338 = __AsmFindLabelExport(&internal_6395330, 0x6395338);
