#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a3650);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393e28 _public_6393e28
#define public_6393e33 _public_6393e33
#define public_6393e3e _public_6393e3e

PROC_DECLARE(0x6393e20, internal_6393e20, public_6393e20);
/* CHUNK of public_62a4940 */
extern "C" NAKED register_t __cdecl internal_6393e20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x44]
        jmp public_62a3650
        public_6393e28 : nop
        mov eax, dword ptr ss : [ebp-0x78]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6393e33 : nop
        mov eax, dword ptr ss : [ebp-0x78]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6393e3e : nop
        mov eax, offset public_63ad2bc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393e20)
        ASM_EXPORT_ENTRY_FIRST(0x6393e28, public_6393e28)
        ASM_EXPORT_ENTRY(0x6393e33, public_6393e33)
        ASM_EXPORT_ENTRY_LAST(0x6393e3e, public_6393e3e)
    }
}

#undef public_6393e28
#undef public_6393e33
#undef public_6393e3e

#pragma init_seg(compiler)
extern "C" void const* const public_6393e28 = __AsmFindLabelExport(&internal_6393e20, 0x6393e28);
extern "C" void const* const public_6393e33 = __AsmFindLabelExport(&internal_6393e20, 0x6393e33);
extern "C" void const* const public_6393e3e = __AsmFindLabelExport(&internal_6393e20, 0x6393e3e);
