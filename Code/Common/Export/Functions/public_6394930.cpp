#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62bd310);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639493b _public_639493b
#define public_6394946 _public_6394946

PROC_DECLARE(0x6394930, internal_6394930, public_6394930);
/* CHUNK of public_62bd7e0 */
extern "C" NAKED register_t __cdecl internal_6394930()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x10
        jmp public_62bd310
        public_639493b : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x28
        jmp public_62a68e0
        public_6394946 : nop
        mov eax, offset public_63adf5c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394930)
        ASM_EXPORT_ENTRY_FIRST(0x639493b, public_639493b)
        ASM_EXPORT_ENTRY_LAST(0x6394946, public_6394946)
    }
}

#undef public_639493b
#undef public_6394946

#pragma init_seg(compiler)
extern "C" void const* const public_639493b = __AsmFindLabelExport(&internal_6394930, 0x639493b);
extern "C" void const* const public_6394946 = __AsmFindLabelExport(&internal_6394930, 0x6394946);
