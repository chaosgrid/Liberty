#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207470);
CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_621bcf0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a3ab _public_624a3ab
#define public_624a3b3 _public_624a3b3
#define public_624a3be _public_624a3be
#define public_624a3c9 _public_624a3c9
#define public_624a3d4 _public_624a3d4
#define public_624a3dc _public_624a3dc

PROC_DECLARE(0x624a3a0, internal_624a3a0, public_624a3a0);
/* CHUNK of public_623bb80 */
extern "C" NAKED register_t __cdecl internal_624a3a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a3ab : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_621bcf0
        public_624a3b3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x6C
        jmp public_62084b0
        public_624a3be : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x70
        jmp public_62084b0
        public_624a3c9 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a3d4 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6207470
        public_624a3dc : nop
        mov eax, offset public_6253448
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a3a0)
        ASM_EXPORT_ENTRY_FIRST(0x624a3ab, public_624a3ab)
        ASM_EXPORT_ENTRY(0x624a3b3, public_624a3b3)
        ASM_EXPORT_ENTRY(0x624a3be, public_624a3be)
        ASM_EXPORT_ENTRY(0x624a3c9, public_624a3c9)
        ASM_EXPORT_ENTRY(0x624a3d4, public_624a3d4)
        ASM_EXPORT_ENTRY_LAST(0x624a3dc, public_624a3dc)
    }
}

#undef public_624a3ab
#undef public_624a3b3
#undef public_624a3be
#undef public_624a3c9
#undef public_624a3d4
#undef public_624a3dc

#pragma init_seg(compiler)
extern "C" void const* const public_624a3ab = __AsmFindLabelExport(&internal_624a3a0, 0x624a3ab);
extern "C" void const* const public_624a3b3 = __AsmFindLabelExport(&internal_624a3a0, 0x624a3b3);
extern "C" void const* const public_624a3be = __AsmFindLabelExport(&internal_624a3a0, 0x624a3be);
extern "C" void const* const public_624a3c9 = __AsmFindLabelExport(&internal_624a3a0, 0x624a3c9);
extern "C" void const* const public_624a3d4 = __AsmFindLabelExport(&internal_624a3a0, 0x624a3d4);
extern "C" void const* const public_624a3dc = __AsmFindLabelExport(&internal_624a3a0, 0x624a3dc);
