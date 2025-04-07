#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395c48 _public_6395c48

PROC_DECLARE(0x6395c40, internal_6395c40, public_6395c40);
/* CHUNK of public_62febf0 */
extern "C" NAKED register_t __cdecl internal_6395c40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6269110
        public_6395c48 : nop
        mov eax, offset public_63afa30
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395c40)
        ASM_EXPORT_ENTRY_SINGLE(0x6395c48, public_6395c48)
    }
}

#undef public_6395c48

#pragma init_seg(compiler)
extern "C" void const* const public_6395c48 = __AsmFindLabelExport(&internal_6395c40, 0x6395c48);
