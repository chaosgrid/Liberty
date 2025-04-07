#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207c20);
CLANG_FORWARD_PROC_SYMBOL(public_6208530);
CLANG_FORWARD_PROC_SYMBOL(public_620b210);
CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a9a8 _public_624a9a8
#define public_624a9b3 _public_624a9b3
#define public_624a9be _public_624a9be
#define public_624a9c9 _public_624a9c9
#define public_624a9d1 _public_624a9d1
#define public_624a9dc _public_624a9dc

PROC_DECLARE(0x624a9a0, internal_624a9a0, public_624a9a0);
/* CHUNK of public_6243ff0 */
extern "C" NAKED register_t __cdecl internal_624a9a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_620b260
        public_624a9a8 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_620b210
        public_624a9b3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x58
        jmp public_6208530
        public_624a9be : nop
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a9c9 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_6207c20
        public_624a9d1 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a9dc : nop
        mov eax, offset public_6253a68
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a9a0)
        ASM_EXPORT_ENTRY_FIRST(0x624a9a8, public_624a9a8)
        ASM_EXPORT_ENTRY(0x624a9b3, public_624a9b3)
        ASM_EXPORT_ENTRY(0x624a9be, public_624a9be)
        ASM_EXPORT_ENTRY(0x624a9c9, public_624a9c9)
        ASM_EXPORT_ENTRY(0x624a9d1, public_624a9d1)
        ASM_EXPORT_ENTRY_LAST(0x624a9dc, public_624a9dc)
    }
}

#undef public_624a9a8
#undef public_624a9b3
#undef public_624a9be
#undef public_624a9c9
#undef public_624a9d1
#undef public_624a9dc

#pragma init_seg(compiler)
extern "C" void const* const public_624a9a8 = __AsmFindLabelExport(&internal_624a9a0, 0x624a9a8);
extern "C" void const* const public_624a9b3 = __AsmFindLabelExport(&internal_624a9a0, 0x624a9b3);
extern "C" void const* const public_624a9be = __AsmFindLabelExport(&internal_624a9a0, 0x624a9be);
extern "C" void const* const public_624a9c9 = __AsmFindLabelExport(&internal_624a9a0, 0x624a9c9);
extern "C" void const* const public_624a9d1 = __AsmFindLabelExport(&internal_624a9a0, 0x624a9d1);
extern "C" void const* const public_624a9dc = __AsmFindLabelExport(&internal_624a9a0, 0x624a9dc);
