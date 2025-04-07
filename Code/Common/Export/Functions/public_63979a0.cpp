#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6344a00);
CLANG_FORWARD_PROC_SYMBOL(public_6344aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63979ab _public_63979ab
#define public_63979b6 _public_63979b6
#define public_63979be _public_63979be
#define public_63979c9 _public_63979c9

PROC_DECLARE(0x63979a0, internal_63979a0, public_63979a0);
/* CHUNK of public_63442c0 */
extern "C" NAKED register_t __cdecl internal_63979a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_63449d0
        public_63979ab : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x10
        jmp public_6344a00
        public_63979b6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6344aa0
        public_63979be : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_63449d0
        public_63979c9 : nop
        mov eax, offset public_63b1bf0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63979a0)
        ASM_EXPORT_ENTRY_FIRST(0x63979ab, public_63979ab)
        ASM_EXPORT_ENTRY(0x63979b6, public_63979b6)
        ASM_EXPORT_ENTRY(0x63979be, public_63979be)
        ASM_EXPORT_ENTRY_LAST(0x63979c9, public_63979c9)
    }
}

#undef public_63979ab
#undef public_63979b6
#undef public_63979be
#undef public_63979c9

#pragma init_seg(compiler)
extern "C" void const* const public_63979ab = __AsmFindLabelExport(&internal_63979a0, 0x63979ab);
extern "C" void const* const public_63979b6 = __AsmFindLabelExport(&internal_63979a0, 0x63979b6);
extern "C" void const* const public_63979be = __AsmFindLabelExport(&internal_63979a0, 0x63979be);
extern "C" void const* const public_63979c9 = __AsmFindLabelExport(&internal_63979a0, 0x63979c9);
