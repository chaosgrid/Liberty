#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59348 _public_6f59348

PROC_DECLARE(0x6f59340, internal_6f59340, public_6f59340);
/* CHUNK of public_6f44fc0 */
extern "C" NAKED register_t __cdecl internal_6f59340()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f59348 : nop
        mov eax, offset public_6f5c51c
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59340)
        ASM_EXPORT_ENTRY_SINGLE(0x6f59348, public_6f59348)
    }
}

#undef public_6f59348

#pragma init_seg(compiler)
extern "C" void const* const public_6f59348 = __AsmFindLabelExport(&internal_6f59340, 0x6f59348);
