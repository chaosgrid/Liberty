#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62087f0);
CLANG_FORWARD_PROC_SYMBOL(public_62306c0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249828 _public_6249828
#define public_6249830 _public_6249830
#define public_6249841 _public_6249841

PROC_DECLARE(0x6249820, internal_6249820, public_6249820);
/* CHUNK of public_622f6a0 */
extern "C" NAKED register_t __cdecl internal_6249820()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_62306c0
        public_6249828 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_62306c0
        public_6249830 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        mov ecx, dword ptr ss : [ebp-0x28]
        push ecx
        call public_62087f0
        add esp, 8
        ret 
        public_6249841 : nop
        mov eax, offset public_62527d4
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249820)
        ASM_EXPORT_ENTRY_FIRST(0x6249828, public_6249828)
        ASM_EXPORT_ENTRY(0x6249830, public_6249830)
        ASM_EXPORT_ENTRY_LAST(0x6249841, public_6249841)
    }
}

#undef public_6249828
#undef public_6249830
#undef public_6249841

#pragma init_seg(compiler)
extern "C" void const* const public_6249828 = __AsmFindLabelExport(&internal_6249820, 0x6249828);
extern "C" void const* const public_6249830 = __AsmFindLabelExport(&internal_6249820, 0x6249830);
extern "C" void const* const public_6249841 = __AsmFindLabelExport(&internal_6249820, 0x6249841);
