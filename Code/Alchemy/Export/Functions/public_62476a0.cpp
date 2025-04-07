#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209d60);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62476ab _public_62476ab
#define public_62476b6 _public_62476b6

PROC_DECLARE(0x62476a0, internal_62476a0, public_62476a0);
/* CHUNK of public_6209240 */
extern "C" NAKED register_t __cdecl internal_62476a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_62476ab : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 8
        jmp public_6209d60
        public_62476b6 : nop
        mov eax, offset public_6250494
        jmp public_6246126
        UNREACHABLE_TRAP(0x62476a0)
        ASM_EXPORT_ENTRY_FIRST(0x62476ab, public_62476ab)
        ASM_EXPORT_ENTRY_LAST(0x62476b6, public_62476b6)
    }
}

#undef public_62476ab
#undef public_62476b6

#pragma init_seg(compiler)
extern "C" void const* const public_62476ab = __AsmFindLabelExport(&internal_62476a0, 0x62476ab);
extern "C" void const* const public_62476b6 = __AsmFindLabelExport(&internal_62476a0, 0x62476b6);
