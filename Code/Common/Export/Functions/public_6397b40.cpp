#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397b4b _public_6397b4b

PROC_DECLARE(0x6397b40, internal_6397b40, public_6397b40);
/* CHUNK of public_6345f10 */
extern "C" NAKED register_t __cdecl internal_6397b40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397b4b : nop
        mov eax, offset public_63b1de0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397b40)
        ASM_EXPORT_ENTRY_SINGLE(0x6397b4b, public_6397b4b)
    }
}

#undef public_6397b4b

#pragma init_seg(compiler)
extern "C" void const* const public_6397b4b = __AsmFindLabelExport(&internal_6397b40, 0x6397b4b);
