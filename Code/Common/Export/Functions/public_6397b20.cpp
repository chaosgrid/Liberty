#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63456b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397b28 _public_6397b28

PROC_DECLARE(0x6397b20, internal_6397b20, public_6397b20);
/* CHUNK of public_6345790 */
extern "C" NAKED register_t __cdecl internal_6397b20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_63456b0
        public_6397b28 : nop
        mov eax, offset public_63b1db8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397b20)
        ASM_EXPORT_ENTRY_SINGLE(0x6397b28, public_6397b28)
    }
}

#undef public_6397b28

#pragma init_seg(compiler)
extern "C" void const* const public_6397b28 = __AsmFindLabelExport(&internal_6397b20, 0x6397b28);
