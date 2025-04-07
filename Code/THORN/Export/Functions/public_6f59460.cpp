#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59468 _public_6f59468

PROC_DECLARE(0x6f59460, internal_6f59460, public_6f59460);
/* CHUNK of public_6f471a0 */
extern "C" NAKED register_t __cdecl internal_6f59460()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f59468 : nop
        mov eax, offset public_6f5c64c
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59460)
        ASM_EXPORT_ENTRY_SINGLE(0x6f59468, public_6f59468)
    }
}

#undef public_6f59468

#pragma init_seg(compiler)
extern "C" void const* const public_6f59468 = __AsmFindLabelExport(&internal_6f59460, 0x6f59468);
