#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb21a1 _public_6fb21a1

PROC_DECLARE(0x6fb2190, internal_6fb2190, public_6fb2190);
/* CHUNK of public_6fa7230 */
extern "C" NAKED register_t __cdecl internal_6fb2190()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fb21a1 : nop
        mov eax, offset public_6fc7794
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb2190)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb21a1, public_6fb21a1)
    }
}

#undef public_6fb21a1

#pragma init_seg(compiler)
extern "C" void const* const public_6fb21a1 = __AsmFindLabelExport(&internal_6fb2190, 0x6fb21a1);
