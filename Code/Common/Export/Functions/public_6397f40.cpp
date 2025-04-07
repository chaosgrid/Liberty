#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634dc20);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397f48 _public_6397f48

PROC_DECLARE(0x6397f40, internal_6397f40, public_6397f40);
/* CHUNK of public_634db70 */
extern "C" NAKED register_t __cdecl internal_6397f40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_634dc20
        public_6397f48 : nop
        mov eax, offset public_63b22f8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397f40)
        ASM_EXPORT_ENTRY_SINGLE(0x6397f48, public_6397f48)
    }
}

#undef public_6397f48

#pragma init_seg(compiler)
extern "C" void const* const public_6397f48 = __AsmFindLabelExport(&internal_6397f40, 0x6397f48);
