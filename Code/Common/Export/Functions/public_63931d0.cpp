#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63931de _public_63931de

PROC_DECLARE(0x63931d0, internal_63931d0, public_63931d0);
/* CHUNK of public_6288e60 */
extern "C" NAKED register_t __cdecl internal_63931d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x94]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63931de : nop
        mov eax, offset public_63ac2a4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63931d0)
        ASM_EXPORT_ENTRY_SINGLE(0x63931de, public_63931de)
    }
}

#undef public_63931de

#pragma init_seg(compiler)
extern "C" void const* const public_63931de = __AsmFindLabelExport(&internal_63931d0, 0x63931de);
