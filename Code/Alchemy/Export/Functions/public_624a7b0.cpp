#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209ea0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a7bb _public_624a7bb
#define public_624a7c6 _public_624a7c6
#define public_624a7d1 _public_624a7d1

PROC_DECLARE(0x624a7b0, internal_624a7b0, public_624a7b0);
/* CHUNK of public_62414e0 */
extern "C" NAKED register_t __cdecl internal_624a7b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x14]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a7bb : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        add ecx, 8
        jmp public_6209ea0
        public_624a7c6 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 8
        jmp public_6209ea0
        public_624a7d1 : nop
        mov eax, offset public_6253858
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a7b0)
        ASM_EXPORT_ENTRY_FIRST(0x624a7bb, public_624a7bb)
        ASM_EXPORT_ENTRY(0x624a7c6, public_624a7c6)
        ASM_EXPORT_ENTRY_LAST(0x624a7d1, public_624a7d1)
    }
}

#undef public_624a7bb
#undef public_624a7c6
#undef public_624a7d1

#pragma init_seg(compiler)
extern "C" void const* const public_624a7bb = __AsmFindLabelExport(&internal_624a7b0, 0x624a7bb);
extern "C" void const* const public_624a7c6 = __AsmFindLabelExport(&internal_624a7b0, 0x624a7c6);
extern "C" void const* const public_624a7d1 = __AsmFindLabelExport(&internal_624a7b0, 0x624a7d1);
