#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632af40);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63972f8 _public_63972f8

PROC_DECLARE(0x63972f0, internal_63972f0, public_63972f0);
/* CHUNK of public_632afb0 */
extern "C" NAKED register_t __cdecl internal_63972f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_632af40
        public_63972f8 : nop
        mov eax, offset public_63b142c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63972f0)
        ASM_EXPORT_ENTRY_SINGLE(0x63972f8, public_63972f8)
    }
}

#undef public_63972f8

#pragma init_seg(compiler)
extern "C" void const* const public_63972f8 = __AsmFindLabelExport(&internal_63972f0, 0x63972f8);
