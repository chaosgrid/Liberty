#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62087f0);
CLANG_FORWARD_PROC_SYMBOL(public_6209fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624763b _public_624763b
#define public_624764c _public_624764c

PROC_DECLARE(0x6247630, internal_6247630, public_6247630);
/* CHUNK of public_6208950 */
extern "C" NAKED register_t __cdecl internal_6247630()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_6209fc0
        public_624763b : nop
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_62087f0
        add esp, 8
        ret 
        public_624764c : nop
        mov eax, offset public_6250418
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247630)
        ASM_EXPORT_ENTRY_FIRST(0x624763b, public_624763b)
        ASM_EXPORT_ENTRY_LAST(0x624764c, public_624764c)
    }
}

#undef public_624763b
#undef public_624764c

#pragma init_seg(compiler)
extern "C" void const* const public_624763b = __AsmFindLabelExport(&internal_6247630, 0x624763b);
extern "C" void const* const public_624764c = __AsmFindLabelExport(&internal_6247630, 0x624764c);
