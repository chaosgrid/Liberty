#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_4308d0);
CLANG_FORWARD_PROC_SYMBOL(public_4319d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9041 _public_5b9041
#define public_5b904c _public_5b904c
#define public_5b9057 _public_5b9057
#define public_5b9063 _public_5b9063

PROC_DECLARE(0x5b9030, internal_5b9030, public_5b9030);
/* CHUNK of public_433bc0 */
extern "C" NAKED register_t __cdecl internal_5b9030()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5b9041 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0xC
        jmp public_4308d0
        public_5b904c : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x20
        jmp public_4319d0
        public_5b9057 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x2C
        jmp dword ptr ds : [public_5c7090]
        public_5b9063 : nop
        mov eax, offset public_5f2f34
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9030)
        ASM_EXPORT_ENTRY_FIRST(0x5b9041, public_5b9041)
        ASM_EXPORT_ENTRY(0x5b904c, public_5b904c)
        ASM_EXPORT_ENTRY(0x5b9057, public_5b9057)
        ASM_EXPORT_ENTRY_LAST(0x5b9063, public_5b9063)
    }
}

#undef public_5b9041
#undef public_5b904c
#undef public_5b9057
#undef public_5b9063

#pragma init_seg(compiler)
extern "C" void const* const public_5b9041 = __AsmFindLabelExport(&internal_5b9030, 0x5b9041);
extern "C" void const* const public_5b904c = __AsmFindLabelExport(&internal_5b9030, 0x5b904c);
extern "C" void const* const public_5b9057 = __AsmFindLabelExport(&internal_5b9030, 0x5b9057);
extern "C" void const* const public_5b9063 = __AsmFindLabelExport(&internal_5b9030, 0x5b9063);
