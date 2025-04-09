#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403190);
CLANG_FORWARD_PROC_SYMBOL(public_403200);
CLANG_FORWARD_PROC_SYMBOL(public_4032a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8398 _public_5b8398
#define public_5b83a0 _public_5b83a0
#define public_5b83ab _public_5b83ab
#define public_5b83b3 _public_5b83b3
#define public_5b83c1 _public_5b83c1

PROC_DECLARE(0x5b8390, internal_5b8390, public_5b8390);
/* CHUNK of public_402f40 */
extern "C" NAKED register_t __cdecl internal_5b8390()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x78]
        jmp public_403200
        public_5b8398 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_4032a0
        public_5b83a0 : nop
        mov ecx, dword ptr ss : [ebp-0x88]
        jmp public_403190
        public_5b83ab : nop
        lea ecx, ss:[ebp-0x78]
        jmp public_403190
        public_5b83b3 : nop
        mov eax, dword ptr ss : [ebp-0x84]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b83c1 : nop
        mov eax, offset public_5f1e8c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8390)
        ASM_EXPORT_ENTRY_FIRST(0x5b8398, public_5b8398)
        ASM_EXPORT_ENTRY(0x5b83a0, public_5b83a0)
        ASM_EXPORT_ENTRY(0x5b83ab, public_5b83ab)
        ASM_EXPORT_ENTRY(0x5b83b3, public_5b83b3)
        ASM_EXPORT_ENTRY_LAST(0x5b83c1, public_5b83c1)
    }
}

#undef public_5b8398
#undef public_5b83a0
#undef public_5b83ab
#undef public_5b83b3
#undef public_5b83c1

#pragma init_seg(compiler)
extern "C" void const* const public_5b8398 = __AsmFindLabelExport(&internal_5b8390, 0x5b8398);
extern "C" void const* const public_5b83a0 = __AsmFindLabelExport(&internal_5b8390, 0x5b83a0);
extern "C" void const* const public_5b83ab = __AsmFindLabelExport(&internal_5b8390, 0x5b83ab);
extern "C" void const* const public_5b83b3 = __AsmFindLabelExport(&internal_5b8390, 0x5b83b3);
extern "C" void const* const public_5b83c1 = __AsmFindLabelExport(&internal_5b8390, 0x5b83c1);
