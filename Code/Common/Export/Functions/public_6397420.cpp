#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a8920);
CLANG_FORWARD_PROC_SYMBOL(public_6325d90);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397431 _public_6397431
#define public_6397439 _public_6397439

PROC_DECLARE(0x6397420, internal_6397420, public_6397420);
/* CHUNK of public_632d5e0 */
extern "C" NAKED register_t __cdecl internal_6397420()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_62a8920
        add esp, 8
        ret 
        public_6397431 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6325d90
        public_6397439 : nop
        mov eax, offset public_63b1580
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397420)
        ASM_EXPORT_ENTRY_FIRST(0x6397431, public_6397431)
        ASM_EXPORT_ENTRY_LAST(0x6397439, public_6397439)
    }
}

#undef public_6397431
#undef public_6397439

#pragma init_seg(compiler)
extern "C" void const* const public_6397431 = __AsmFindLabelExport(&internal_6397420, 0x6397431);
extern "C" void const* const public_6397439 = __AsmFindLabelExport(&internal_6397420, 0x6397439);
