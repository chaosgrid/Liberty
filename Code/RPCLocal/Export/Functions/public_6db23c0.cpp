#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d852e0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db23c8 _public_6db23c8
#define public_6db23d7 _public_6db23d7
#define public_6db23e6 _public_6db23e6
#define public_6db23f5 _public_6db23f5

PROC_DECLARE(0x6db23c0, internal_6db23c0, public_6db23c0);
/* CHUNK of public_6d85340 */
extern "C" NAKED register_t __cdecl internal_6db23c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6d852e0
        public_6db23c8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x204
        jmp dword ptr ds : [public_6db3198]
        public_6db23d7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x214
        jmp dword ptr ds : [public_6db3198]
        public_6db23e6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x248
        jmp dword ptr ds : [public_6db30a4]
        public_6db23f5 : nop
        mov eax, offset public_6db6ac0
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db23c0)
        ASM_EXPORT_ENTRY_FIRST(0x6db23c8, public_6db23c8)
        ASM_EXPORT_ENTRY(0x6db23d7, public_6db23d7)
        ASM_EXPORT_ENTRY(0x6db23e6, public_6db23e6)
        ASM_EXPORT_ENTRY_LAST(0x6db23f5, public_6db23f5)
    }
}

#undef public_6db23c8
#undef public_6db23d7
#undef public_6db23e6
#undef public_6db23f5

#pragma init_seg(compiler)
extern "C" void const* const public_6db23c8 = __AsmFindLabelExport(&internal_6db23c0, 0x6db23c8);
extern "C" void const* const public_6db23d7 = __AsmFindLabelExport(&internal_6db23c0, 0x6db23d7);
extern "C" void const* const public_6db23e6 = __AsmFindLabelExport(&internal_6db23c0, 0x6db23e6);
extern "C" void const* const public_6db23f5 = __AsmFindLabelExport(&internal_6db23c0, 0x6db23f5);
