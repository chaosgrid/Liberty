#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207470);
CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_6212ec0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a5db _public_624a5db
#define public_624a5e3 _public_624a5e3
#define public_624a5ee _public_624a5ee
#define public_624a5f9 _public_624a5f9
#define public_624a604 _public_624a604
#define public_624a60c _public_624a60c

PROC_DECLARE(0x624a5d0, internal_624a5d0, public_624a5d0);
/* CHUNK of public_623d4b0 */
extern "C" NAKED register_t __cdecl internal_624a5d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x18]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a5db : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6212ec0
        public_624a5e3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_62084b0
        public_624a5ee : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x50
        jmp public_62084b0
        public_624a5f9 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a604 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6207470
        public_624a60c : nop
        mov eax, offset public_6253650
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a5d0)
        ASM_EXPORT_ENTRY_FIRST(0x624a5db, public_624a5db)
        ASM_EXPORT_ENTRY(0x624a5e3, public_624a5e3)
        ASM_EXPORT_ENTRY(0x624a5ee, public_624a5ee)
        ASM_EXPORT_ENTRY(0x624a5f9, public_624a5f9)
        ASM_EXPORT_ENTRY(0x624a604, public_624a604)
        ASM_EXPORT_ENTRY_LAST(0x624a60c, public_624a60c)
    }
}

#undef public_624a5db
#undef public_624a5e3
#undef public_624a5ee
#undef public_624a5f9
#undef public_624a604
#undef public_624a60c

#pragma init_seg(compiler)
extern "C" void const* const public_624a5db = __AsmFindLabelExport(&internal_624a5d0, 0x624a5db);
extern "C" void const* const public_624a5e3 = __AsmFindLabelExport(&internal_624a5d0, 0x624a5e3);
extern "C" void const* const public_624a5ee = __AsmFindLabelExport(&internal_624a5d0, 0x624a5ee);
extern "C" void const* const public_624a5f9 = __AsmFindLabelExport(&internal_624a5d0, 0x624a5f9);
extern "C" void const* const public_624a604 = __AsmFindLabelExport(&internal_624a5d0, 0x624a604);
extern "C" void const* const public_624a60c = __AsmFindLabelExport(&internal_624a5d0, 0x624a60c);
