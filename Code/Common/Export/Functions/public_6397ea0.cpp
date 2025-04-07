#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397eae _public_6397eae
#define public_6397ebc _public_6397ebc
#define public_6397eca _public_6397eca
#define public_6397ed8 _public_6397ed8
#define public_6397ee6 _public_6397ee6
#define public_6397ef4 _public_6397ef4

PROC_DECLARE(0x6397ea0, internal_6397ea0, public_6397ea0);
/* CHUNK of public_634c6f0 */
extern "C" NAKED register_t __cdecl internal_6397ea0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC8
        jmp public_63449d0
        public_6397eae : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xD0
        jmp public_63449d0
        public_6397ebc : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xD8
        jmp public_63449d0
        public_6397eca : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE0
        jmp public_63449d0
        public_6397ed8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x124
        jmp public_63449d0
        public_6397ee6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x12C
        jmp public_63449d0
        public_6397ef4 : nop
        mov eax, offset public_63b21d8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397ea0)
        ASM_EXPORT_ENTRY_FIRST(0x6397eae, public_6397eae)
        ASM_EXPORT_ENTRY(0x6397ebc, public_6397ebc)
        ASM_EXPORT_ENTRY(0x6397eca, public_6397eca)
        ASM_EXPORT_ENTRY(0x6397ed8, public_6397ed8)
        ASM_EXPORT_ENTRY(0x6397ee6, public_6397ee6)
        ASM_EXPORT_ENTRY_LAST(0x6397ef4, public_6397ef4)
    }
}

#undef public_6397eae
#undef public_6397ebc
#undef public_6397eca
#undef public_6397ed8
#undef public_6397ee6
#undef public_6397ef4

#pragma init_seg(compiler)
extern "C" void const* const public_6397eae = __AsmFindLabelExport(&internal_6397ea0, 0x6397eae);
extern "C" void const* const public_6397ebc = __AsmFindLabelExport(&internal_6397ea0, 0x6397ebc);
extern "C" void const* const public_6397eca = __AsmFindLabelExport(&internal_6397ea0, 0x6397eca);
extern "C" void const* const public_6397ed8 = __AsmFindLabelExport(&internal_6397ea0, 0x6397ed8);
extern "C" void const* const public_6397ee6 = __AsmFindLabelExport(&internal_6397ea0, 0x6397ee6);
extern "C" void const* const public_6397ef4 = __AsmFindLabelExport(&internal_6397ea0, 0x6397ef4);
