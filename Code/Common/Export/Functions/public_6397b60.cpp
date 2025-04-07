#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397b6b _public_6397b6b

PROC_DECLARE(0x6397b60, internal_6397b60, public_6397b60);
/* CHUNK of public_6347550 */
extern "C" NAKED register_t __cdecl internal_6397b60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397b6b : nop
        mov eax, offset public_63b1e08
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397b60)
        ASM_EXPORT_ENTRY_SINGLE(0x6397b6b, public_6397b6b)
    }
}

#undef public_6397b6b

#pragma init_seg(compiler)
extern "C" void const* const public_6397b6b = __AsmFindLabelExport(&internal_6397b60, 0x6397b6b);
