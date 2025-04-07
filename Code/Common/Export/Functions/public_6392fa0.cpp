#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343120);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392fa8 _public_6392fa8

PROC_DECLARE(0x6392fa0, internal_6392fa0, public_6392fa0);
/* CHUNK of public_6285aa0 */
extern "C" NAKED register_t __cdecl internal_6392fa0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6343120
        public_6392fa8 : nop
        mov eax, offset public_63abf80
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392fa0)
        ASM_EXPORT_ENTRY_SINGLE(0x6392fa8, public_6392fa8)
    }
}

#undef public_6392fa8

#pragma init_seg(compiler)
extern "C" void const* const public_6392fa8 = __AsmFindLabelExport(&internal_6392fa0, 0x6392fa8);
