#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5154f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bee79 _public_5bee79
#define public_5bee81 _public_5bee81
#define public_5bee89 _public_5bee89
#define public_5bee9a _public_5bee9a
#define public_5beea3 _public_5beea3

PROC_DECLARE(0x5bee70, internal_5bee70, public_5bee70);
/* CHUNK of public_4ebf70 */
extern "C" NAKED register_t __cdecl internal_5bee70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c62a4]
        public_5bee79 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_5154f0
        public_5bee81 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_5154f0
        public_5bee89 : nop
        mov eax, dword ptr ss : [ebp-0x48]
        push eax
        mov ecx, dword ptr ss : [ebp-0x4C]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5bee9a : nop
        mov ecx, dword ptr ss : [ebp-0x4C]
        jmp dword ptr ds : [public_5c62a4]
        public_5beea3 : nop
        mov eax, offset public_5f8e50
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bee70)
        ASM_EXPORT_ENTRY_FIRST(0x5bee79, public_5bee79)
        ASM_EXPORT_ENTRY(0x5bee81, public_5bee81)
        ASM_EXPORT_ENTRY(0x5bee89, public_5bee89)
        ASM_EXPORT_ENTRY(0x5bee9a, public_5bee9a)
        ASM_EXPORT_ENTRY_LAST(0x5beea3, public_5beea3)
    }
}

#undef public_5bee79
#undef public_5bee81
#undef public_5bee89
#undef public_5bee9a
#undef public_5beea3

#pragma init_seg(compiler)
extern "C" void const* const public_5bee79 = __AsmFindLabelExport(&internal_5bee70, 0x5bee79);
extern "C" void const* const public_5bee81 = __AsmFindLabelExport(&internal_5bee70, 0x5bee81);
extern "C" void const* const public_5bee89 = __AsmFindLabelExport(&internal_5bee70, 0x5bee89);
extern "C" void const* const public_5bee9a = __AsmFindLabelExport(&internal_5bee70, 0x5bee9a);
extern "C" void const* const public_5beea3 = __AsmFindLabelExport(&internal_5bee70, 0x5beea3);
