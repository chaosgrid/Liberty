#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397beb _public_6397beb
#define public_6397bf6 _public_6397bf6

PROC_DECLARE(0x6397be0, internal_6397be0, public_6397be0);
/* CHUNK of public_6348d80 */
extern "C" NAKED register_t __cdecl internal_6397be0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_63449d0
        public_6397beb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x1C
        jmp public_63449d0
        public_6397bf6 : nop
        mov eax, offset public_63b1ee0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397be0)
        ASM_EXPORT_ENTRY_FIRST(0x6397beb, public_6397beb)
        ASM_EXPORT_ENTRY_LAST(0x6397bf6, public_6397bf6)
    }
}

#undef public_6397beb
#undef public_6397bf6

#pragma init_seg(compiler)
extern "C" void const* const public_6397beb = __AsmFindLabelExport(&internal_6397be0, 0x6397beb);
extern "C" void const* const public_6397bf6 = __AsmFindLabelExport(&internal_6397be0, 0x6397bf6);
