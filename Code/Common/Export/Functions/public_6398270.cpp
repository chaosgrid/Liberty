#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635c310);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639827e _public_639827e

PROC_DECLARE(0x6398270, internal_6398270, public_6398270);
/* CHUNK of public_635c500 */
extern "C" NAKED register_t __cdecl internal_6398270()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x144
        jmp public_635c310
        public_639827e : nop
        mov eax, offset public_63b2700
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398270)
        ASM_EXPORT_ENTRY_SINGLE(0x639827e, public_639827e)
    }
}

#undef public_639827e

#pragma init_seg(compiler)
extern "C" void const* const public_639827e = __AsmFindLabelExport(&internal_6398270, 0x639827e);
