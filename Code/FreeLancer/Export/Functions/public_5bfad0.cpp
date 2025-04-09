#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfad8 _public_5bfad8

PROC_DECLARE(0x5bfad0, internal_5bfad0, public_5bfad0);
/* CHUNK of public_506eb0 */
extern "C" NAKED register_t __cdecl internal_5bfad0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_420d10
        public_5bfad8 : nop
        mov eax, offset public_5f99f4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfad0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bfad8, public_5bfad8)
    }
}

#undef public_5bfad8

#pragma init_seg(compiler)
extern "C" void const* const public_5bfad8 = __AsmFindLabelExport(&internal_5bfad0, 0x5bfad8);
