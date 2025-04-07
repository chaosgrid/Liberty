#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207470);
CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_6212ec0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247f3b _public_6247f3b
#define public_6247f43 _public_6247f43
#define public_6247f4e _public_6247f4e
#define public_6247f59 _public_6247f59
#define public_6247f61 _public_6247f61

PROC_DECLARE(0x6247f30, internal_6247f30, public_6247f30);
/* CHUNK of public_6212960 */
extern "C" NAKED register_t __cdecl internal_6247f30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6247f3b : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6212ec0
        public_6247f43 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_62084b0
        public_6247f4e : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6247f59 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6207470
        public_6247f61 : nop
        mov eax, offset public_6250dc0
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247f30)
        ASM_EXPORT_ENTRY_FIRST(0x6247f3b, public_6247f3b)
        ASM_EXPORT_ENTRY(0x6247f43, public_6247f43)
        ASM_EXPORT_ENTRY(0x6247f4e, public_6247f4e)
        ASM_EXPORT_ENTRY(0x6247f59, public_6247f59)
        ASM_EXPORT_ENTRY_LAST(0x6247f61, public_6247f61)
    }
}

#undef public_6247f3b
#undef public_6247f43
#undef public_6247f4e
#undef public_6247f59
#undef public_6247f61

#pragma init_seg(compiler)
extern "C" void const* const public_6247f3b = __AsmFindLabelExport(&internal_6247f30, 0x6247f3b);
extern "C" void const* const public_6247f43 = __AsmFindLabelExport(&internal_6247f30, 0x6247f43);
extern "C" void const* const public_6247f4e = __AsmFindLabelExport(&internal_6247f30, 0x6247f4e);
extern "C" void const* const public_6247f59 = __AsmFindLabelExport(&internal_6247f30, 0x6247f59);
extern "C" void const* const public_6247f61 = __AsmFindLabelExport(&internal_6247f30, 0x6247f61);
