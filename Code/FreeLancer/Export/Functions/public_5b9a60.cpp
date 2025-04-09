#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446c50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9a68 _public_5b9a68
#define public_5b9a73 _public_5b9a73

PROC_DECLARE(0x5b9a60, internal_5b9a60, public_5b9a60);
/* CHUNK of public_4487f0 */
extern "C" NAKED register_t __cdecl internal_5b9a60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x50]
        jmp public_446c50
        public_5b9a68 : nop
        mov eax, dword ptr ss : [ebp-0x54]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9a73 : nop
        mov eax, offset public_5f3afc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9a60)
        ASM_EXPORT_ENTRY_FIRST(0x5b9a68, public_5b9a68)
        ASM_EXPORT_ENTRY_LAST(0x5b9a73, public_5b9a73)
    }
}

#undef public_5b9a68
#undef public_5b9a73

#pragma init_seg(compiler)
extern "C" void const* const public_5b9a68 = __AsmFindLabelExport(&internal_5b9a60, 0x5b9a68);
extern "C" void const* const public_5b9a73 = __AsmFindLabelExport(&internal_5b9a60, 0x5b9a73);
