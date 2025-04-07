#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_620b700);
CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_620b730);
CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624779b _public_624779b
#define public_62477a3 _public_62477a3
#define public_62477ab _public_62477ab
#define public_62477b9 _public_62477b9
#define public_62477c1 _public_62477c1
#define public_62477c9 _public_62477c9
#define public_62477d1 _public_62477d1

PROC_DECLARE(0x6247790, internal_6247790, public_6247790);
/* CHUNK of public_620b480 */
extern "C" NAKED register_t __cdecl internal_6247790()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624779b : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620ce80
        public_62477a3 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_620ce80
        public_62477ab : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0xB8
        jmp public_620b700
        public_62477b9 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_620b730
        public_62477c1 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620b6f0
        public_62477c9 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_620b710
        public_62477d1 : nop
        mov eax, offset public_62505a4
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247790)
        ASM_EXPORT_ENTRY_FIRST(0x624779b, public_624779b)
        ASM_EXPORT_ENTRY(0x62477a3, public_62477a3)
        ASM_EXPORT_ENTRY(0x62477ab, public_62477ab)
        ASM_EXPORT_ENTRY(0x62477b9, public_62477b9)
        ASM_EXPORT_ENTRY(0x62477c1, public_62477c1)
        ASM_EXPORT_ENTRY(0x62477c9, public_62477c9)
        ASM_EXPORT_ENTRY_LAST(0x62477d1, public_62477d1)
    }
}

#undef public_624779b
#undef public_62477a3
#undef public_62477ab
#undef public_62477b9
#undef public_62477c1
#undef public_62477c9
#undef public_62477d1

#pragma init_seg(compiler)
extern "C" void const* const public_624779b = __AsmFindLabelExport(&internal_6247790, 0x624779b);
extern "C" void const* const public_62477a3 = __AsmFindLabelExport(&internal_6247790, 0x62477a3);
extern "C" void const* const public_62477ab = __AsmFindLabelExport(&internal_6247790, 0x62477ab);
extern "C" void const* const public_62477b9 = __AsmFindLabelExport(&internal_6247790, 0x62477b9);
extern "C" void const* const public_62477c1 = __AsmFindLabelExport(&internal_6247790, 0x62477c1);
extern "C" void const* const public_62477c9 = __AsmFindLabelExport(&internal_6247790, 0x62477c9);
extern "C" void const* const public_62477d1 = __AsmFindLabelExport(&internal_6247790, 0x62477d1);
