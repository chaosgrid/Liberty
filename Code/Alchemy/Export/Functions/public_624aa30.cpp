#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624aa3b _public_624aa3b

PROC_DECLARE(0x624aa30, internal_624aa30, public_624aa30);
/* CHUNK of public_62446c0 */
extern "C" NAKED register_t __cdecl internal_624aa30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6209bb0
        public_624aa3b : nop
        mov eax, offset public_6253ad4
        jmp public_6246126
        UNREACHABLE_TRAP(0x624aa30)
        ASM_EXPORT_ENTRY_SINGLE(0x624aa3b, public_624aa3b)
    }
}

#undef public_624aa3b

#pragma init_seg(compiler)
extern "C" void const* const public_624aa3b = __AsmFindLabelExport(&internal_624aa30, 0x624aa3b);
